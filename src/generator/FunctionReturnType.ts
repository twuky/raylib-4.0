

export default function ConvertFunctionReturnType(type: string) {
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
