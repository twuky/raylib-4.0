import { RaylibAPI } from './generator/JSONInterface'
import { generateDefinitions } from './generator/GenerateTSDefinitions'
import { GenerateCppBindings } from './generator/GenerateBindings'


// TODO: currently compilation errors prevent these functions from being bound
let hidden_functions = [
	'SetTraceLogCallback',
	'SetLoadFileDataCallback',
	'SetSaveFileDataCallback',
	'SetLoadFileTextCallback',
	'SetSaveFileTextCallback',
	'LoadFileData',
	'GetDirectoryFiles',
	'GetDroppedFiles',
	'CompressData',
	'DecompressData',
	'DecodeDataBase64',
	'LoadImagePalette',
	'LoadImageColors',
	'LoadRenderTexture',
	'LoadFontData',
	'LoadCodepoints',
	'TextSplit',
	'LoadMaterials',
	'LoadModelAnimations',
	'LoadWaveSamples',
	'GetWindowHandle',
	'MemRealloc',
	'MemAlloc'
]

// there are currently some issues in the github hosted raylib api JSON, like the formatting of Matrix.
// We are able to use union types in the typescript defs, but the API mostly expects static types at the moment,
// so this converts types into explicit ones where needed
function filterAPINames(api: RaylibAPI) {
	
	for (let struct of api.structs) {

		if (struct.name == 'Matrix') {
			struct.fields = []
			for (let i = 0; i < 16; i++) {
				struct.fields.push({
					name: 'm'+ i,
					description: '',
					type: 'float'
				})
			}
		}

		for (let field of struct.fields) {

			if (field.type == 'Texture2D')
				field.type = 'Texture'

			if (field.type == 'Quaternion')
				field.type = 'Vector4'

		}
	}

	for (let func of api.functions) {
		if (func.returnType == 'Texture2D')
			func.returnType = 'Texture'

		if (func.returnType == 'TextureCubemap')
			func.returnType = 'Texture'

		if (func.returnType == 'RenderTexture2D')
			func.returnType = 'Texture'
	}

}

// 4.0 branch commit of the api JSON
let url = 'https://raw.githubusercontent.com/raysan5/raylib/15fffa12a672d97e1427a96abd6d26913d51dd79/parser/raylib_api.json'

let raylib_api = require('./raylib_api.json') as RaylibAPI

filterAPINames(raylib_api)

generateDefinitions(raylib_api, './index.d.ts', hidden_functions)

GenerateCppBindings(raylib_api, './raylib_4.0.cc', hidden_functions)