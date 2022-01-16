import * as fs from 'fs'
import { RaylibAPI } from './JSONInterface'

let raylib_colors = `
export const LIGHTGRAY: Color
export const GRAY: Color
export const DARKGRAY: Color
export const YELLOW: Color
export const GOLD: Color
export const ORANGE: Color
export const PINK: Color
export const RED: Color
export const MAROON: Color
export const GREEN: Color
export const LIME: Color
export const DARKGREEN: Color
export const SKYBLUE: Color
export const BLUE: Color
export const DARKBLUE: Color
export const PURPLE: Color
export const VIOLET: Color
export const DARKPURPLE: Color
export const BEIGE: Color
export const BROWN: Color
export const DARKBROWN: Color
export const WHITE: Color
export const BLACK: Color
export const BLANK: Color
export const MAGENTA: Color
export const RAYWHITE: Color
`

let wrapped_functions = `
	/** Set shader uniform value float */
	export function SetShaderFloat(shader: Shader, location: number, value: number): void

	/** Set shader uniform value int */
	export function SetShaderInt(shader: Shader, location: number, value: number): void

	/** Set shader uniform value Vector2 */
	export function SetShaderVector2(shader: Shader, location: number, value: Vector2): void

	/** Set shader uniform value Vector3 */
	export function SetShaderVector3(shader: Shader, location: number, value: Vector3): void

	/** Set shader uniform value Vector4 */
	export function SetShaderVector4(shader: Shader, location: number, value: Vector4): void

	/** Set shader uniform value Sampler2D (Texture) */
	export function SetShaderSampler2D(shader: Shader, location: number, value: Texture2D): void
`

let constructors = `
	/** Create Vector2 */
	export function Vector2(x: number, y: number): Vector2

	/** Create Vector3 */
	export function Vector2(x: number, y: number, z: number): Vector3

	/** Create Vector4 */
	export function Vector2(x: number, y: number, z: number): Vector4

	/** Create Color */
	export function Color(r: number, g: number, b: number, a: number): Color
`

function argumentTypeConversion(arg: string) {

	if (arg === 'char') {return 'string'}
	if (arg === 'char *') {return 'string'}
	if (arg === 'const char *') {return 'string'}
	if (arg === 'const char **') {return 'string'}
	if (arg === 'char **') {return 'string'}
	if (arg === 'const unsigned char *') {return 'Buffer'}
	if (arg === 'unsigned char *') {return 'string'}

	if (arg === 'int') {return 'number'}
	if (arg === 'float') {return 'number'}
	if (arg === 'unsigned int') {return 'number'}
	// the JSON reads Color struct as rgba: unsigned char ?
	if (arg === 'unsigned char') {return 'number'}
	if (arg === 'long') {return 'number'}
	if (arg === 'double') {return 'number'}

	if (arg === 'void *') {return 'any'}
	if (arg === 'const void *') {return 'any'}

	if (arg === 'bool') {return 'boolean'}
	
	if (arg === 'float *') {return 'number'}
	if (arg === 'int *') {return 'number'}
	if (arg === 'unsigned short *') {return 'number'}
	if (arg === 'unsigned int *') {return 'number'}

	if (arg === 'const CharInfo') {return 'CharInfo'}
	// Camera2D arguments are already in JSON 
	if (arg === 'Camera') {return 'Camera3D'}
	if (arg === 'rAudioBuffer *') {return 'any'}

	if (arg === 'Color *') {return 'number'}

	// fallback (mostly for Raylib struct types or void)
	arg = arg.replace('const ', '')
	if (arg.includes('*')) {
		if (arg === 'Transform **') {return 'number'}
		if (arg === 'Rectangle **') {return 'number'}
		if (arg === 'ModelAnimation*') {return 'number'}
		
		return (arg.slice(0, arg.length-2))
	}

	return arg
}

export function generateDefinitions(data: RaylibAPI, outputPath: string, hidden_functions: string[]) {
	let defs = ''
	let tab = '	'

	for (let e of data.enums) {
		let string = tab + `/** ${e.description} */\n`
		string += tab
		string += `export enum ${e.name} {\n`
		for (let val of e.values) {
			string += tab + tab + `/** ${val.description} */\n`
			string += tab + tab + `${val.name} = ${val.value},\n`
		}
		string += tab + '}\n\n'
		defs += string
	}

	defs += raylib_colors

	for (let struct of data.structs) {

		let properties = ''
		for (let prop of struct.fields) {
			let prop_docstring = tab + tab + `/** ${prop.description} */\n`
			let prop_val = tab + tab + `${prop.name.split('[')[0]}: ${argumentTypeConversion(prop.type)}\n\n`
			let prop_text = prop_docstring + prop_val
			properties += prop_text
		}

		let docstring = '\n' + tab + `/** ${struct.description} */\n`
		let export_interface = docstring + tab +`export interface ${struct.name} {\n\n${properties}	}\n`
		defs += export_interface
	}

	defs += `\n	export type Texture2D = Texture\n`
	defs += `\n	export type RenderTexture2D = Texture\n`
	defs += `\n	export type TextureCubemap = Texture2D\n`
	defs += '\n	export type Quaternion = Vector4\n'
	defs += '\n	export type TraceLogCallback = (logType: number, text: string, ...vaArgs: any) => void\n'
	defs += '\n	export type Camera = Camera2D | Camera3D\n\n'
	defs += '\n export type LoadFileDataCallback = (logType: number, text: string, ...vaArgs: any) => void\n\n'
	defs += '\n export type SaveFileDataCallback = (logType: number, text: string, ...vaArgs: any) => void\n\n'
	defs += '\n export type LoadFileTextCallback = (logType: number, text: string, ...vaArgs: any) => void\n\n'
	defs += '\n export type SaveFileTextCallback = (logType: number, text: string, ...vaArgs: any) => void\n\n'

	defs += constructors

	for (let func of data.functions) {
		if (hidden_functions.includes(func.name)) {continue}
		
		let args = ''
		for (let key in func.params) {
			if (func.params.hasOwnProperty(key)) {
				// currently used by TraceLog and StringFormat
				if (key === '') {
					args += '...args: any, '
				} else {
					//@ts-expect-error
					args += `${key}: ${argumentTypeConversion(func.params[key])}, `
				}
			}
		}
		args = args.slice(0, args.length - 2)
		let docstring = tab + `/** ${func.description} */\n`
		let export_function = tab + `export function ${func.name}(${args}): ${argumentTypeConversion(func.returnType)}`
		defs += docstring + export_function + '\n\n'
	}

	defs += wrapped_functions

	let definitions = `declare module 'raylib-4.0' {\n${defs}}`

	fs.writeFileSync(outputPath, definitions)
}