import * as fs from "fs";
import { RaylibAPI, RaylibFunction, RaylibStruct } from "./JSONInterface";

let wrapped_functions = `
Napi::Object WrapUpdateCamera3D(const Napi::CallbackInfo& info) {
	Camera3D params = Camera3DFromNAPIObject(info[0].As<Napi::Object>());
	UpdateCamera(
	 &params
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("position", Vector3ToNAPIObject(info.Env(), params.position));
	out.Set("target", Vector3ToNAPIObject(info.Env(), params.target));
	out.Set("up", Vector3ToNAPIObject(info.Env(), params.up));
	out.Set("fovy", params.fovy);
	out.Set("projection", params.projection);
	return out;
}

void SetShaderFloat(const Napi::CallbackInfo& info) {
	float value = info[2].As<Napi::Number>();
  SetShaderValueV(
		ShaderFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		&value,
		SHADER_UNIFORM_FLOAT,
		1
	);
}

void SetShaderInt(const Napi::CallbackInfo& info) {
	int value = info[2].As<Napi::Number>();
  SetShaderValueV(
		ShaderFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		&value,
		SHADER_UNIFORM_INT,
		1
	);
}

void SetShaderVector2(const Napi::CallbackInfo& info) {
	Vector2 value = Vector2FromNAPIObject(info[2].As<Napi::Object>());
  const float fvalue[2] = { value.x, value.y };
  SetShaderValueV(
		ShaderFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		&fvalue,
		SHADER_UNIFORM_VEC2,
		1
	);
}

void SetShaderVector3(const Napi::CallbackInfo& info) {
	Vector3 value = Vector3FromNAPIObject(info[2].As<Napi::Object>());
  const float fvalue[3] = { value.x, value.y, value.z };
  SetShaderValueV(
		ShaderFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		&fvalue,
		SHADER_UNIFORM_VEC3,
		1
	);
}

void SetShaderVector4(const Napi::CallbackInfo& info) {
	Vector4 value = Vector4FromNAPIObject(info[2].As<Napi::Object>());
  const float fvalue[4] = { value.x, value.y, value.z, value.w };
  SetShaderValueV(
		ShaderFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		&fvalue,
		SHADER_UNIFORM_VEC4,
		1
	);
}

void SetShaderSampler2D(const Napi::CallbackInfo& info) {
	Texture value = TextureFromNAPIObject(info[2].As<Napi::Object>());
  SetShaderValueV(
		ShaderFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		&value,
		SHADER_UNIFORM_SAMPLER2D,
		1
	);
}

`
let wrapped_function_bindings = `
	exports.Set(
		Napi::String::New(env, "SetShaderFloat"),
		Napi::Function::New(env, SetShaderFloat)
	);

	exports.Set(
		Napi::String::New(env, "SetShaderInt"),
		Napi::Function::New(env, SetShaderInt)
	);

	exports.Set(
		Napi::String::New(env, "SetShaderVector2"),
		Napi::Function::New(env, SetShaderVector2)
	);

	exports.Set(
		Napi::String::New(env, "SetShaderVector3"),
		Napi::Function::New(env, SetShaderVector3)
	);

	exports.Set(
		Napi::String::New(env, "SetShaderVector4"),
		Napi::Function::New(env, SetShaderVector4)
	);

	exports.Set(
		Napi::String::New(env, "SetShaderSampler2D"),
		Napi::Function::New(env, SetShaderSampler2D)
	);

	exports.Set(
		Napi::String::New(env, "UpdateCamera3D"),
		Napi::Function::New(env, WrapUpdateCamera3D)
	);
`

let tab = `	`
let br = "\n"

let constructors = [
	'Vector2',
	'Vector3',
	'Vector4',
	'Matrix',
	'Color',
	'Rectangle',
	'NPatchInfo',
	'Camera2D',
	'Camera3D',
	'Transform',
	'Ray'
]


function ConvertFunctionReturnType(type: string) {
	if (type == 'void')
		return 'void'

	// cyrrently only in GetWindowHandle?
	if (type == 'void *')
		return 'void *'

	if (type == 'int')
		return 'Napi::Number'

	if (type == 'float')
		return 'Napi::Number'

	if (type == 'double')
		return 'Napi::Number'

	if (type == 'long')
		return 'Napi::Number'

	if (type == 'unsigned int')
		return 'Napi::Number'

	if (type == 'const char *')
		return 'Napi::String'

	if (type == 'char *')
		return 'Napi::String'

	if (type == 'unsigned char *')
		return 'Napi::String'

	if (type == 'char **')
		return 'Napi::Array'

	if (type == 'const char **')
		return 'Napi::Array'

	if (type == 'int *')
		return 'Napi::Array'

	if (type == 'float *')
		return 'Napi::Array'

	if (type == 'bool')
		return 'Napi::Boolean'

	if (type) {
		if (type.endsWith('*'))
			return 'Napi::Array'
		// Should Be class name
		if (type[0].toUpperCase() == type[0])
			return 'Napi::Object'
	}
	
	throw new Error("FUNCTION RETURN TYPE NOT IMPLEMENTED: " + type);
}

function convert_info_arg(index: number, type: string) {
	if (type == 'bool')
		return `info[${index}].As<Napi::Boolean>();`

	if (type == 'float')
		return `info[${index}].As<Napi::Number>();`

	if (type == 'int')
		return `info[${index}].As<Napi::Number>();`

	if (type == 'unsigned int')
		return `info[${index}].As<Napi::Number>();`

	if (type == 'const char *')
		return `info[${index}].As<Napi::String>().Utf8Value().c_str();`

	if (type == 'unsigned char')
		return `info[${index}].As<Napi::Number>().Uint32Value();`

	if (type == 'char')
		return `info[${index}].As<Napi::Number>().Uint32Value();`

	if (type == 'Camera')
		type = 'Camera3D'

	if (type == 'RenderTexture2D')
		type = 'RenderTexture'

	if (type == 'Texture2D')
		type = 'Texture'

	// Handles Arrays of things
	if (type.endsWith('*'))
		return `(${type})info[${index}].As<Napi::Number>().Int64Value();`

	// Should Be class name
	if (type[0].toUpperCase() == type[0])
		return `${type}FromNAPIObject(info[${index}].As<Napi::Object>());`

	throw new Error("C TYPE NOT IMPLEMENTED: " + type);
	
}

function convert_napi_object_property(name: string, type: string) {

	if (type == 'bool')
		return `obj.Get("${name}").As<Napi::Boolean>();`

	if (type == 'float')
		return `obj.Get("${name}").As<Napi::Number>();`

	if (type == 'int')
		return `obj.Get("${name}").As<Napi::Number>();`

	if (type == 'unsigned int')
		return `obj.Get("${name}").As<Napi::Number>();`

	if (type == 'const char *')
		return `obj.Get("${name}").As<Napi::String>().Utf8Value().c_str()`

	// Used in Color
	if (type == 'unsigned char')
		return `obj.Get("${name}").As<Napi::Number>().Uint32Value();`

	//INFO: DON'T KNOW IF THIS IS RIGHT
	if (type == 'char')
		return `obj.Get("${name}").As<Napi::Number>().Uint32Value();`

	if (type.endsWith('*'))
		return `(${type})obj.Get("${name}").As<Napi::Number>().Int64Value();`

	if (type == 'RenderTexture2D')
		type = 'RenderTexture'

	if (type == 'Texture2D')
		type = 'Texture'

	// Should Be class name
	if (type[0].toUpperCase() == type[0])
		return `${type}FromNAPIObject(obj.Get("${name}").As<Napi::Object>());`

	throw new Error("C TYPE NOT IMPLEMENTED: " + type)
}


function GenerateStructConverters(struct: RaylibStruct) {
	
	if (struct.name == 'CharInfo') struct.name = 'GlyphInfo'
	

	// Generate internally used Cpp deserializer for this struct
	let from_napi_object = ''

	from_napi_object += `${struct.name} ${struct.name}FromNAPIObject(Napi::Object obj) {` + br
	from_napi_object += tab + `${struct.name} out = ${struct.name}();` + br

	for (let property of struct.fields) {
		from_napi_object += tab + `out.${property.name} = ` + convert_napi_object_property(property.name, property.type) + br
	}
	from_napi_object += tab + 'return out;' + br
	from_napi_object += '}' + br + br

	// Generate exported constructor function for this struct
	let to_napi_object = ''
	if (true) {
		
		let constructor_name = `Bind${struct.name}`
	
		to_napi_object += `Napi::Object ${constructor_name}(const Napi::CallbackInfo& info) {` + br
		to_napi_object += tab + `${struct.name} object = ${struct.name}();` + br
		to_napi_object += tab + 'Napi::Object out = Napi::Object::New(info.Env());' + br
	
		for (let index = 0; index < struct.fields.length; index++) {
			const field = struct.fields[index]
			to_napi_object += tab + `object.${field.name} = ` + convert_info_arg(index, field.type) + br
			if (field.type.endsWith('*')) {
				to_napi_object += tab + `out.Set("${field.name}", (int64_t)object.${field.name});` + br
			} else {
				if (struct.name[0].toUpperCase() == struct.name[0]) {
					to_napi_object += tab + `out.Set("${field.name}", info[${index}].As<Napi::Object>());` + br
				} else {
					to_napi_object += tab + `out.Set("${field.name}", object.${field.name});` + br
				}
			}
			
		}
		to_napi_object += tab + 'return out;' + br
		to_napi_object += '}' + br + br
	}

	let napi_object_constructor = ''
	napi_object_constructor += `Napi::Object ${struct.name}ToNAPIObject(napi_env env, ${struct.name} object) {` + br
	napi_object_constructor += tab + 'Napi::Object out = Napi::Object::New(env);' + br

	for (let index = 0; index < struct.fields.length; index++) {
		const field = struct.fields[index]
		if (field.type[0].toUpperCase() == field.type[0]) {
			if (field.type.endsWith('*')) {
				napi_object_constructor += tab + `out.Set("${field.name}", (int64_t)object.${field.name});` + br
			 } else {
				napi_object_constructor += tab + `out.Set("${field.name}", ${field.type}ToNAPIObject(env, object.${field.name}));` + br
			 }
		} else if (field.type.endsWith('*')) {
			napi_object_constructor += tab + `out.Set("${field.name}", (int64_t)object.${field.name});` + br
		} else {
			napi_object_constructor += tab + `out.Set("${field.name}", object.${field.name});` + br
		}
	}
	napi_object_constructor += tab + 'return out;' + br
	napi_object_constructor += '}' + br + br

	return from_napi_object + to_napi_object + napi_object_constructor
}

function GenerateFunctionBinding(func: RaylibFunction, structs: RaylibStruct[], hidden_functions: string[]) {
	if (hidden_functions.includes(func.name)) return ''
	let function_bind = ''
	let returnType = ConvertFunctionReturnType(func.returnType)

	function_bind += returnType + ` Bind${func.name}(const Napi::CallbackInfo& info) {` + br
	let function_call = func.name + '(' + br
	let index = -1
	for (let key in func.params) { if (func.params.hasOwnProperty(key)) {
		if (index < 0) index = 0
		
		let type = func.params[key] as any as string
		if (type) {
			let arg = convert_info_arg(index, type)
			function_call += tab + tab + arg.slice(0, arg.length-1) + ',' + br
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
		function_bind += tab + func.returnType + ' obj = ' + function_call + ';' + br
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

	return function_bind + br + br
}

export function GenerateCppBindings(api: RaylibAPI, output_path: string, hidden_functions: string[]) {

	let binding_text = ''

	binding_text += `#include <napi.h>`+ br
	binding_text += `#include "./raylib/include/raylib.h"`+ br
	binding_text += `using namespace Napi;`+ br + br

	for (let struct of api.structs) {
		let struct_funcs = GenerateStructConverters(struct)
		binding_text += struct_funcs
	}

	for (let func of api.functions) {
		binding_text += GenerateFunctionBinding(func, api.structs, hidden_functions)
	}

	binding_text += wrapped_functions

	binding_text += br + 'Napi::Object Init(Napi::Env env, Napi::Object exports) {' + br
	for (let struct of api.structs) {
		if (constructors.includes(struct.name)) {
			binding_text += `
	exports.Set(
		Napi::String::New(env, "${struct.name}"),
		Napi::Function::New(env, Bind${struct.name})
	);
`
		}
	}

	for (let func of api.functions) {
		if (hidden_functions.includes(func.name)) {
			continue
		}
		binding_text += `
	exports.Set(
		Napi::String::New(env, "${func.name}"),
		Napi::Function::New(env, Bind${func.name})
	);
`
	}

	binding_text += wrapped_function_bindings

	binding_text += br + tab + 'return exports;'
	binding_text += br + '}' + br + br

	binding_text += 'NODE_API_MODULE(addon, Init);'

	fs.writeFileSync(output_path, binding_text)

}