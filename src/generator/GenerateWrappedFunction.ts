import ConvertFunctionReturnType from "./FunctionReturnType"
import convert_info_arg from "./InfoArgs"
import { RaylibFunction, RaylibStruct } from "./JSONInterface"

let wrapped = [
	'ImageFormat',
	'ImageToPOT',
	'ImageCrop',
	'ImageAlphaCrop',
	'ImageAlphaClear',
	'ImageAlphaMask',
	'ImageAlphaPremultiply',
	'ImageResize',
	'ImageResizeNN',
	'ImageResizeCanvas',
	'ImageMipmaps',
	'ImageDither',
	'ImageFlipVertical',
	'ImageFlipHorizontal',
	'ImageRotateCW',
	'ImageRotateCCW',
	'ImageColorTint',
	'ImageColorInvert',
	'ImageColorGrayscale',
	'ImageColorContrast',
	'ImageColorBrightness',
	'ImageColorReplace',
	'ImageClearBackground',
	'ImageDrawPixel',
	'ImageDrawPixelV',
	'ImageDrawLine',
	'ImageDrawLineV',
	'ImageDrawCircle',
	'ImageDrawCircleV',
	'ImageDrawRectangle',
	'ImageDrawRectangleV',
	'ImageDrawRectangleRec',
	'ImageDrawRectangleLines',
	'ImageDraw',
	'ImageDrawText',
	'ImageDrawTextEx',
]

let tab = '	'
let br = '\n'

export default function wrappedFunctions(funcs: RaylibFunction[], structs: RaylibStruct[]) {
	let wrapped_functions = ''
	let wrapped_bindings = ''

	for (let func of funcs) {
		if (!wrapped.includes(func.name)) {continue}
		let function_bind = ''

		// Changing the return type because the function is normally void, but we want it to return a changed pointer argument
		//@ts-ignore
		let returnType = func.params[Object.keys(func.params)[0]] as string
		returnType = returnType.slice(0, returnType.length - 2)
		func = {
			description: func.description,
			name: func.name,
			params: func.params,
			returnType: returnType
		}
		returnType = ConvertFunctionReturnType(returnType)
		function_bind += returnType + ` Wrap${func.name}(const Napi::CallbackInfo& info) {` + br

		let function_call = func.name + '(' + br
		let index = -1
		for (let key in func.params) { if (func.params.hasOwnProperty(key)) {
			if (index < 0) index = 0
			
			let type = func.params[key] as any as string
			if (type) {
				let arg = convert_info_arg(index, type)
				
				if (index == 0) {
					function_call += tab + tab + '&obj' + ',' + br
				} else {
					function_call += tab + tab + arg.slice(0, arg.length-1) + ',' + br
				}
			}
			index++
		}}
	
		// not all funcs take args - fixes format
		if (index >= 0) {
			function_call = function_call.slice(0, function_call.length - 2) + br
		} else {
			function_call = function_call.slice(0, function_call.length - 1)
		}
		function_call += tab + ')'
	
		if (returnType == 'void' || returnType == 'void *') {
			function_bind += tab + function_call + ';' + br + '}'
		} else if (returnType.includes('Object')) {
			// This is when we are returning a raylib struct
			function_bind += tab + func.returnType + ' obj = ' + `${func.returnType}FromNAPIObject(info[0].As<Napi::Object>())` + ';' + br
			function_bind += tab + function_call + ';' + br
			function_bind += tab + 'Napi::Object out = Napi::Object::New(info.Env());' + br
			let func_struct: RaylibStruct = {} as RaylibStruct
			for (let struct of structs) {
				if (struct.name == func.returnType)
					func_struct = struct
			}
	
			if (!func_struct.fields)
				throw new Error("STRUCT SEARCH ERROR")
	
			for (let field of func_struct.fields) {
	
				let field_type = ''
				let field_struct: RaylibStruct
				for (let struct of structs) {
					if (struct.name == field.type) {
						field_type = struct.name
						field_struct = struct
					}
				}
	
				if (field_type == '') {
					
					if (field.type.endsWith('*')) {
						function_bind +=  tab + `out.Set("${field.name}", (int64_t)obj.${field.name});` + br
					} else {
						function_bind +=  tab + `out.Set("${field.name}", obj.${field.name});` + br
					}
				} else {
					if (field_type.endsWith('*')) {
						function_bind +=  tab + `out.Set("${field.name}", ${field_type}ToNAPIObject(info.Env(), (int64_t)obj.${field.name}));` + br
					} else {
						function_bind +=  tab + `out.Set("${field.name}", ${field_type}ToNAPIObject(info.Env(), obj.${field.name}));` + br
					}
				}
	
			}	
			
			function_bind += tab + 'return out;' + br + '}' + br
	
		} else {
			function_bind += tab + 'return ' + returnType + '::New(info.Env(), ' + br
			function_bind += tab + tab + function_call + br + ');' + br + '}'
		}
	
		wrapped_functions += function_bind + br
		wrapped_bindings += `
	exports.Set(
		Napi::String::New(env, "Wrap${func.name}"),
		Napi::Function::New(env, Wrap${func.name})
	);
`
	}
	return {
		funcs: wrapped_functions,
		bindings: wrapped_bindings
	}
}