export interface RaylibStruct {
	name: string
	description: string
	fields: {
		name: string
		type: string
		description: string
	}[]
}

export interface RaylibEnum {
	name: string
	description: string
	values: {
		name: string
		value: number
		description: string
	}[]
}

export interface RaylibFunction {
	name: string
	description: string
	returnType: string
	params: {
		[key: string]: string
	}[]
}

export interface RaylibAPI {
	structs: RaylibStruct[]
	enums: RaylibEnum[]
	functions: RaylibFunction[]
}