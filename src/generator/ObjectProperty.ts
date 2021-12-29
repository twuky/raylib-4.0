export default function convert_napi_object_property(name: string, type: string) {

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