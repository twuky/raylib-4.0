import * as fs from "fs";
import ConvertFunctionReturnType from "./FunctionReturnType";
import wrappedFunctions from "./GenerateWrappedFunction";
import convert_info_arg from "./InfoArgs";
import { RaylibAPI, RaylibFunction, RaylibStruct } from "./JSONInterface";
import convert_napi_object_property from "./ObjectProperty";

let wrapped_functions = `
void DrawTextureProZ(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float depth, float rotation, Color tint) {
	// Check if texture is valid
	if (texture.id > 0) {
		rlEnableDepthTest();
		float width = (float)texture.width;
		float height = (float)texture.height;

		bool flipX = false;

		if (source.width < 0) { flipX = true; source.width *= -1; }
		if (source.height < 0) source.y -= source.height;

		Vector2 topLeft = { 0 };
		Vector2 topRight = { 0 };
		Vector2 bottomLeft = { 0 };
		Vector2 bottomRight = { 0 };

		// Only calculate rotation if needed
		if (rotation == 0.0f)
		{
				float x = dest.x - origin.x;
				float y = dest.y - origin.y;
				topLeft = (Vector2){ x, y };
				topRight = (Vector2){ x + dest.width, y };
				bottomLeft = (Vector2){ x, y + dest.height };
				bottomRight = (Vector2){ x + dest.width, y + dest.height };
		}
		else
		{
				float sinRotation = sinf(rotation*DEG2RAD);
				float cosRotation = cosf(rotation*DEG2RAD);
				float x = dest.x;
				float y = dest.y;
				float dx = -origin.x;
				float dy = -origin.y;

				topLeft.x = x + dx*cosRotation - dy*sinRotation;
				topLeft.y = y + dx*sinRotation + dy*cosRotation;

				topRight.x = x + (dx + dest.width)*cosRotation - dy*sinRotation;
				topRight.y = y + (dx + dest.width)*sinRotation + dy*cosRotation;

				bottomLeft.x = x + dx*cosRotation - (dy + dest.height)*sinRotation;
				bottomLeft.y = y + dx*sinRotation + (dy + dest.height)*cosRotation;

				bottomRight.x = x + (dx + dest.width)*cosRotation - (dy + dest.height)*sinRotation;
				bottomRight.y = y + (dx + dest.width)*sinRotation + (dy + dest.height)*cosRotation;
		}

		rlCheckRenderBatchLimit(4);     // Make sure there is enough free space on the batch buffer

		rlSetTexture(texture.id);
		rlBegin(RL_QUADS);

				rlColor4ub(tint.r, tint.g, tint.b, tint.a);
				rlNormal3f(0.0f, 0.0f, 1.0f);                          // Normal vector pointing towards viewer

				// Top-left corner for texture and quad
				if (flipX) rlTexCoord2f((source.x + source.width)/width, source.y/height);
				else rlTexCoord2f(source.x/width, source.y/height);
				rlVertex3f(topLeft.x, topLeft.y, depth);

				// Bottom-left corner for texture and quad
				if (flipX) rlTexCoord2f((source.x + source.width)/width, (source.y + source.height)/height);
				else rlTexCoord2f(source.x/width, (source.y + source.height)/height);
				rlVertex3f(bottomLeft.x, bottomLeft.y, depth);

				// Bottom-right corner for texture and quad
				if (flipX) rlTexCoord2f(source.x/width, (source.y + source.height)/height);
				else rlTexCoord2f((source.x + source.width)/width, (source.y + source.height)/height);
				rlVertex3f(bottomRight.x, bottomRight.y, depth);

				// Top-right corner for texture and quad
				if (flipX) rlTexCoord2f(source.x/width, source.y/height);
				else rlTexCoord2f((source.x + source.width)/width, source.y/height);
				rlVertex3f(topRight.x, topRight.y, depth);

		rlEnd();
		rlSetTexture(0);
	}
}

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

void BindDrawTextureProZ(const Napi::CallbackInfo& info) {
	DrawTextureProZ(
		TextureFromNAPIObject(info[0].As<Napi::Object>()),
		RectangleFromNAPIObject(info[1].As<Napi::Object>()),
		RectangleFromNAPIObject(info[2].As<Napi::Object>()),
		Vector2FromNAPIObject(info[3].As<Napi::Object>()),
		info[4].As<Napi::Number>(),
		info[5].As<Napi::Number>(),
		ColorFromNAPIObject(info[6].As<Napi::Object>())
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

	exports.Set(
		Napi::String::New(env, "DrawTextureProZ"),
		Napi::Function::New(env, BindDrawTextureProZ)
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
		//to_napi_object += tab + `${struct.name} object = ${struct.name}();` + br
		to_napi_object += tab + 'Napi::Object out = Napi::Object::New(info.Env());' + br
	
		for (let index = 0; index < struct.fields.length; index++) {
			const field = struct.fields[index]
			//to_napi_object += tab + `object.${field.name} = ` + convert_info_arg(index, field.type) + br
			to_napi_object += tab + `out.Set("${field.name}", info[${index}].As<Napi::Object>());` + br
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

	let auto_wrapped = wrappedFunctions(api.functions, api.structs)

	let binding_text = ''

	binding_text += `#include <napi.h>`+ br
	binding_text += `#include <math.h>`+ br
	binding_text += `#include "./raylib/include/raylib.h"`+ br
	binding_text += `#include "./raylib/include/rlgl.h"`+ br
	binding_text += `using namespace Napi;`+ br + br

	for (let struct of api.structs) {
		let struct_funcs = GenerateStructConverters(struct)
		binding_text += struct_funcs
	}

	for (let func of api.functions) {
		binding_text += GenerateFunctionBinding(func, api.structs, hidden_functions)
	}

	binding_text += auto_wrapped.funcs
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

	binding_text += auto_wrapped.bindings

	binding_text += br + tab + 'return exports;'
	binding_text += br + '}' + br + br

	binding_text += 'NODE_API_MODULE(addon, Init);'

	fs.writeFileSync(output_path, binding_text)

}