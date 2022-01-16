
export default function convert_info_arg(index: number, type: string) {
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

	if (type == 'const unsigned char *' || type == 'const unsigned char*')
		return `info[${index}].As<Napi::Buffer<unsigned char>>().Data();`

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