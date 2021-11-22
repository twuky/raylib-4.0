declare module 'raylib-4.0' {
	/**  */
	export enum ConfigFlags {
		/**  */
		FLAG_VSYNC_HINT = 64,
		/**  */
		FLAG_FULLSCREEN_MODE = 2,
		/**  */
		FLAG_WINDOW_RESIZABLE = 4,
		/**  */
		FLAG_WINDOW_UNDECORATED = 8,
		/**  */
		FLAG_WINDOW_HIDDEN = 128,
		/**  */
		FLAG_WINDOW_MINIMIZED = 512,
		/**  */
		FLAG_WINDOW_MAXIMIZED = 1024,
		/**  */
		FLAG_WINDOW_UNFOCUSED = 2048,
		/**  */
		FLAG_WINDOW_TOPMOST = 4096,
		/**  */
		FLAG_WINDOW_ALWAYS_RUN = 256,
		/**  */
		FLAG_WINDOW_TRANSPARENT = 16,
		/**  */
		FLAG_WINDOW_HIGHDPI = 8192,
		/**  */
		FLAG_MSAA_4X_HINT = 32,
		/**  */
		FLAG_INTERLACED_HINT = 65536,
	}

	/**  */
	export enum TraceLogLevel {
		/**  */
		LOG_ALL = 0,
		/**  */
		LOG_TRACE = 1,
		/**  */
		LOG_DEBUG = 2,
		/**  */
		LOG_INFO = 3,
		/**  */
		LOG_WARNING = 4,
		/**  */
		LOG_ERROR = 5,
		/**  */
		LOG_FATAL = 6,
		/**  */
		LOG_NONE = 7,
	}

	/**  */
	export enum KeyboardKey {
		/**  */
		KEY_NULL = 0,
		/**  */
		KEY_APOSTROPHE = 39,
		/**  */
		KEY_COMMA = 44,
		/**  */
		KEY_MINUS = 45,
		/**  */
		KEY_PERIOD = 46,
		/**  */
		KEY_SLASH = 47,
		/**  */
		KEY_ZERO = 48,
		/**  */
		KEY_ONE = 49,
		/**  */
		KEY_TWO = 50,
		/**  */
		KEY_THREE = 51,
		/**  */
		KEY_FOUR = 52,
		/**  */
		KEY_FIVE = 53,
		/**  */
		KEY_SIX = 54,
		/**  */
		KEY_SEVEN = 55,
		/**  */
		KEY_EIGHT = 56,
		/**  */
		KEY_NINE = 57,
		/**  */
		KEY_SEMICOLON = 59,
		/**  */
		KEY_EQUAL = 61,
		/**  */
		KEY_A = 65,
		/**  */
		KEY_B = 66,
		/**  */
		KEY_C = 67,
		/**  */
		KEY_D = 68,
		/**  */
		KEY_E = 69,
		/**  */
		KEY_F = 70,
		/**  */
		KEY_G = 71,
		/**  */
		KEY_H = 72,
		/**  */
		KEY_I = 73,
		/**  */
		KEY_J = 74,
		/**  */
		KEY_K = 75,
		/**  */
		KEY_L = 76,
		/**  */
		KEY_M = 77,
		/**  */
		KEY_N = 78,
		/**  */
		KEY_O = 79,
		/**  */
		KEY_P = 80,
		/**  */
		KEY_Q = 81,
		/**  */
		KEY_R = 82,
		/**  */
		KEY_S = 83,
		/**  */
		KEY_T = 84,
		/**  */
		KEY_U = 85,
		/**  */
		KEY_V = 86,
		/**  */
		KEY_W = 87,
		/**  */
		KEY_X = 88,
		/**  */
		KEY_Y = 89,
		/**  */
		KEY_Z = 90,
		/**  */
		KEY_LEFT_BRACKET = 91,
		/**  */
		KEY_BACKSLASH = 92,
		/**  */
		KEY_RIGHT_BRACKET = 93,
		/**  */
		KEY_GRAVE = 96,
		/**  */
		KEY_SPACE = 32,
		/**  */
		KEY_ESCAPE = 256,
		/**  */
		KEY_ENTER = 257,
		/**  */
		KEY_TAB = 258,
		/**  */
		KEY_BACKSPACE = 259,
		/**  */
		KEY_INSERT = 260,
		/**  */
		KEY_DELETE = 261,
		/**  */
		KEY_RIGHT = 262,
		/**  */
		KEY_LEFT = 263,
		/**  */
		KEY_DOWN = 264,
		/**  */
		KEY_UP = 265,
		/**  */
		KEY_PAGE_UP = 266,
		/**  */
		KEY_PAGE_DOWN = 267,
		/**  */
		KEY_HOME = 268,
		/**  */
		KEY_END = 269,
		/**  */
		KEY_CAPS_LOCK = 280,
		/**  */
		KEY_SCROLL_LOCK = 281,
		/**  */
		KEY_NUM_LOCK = 282,
		/**  */
		KEY_PRINT_SCREEN = 283,
		/**  */
		KEY_PAUSE = 284,
		/**  */
		KEY_F1 = 290,
		/**  */
		KEY_F2 = 291,
		/**  */
		KEY_F3 = 292,
		/**  */
		KEY_F4 = 293,
		/**  */
		KEY_F5 = 294,
		/**  */
		KEY_F6 = 295,
		/**  */
		KEY_F7 = 296,
		/**  */
		KEY_F8 = 297,
		/**  */
		KEY_F9 = 298,
		/**  */
		KEY_F10 = 299,
		/**  */
		KEY_F11 = 300,
		/**  */
		KEY_F12 = 301,
		/**  */
		KEY_LEFT_SHIFT = 340,
		/**  */
		KEY_LEFT_CONTROL = 341,
		/**  */
		KEY_LEFT_ALT = 342,
		/**  */
		KEY_LEFT_SUPER = 343,
		/**  */
		KEY_RIGHT_SHIFT = 344,
		/**  */
		KEY_RIGHT_CONTROL = 345,
		/**  */
		KEY_RIGHT_ALT = 346,
		/**  */
		KEY_RIGHT_SUPER = 347,
		/**  */
		KEY_KB_MENU = 348,
		/**  */
		KEY_KP_0 = 320,
		/**  */
		KEY_KP_1 = 321,
		/**  */
		KEY_KP_2 = 322,
		/**  */
		KEY_KP_3 = 323,
		/**  */
		KEY_KP_4 = 324,
		/**  */
		KEY_KP_5 = 325,
		/**  */
		KEY_KP_6 = 326,
		/**  */
		KEY_KP_7 = 327,
		/**  */
		KEY_KP_8 = 328,
		/**  */
		KEY_KP_9 = 329,
		/**  */
		KEY_KP_DECIMAL = 330,
		/**  */
		KEY_KP_DIVIDE = 331,
		/**  */
		KEY_KP_MULTIPLY = 332,
		/**  */
		KEY_KP_SUBTRACT = 333,
		/**  */
		KEY_KP_ADD = 334,
		/**  */
		KEY_KP_ENTER = 335,
		/**  */
		KEY_KP_EQUAL = 336,
		/**  */
		KEY_BACK = 4,
		/**  */
		KEY_MENU = 82,
		/**  */
		KEY_VOLUME_UP = 24,
		/**  */
		KEY_VOLUME_DOWN = 25,
	}

	/**  */
	export enum MouseButton {
		/**  */
		MOUSE_BUTTON_LEFT = 0,
		/**  */
		MOUSE_BUTTON_RIGHT = 1,
		/**  */
		MOUSE_BUTTON_MIDDLE = 2,
		/**  */
		MOUSE_BUTTON_SIDE = 3,
		/**  */
		MOUSE_BUTTON_EXTRA = 4,
		/**  */
		MOUSE_BUTTON_FORWARD = 5,
		/**  */
		MOUSE_BUTTON_BACK = 6,
	}

	/**  */
	export enum MouseCursor {
		/**  */
		MOUSE_CURSOR_DEFAULT = 0,
		/**  */
		MOUSE_CURSOR_ARROW = 1,
		/**  */
		MOUSE_CURSOR_IBEAM = 2,
		/**  */
		MOUSE_CURSOR_CROSSHAIR = 3,
		/**  */
		MOUSE_CURSOR_POINTING_HAND = 4,
		/**  */
		MOUSE_CURSOR_RESIZE_EW = 5,
		/**  */
		MOUSE_CURSOR_RESIZE_NS = 6,
		/**  */
		MOUSE_CURSOR_RESIZE_NWSE = 7,
		/**  */
		MOUSE_CURSOR_RESIZE_NESW = 8,
		/**  */
		MOUSE_CURSOR_RESIZE_ALL = 9,
		/**  */
		MOUSE_CURSOR_NOT_ALLOWED = 10,
	}

	/**  */
	export enum GamepadButton {
		/**  */
		GAMEPAD_BUTTON_UNKNOWN = 0,
		/**  */
		GAMEPAD_BUTTON_LEFT_FACE_UP = 1,
		/**  */
		GAMEPAD_BUTTON_LEFT_FACE_RIGHT = 2,
		/**  */
		GAMEPAD_BUTTON_LEFT_FACE_DOWN = 3,
		/**  */
		GAMEPAD_BUTTON_LEFT_FACE_LEFT = 4,
		/**  */
		GAMEPAD_BUTTON_RIGHT_FACE_UP = 5,
		/**  */
		GAMEPAD_BUTTON_RIGHT_FACE_RIGHT = 6,
		/**  */
		GAMEPAD_BUTTON_RIGHT_FACE_DOWN = 7,
		/**  */
		GAMEPAD_BUTTON_RIGHT_FACE_LEFT = 8,
		/**  */
		GAMEPAD_BUTTON_LEFT_TRIGGER_1 = 9,
		/**  */
		GAMEPAD_BUTTON_LEFT_TRIGGER_2 = 10,
		/**  */
		GAMEPAD_BUTTON_RIGHT_TRIGGER_1 = 11,
		/**  */
		GAMEPAD_BUTTON_RIGHT_TRIGGER_2 = 12,
		/**  */
		GAMEPAD_BUTTON_MIDDLE_LEFT = 13,
		/**  */
		GAMEPAD_BUTTON_MIDDLE = 14,
		/**  */
		GAMEPAD_BUTTON_MIDDLE_RIGHT = 15,
		/**  */
		GAMEPAD_BUTTON_LEFT_THUMB = 16,
		/**  */
		GAMEPAD_BUTTON_RIGHT_THUMB = 17,
	}

	/**  */
	export enum GamepadAxis {
		/**  */
		GAMEPAD_AXIS_LEFT_X = 0,
		/**  */
		GAMEPAD_AXIS_LEFT_Y = 1,
		/**  */
		GAMEPAD_AXIS_RIGHT_X = 2,
		/**  */
		GAMEPAD_AXIS_RIGHT_Y = 3,
		/**  */
		GAMEPAD_AXIS_LEFT_TRIGGER = 4,
		/**  */
		GAMEPAD_AXIS_RIGHT_TRIGGER = 5,
	}

	/**  */
	export enum MaterialMapIndex {
		/**  */
		MATERIAL_MAP_ALBEDO = 0,
		/**  */
		MATERIAL_MAP_METALNESS = 1,
		/**  */
		MATERIAL_MAP_NORMAL = 2,
		/**  */
		MATERIAL_MAP_ROUGHNESS = 3,
		/**  */
		MATERIAL_MAP_OCCLUSION = 4,
		/**  */
		MATERIAL_MAP_EMISSION = 5,
		/**  */
		MATERIAL_MAP_HEIGHT = 6,
		/**  */
		MATERIAL_MAP_CUBEMAP = 7,
		/**  */
		MATERIAL_MAP_IRRADIANCE = 8,
		/**  */
		MATERIAL_MAP_PREFILTER = 9,
		/**  */
		MATERIAL_MAP_BRDF = 10,
	}

	/**  */
	export enum ShaderLocationIndex {
		/**  */
		SHADER_LOC_VERTEX_POSITION = 0,
		/**  */
		SHADER_LOC_VERTEX_TEXCOORD01 = 1,
		/**  */
		SHADER_LOC_VERTEX_TEXCOORD02 = 2,
		/**  */
		SHADER_LOC_VERTEX_NORMAL = 3,
		/**  */
		SHADER_LOC_VERTEX_TANGENT = 4,
		/**  */
		SHADER_LOC_VERTEX_COLOR = 5,
		/**  */
		SHADER_LOC_MATRIX_MVP = 6,
		/**  */
		SHADER_LOC_MATRIX_VIEW = 7,
		/**  */
		SHADER_LOC_MATRIX_PROJECTION = 8,
		/**  */
		SHADER_LOC_MATRIX_MODEL = 9,
		/**  */
		SHADER_LOC_MATRIX_NORMAL = 10,
		/**  */
		SHADER_LOC_VECTOR_VIEW = 11,
		/**  */
		SHADER_LOC_COLOR_DIFFUSE = 12,
		/**  */
		SHADER_LOC_COLOR_SPECULAR = 13,
		/**  */
		SHADER_LOC_COLOR_AMBIENT = 14,
		/**  */
		SHADER_LOC_MAP_ALBEDO = 15,
		/**  */
		SHADER_LOC_MAP_METALNESS = 16,
		/**  */
		SHADER_LOC_MAP_NORMAL = 17,
		/**  */
		SHADER_LOC_MAP_ROUGHNESS = 18,
		/**  */
		SHADER_LOC_MAP_OCCLUSION = 19,
		/**  */
		SHADER_LOC_MAP_EMISSION = 20,
		/**  */
		SHADER_LOC_MAP_HEIGHT = 21,
		/**  */
		SHADER_LOC_MAP_CUBEMAP = 22,
		/**  */
		SHADER_LOC_MAP_IRRADIANCE = 23,
		/**  */
		SHADER_LOC_MAP_PREFILTER = 24,
		/**  */
		SHADER_LOC_MAP_BRDF = 25,
	}

	/**  */
	export enum ShaderUniformDataType {
		/**  */
		SHADER_UNIFORM_FLOAT = 0,
		/**  */
		SHADER_UNIFORM_VEC2 = 1,
		/**  */
		SHADER_UNIFORM_VEC3 = 2,
		/**  */
		SHADER_UNIFORM_VEC4 = 3,
		/**  */
		SHADER_UNIFORM_INT = 4,
		/**  */
		SHADER_UNIFORM_IVEC2 = 5,
		/**  */
		SHADER_UNIFORM_IVEC3 = 6,
		/**  */
		SHADER_UNIFORM_IVEC4 = 7,
		/**  */
		SHADER_UNIFORM_SAMPLER2D = 8,
	}

	/**  */
	export enum ShaderAttributeDataType {
		/**  */
		SHADER_ATTRIB_FLOAT = 0,
		/**  */
		SHADER_ATTRIB_VEC2 = 1,
		/**  */
		SHADER_ATTRIB_VEC3 = 2,
		/**  */
		SHADER_ATTRIB_VEC4 = 3,
	}

	/**  */
	export enum PixelFormat {
		/**  */
		PIXELFORMAT_UNCOMPRESSED_GRAYSCALE = 1,
		/**  */
		PIXELFORMAT_UNCOMPRESSED_GRAY_ALPHA = 2,
		/**  */
		PIXELFORMAT_UNCOMPRESSED_R5G6B5 = 3,
		/**  */
		PIXELFORMAT_UNCOMPRESSED_R8G8B8 = 4,
		/**  */
		PIXELFORMAT_UNCOMPRESSED_R5G5B5A1 = 5,
		/**  */
		PIXELFORMAT_UNCOMPRESSED_R4G4B4A4 = 6,
		/**  */
		PIXELFORMAT_UNCOMPRESSED_R8G8B8A8 = 7,
		/**  */
		PIXELFORMAT_UNCOMPRESSED_R32 = 8,
		/**  */
		PIXELFORMAT_UNCOMPRESSED_R32G32B32 = 9,
		/**  */
		PIXELFORMAT_UNCOMPRESSED_R32G32B32A32 = 10,
		/**  */
		PIXELFORMAT_COMPRESSED_DXT1_RGB = 11,
		/**  */
		PIXELFORMAT_COMPRESSED_DXT1_RGBA = 12,
		/**  */
		PIXELFORMAT_COMPRESSED_DXT3_RGBA = 13,
		/**  */
		PIXELFORMAT_COMPRESSED_DXT5_RGBA = 14,
		/**  */
		PIXELFORMAT_COMPRESSED_ETC1_RGB = 15,
		/**  */
		PIXELFORMAT_COMPRESSED_ETC2_RGB = 16,
		/**  */
		PIXELFORMAT_COMPRESSED_ETC2_EAC_RGBA = 17,
		/**  */
		PIXELFORMAT_COMPRESSED_PVRT_RGB = 18,
		/**  */
		PIXELFORMAT_COMPRESSED_PVRT_RGBA = 19,
		/**  */
		PIXELFORMAT_COMPRESSED_ASTC_4x4_RGBA = 20,
		/**  */
		PIXELFORMAT_COMPRESSED_ASTC_8x8_RGBA = 21,
	}

	/**  */
	export enum TextureFilter {
		/**  */
		TEXTURE_FILTER_POINT = 0,
		/**  */
		TEXTURE_FILTER_BILINEAR = 1,
		/**  */
		TEXTURE_FILTER_TRILINEAR = 2,
		/**  */
		TEXTURE_FILTER_ANISOTROPIC_4X = 3,
		/**  */
		TEXTURE_FILTER_ANISOTROPIC_8X = 4,
		/**  */
		TEXTURE_FILTER_ANISOTROPIC_16X = 5,
	}

	/**  */
	export enum TextureWrap {
		/**  */
		TEXTURE_WRAP_REPEAT = 0,
		/**  */
		TEXTURE_WRAP_CLAMP = 1,
		/**  */
		TEXTURE_WRAP_MIRROR_REPEAT = 2,
		/**  */
		TEXTURE_WRAP_MIRROR_CLAMP = 3,
	}

	/**  */
	export enum CubemapLayout {
		/**  */
		CUBEMAP_LAYOUT_AUTO_DETECT = 0,
		/**  */
		CUBEMAP_LAYOUT_LINE_VERTICAL = 1,
		/**  */
		CUBEMAP_LAYOUT_LINE_HORIZONTAL = 2,
		/**  */
		CUBEMAP_LAYOUT_CROSS_THREE_BY_FOUR = 3,
		/**  */
		CUBEMAP_LAYOUT_CROSS_FOUR_BY_THREE = 4,
		/**  */
		CUBEMAP_LAYOUT_PANORAMA = 5,
	}

	/**  */
	export enum FontType {
		/**  */
		FONT_DEFAULT = 0,
		/**  */
		FONT_BITMAP = 1,
		/**  */
		FONT_SDF = 2,
	}

	/**  */
	export enum BlendMode {
		/**  */
		BLEND_ALPHA = 0,
		/**  */
		BLEND_ADDITIVE = 1,
		/**  */
		BLEND_MULTIPLIED = 2,
		/**  */
		BLEND_ADD_COLORS = 3,
		/**  */
		BLEND_SUBTRACT_COLORS = 4,
		/**  */
		BLEND_CUSTOM = 5,
	}

	/**  */
	export enum Gesture {
		/**  */
		GESTURE_NONE = 0,
		/**  */
		GESTURE_TAP = 1,
		/**  */
		GESTURE_DOUBLETAP = 2,
		/**  */
		GESTURE_HOLD = 4,
		/**  */
		GESTURE_DRAG = 8,
		/**  */
		GESTURE_SWIPE_RIGHT = 16,
		/**  */
		GESTURE_SWIPE_LEFT = 32,
		/**  */
		GESTURE_SWIPE_UP = 64,
		/**  */
		GESTURE_SWIPE_DOWN = 128,
		/**  */
		GESTURE_PINCH_IN = 256,
		/**  */
		GESTURE_PINCH_OUT = 512,
	}

	/**  */
	export enum CameraMode {
		/**  */
		CAMERA_CUSTOM = 0,
		/**  */
		CAMERA_FREE = 1,
		/**  */
		CAMERA_ORBITAL = 2,
		/**  */
		CAMERA_FIRST_PERSON = 3,
		/**  */
		CAMERA_THIRD_PERSON = 4,
	}

	/**  */
	export enum CameraProjection {
		/**  */
		CAMERA_PERSPECTIVE = 0,
		/**  */
		CAMERA_ORTHOGRAPHIC = 1,
	}

	/**  */
	export enum NPatchLayout {
		/**  */
		NPATCH_NINE_PATCH = 0,
		/**  */
		NPATCH_THREE_PATCH_VERTICAL = 1,
		/**  */
		NPATCH_THREE_PATCH_HORIZONTAL = 2,
	}


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

	/**  */
	export interface Vector2 {

		/** Vector x component */
		x: number

		/** Vector y component */
		y: number

	}

	/**  */
	export interface Vector3 {

		/** Vector x component */
		x: number

		/** Vector y component */
		y: number

		/** Vector z component */
		z: number

	}

	/**  */
	export interface Vector4 {

		/** Vector x component */
		x: number

		/** Vector y component */
		y: number

		/** Vector z component */
		z: number

		/** Vector w component */
		w: number

	}

	/**  */
	export interface Matrix {

		/**  */
		m0: number

		/**  */
		m1: number

		/**  */
		m2: number

		/**  */
		m3: number

		/**  */
		m4: number

		/**  */
		m5: number

		/**  */
		m6: number

		/**  */
		m7: number

		/**  */
		m8: number

		/**  */
		m9: number

		/**  */
		m10: number

		/**  */
		m11: number

		/**  */
		m12: number

		/**  */
		m13: number

		/**  */
		m14: number

		/**  */
		m15: number

	}

	/**  */
	export interface Color {

		/** Color red value */
		r: number

		/** Color green value */
		g: number

		/** Color blue value */
		b: number

		/** Color alpha value */
		a: number

	}

	/**  */
	export interface Rectangle {

		/** Rectangle top-left corner position x */
		x: number

		/** Rectangle top-left corner position y */
		y: number

		/** Rectangle width */
		width: number

		/** Rectangle height */
		height: number

	}

	/**  */
	export interface Image {

		/** Image raw data */
		data: any

		/** Image base width */
		width: number

		/** Image base height */
		height: number

		/** Mipmap levels, 1 by default */
		mipmaps: number

		/** Data format (PixelFormat type) */
		format: number

	}

	/**  */
	export interface Texture {

		/** OpenGL texture id */
		id: number

		/** Texture base width */
		width: number

		/** Texture base height */
		height: number

		/** Mipmap levels, 1 by default */
		mipmaps: number

		/** Data format (PixelFormat type) */
		format: number

	}

	/**  */
	export interface RenderTexture {

		/** OpenGL framebuffer object id */
		id: number

		/** Color buffer attachment texture */
		texture: Texture

		/** Depth buffer attachment texture */
		depth: Texture

	}

	/**  */
	export interface NPatchInfo {

		/** Texture source rectangle */
		source: Rectangle

		/** Left border offset */
		left: number

		/** Top border offset */
		top: number

		/** Right border offset */
		right: number

		/** Bottom border offset */
		bottom: number

		/** Layout of the n-patch: 3x3, 1x3 or 3x1 */
		layout: number

	}

	/**  */
	export interface GlyphInfo {

		/** Character value (Unicode) */
		value: number

		/** Character offset X when drawing */
		offsetX: number

		/** Character offset Y when drawing */
		offsetY: number

		/** Character advance position X */
		advanceX: number

		/** Character image data */
		image: Image

	}

	/**  */
	export interface Font {

		/** Base size (default chars height) */
		baseSize: number

		/** Number of glyph characters */
		glyphCount: number

		/** Padding around the glyph characters */
		glyphPadding: number

		/** Texture atlas containing the glyphs */
		texture: Texture

		/** Rectangles in texture for the glyphs */
		recs: Rectangle

		/** Glyphs info data */
		glyphs: GlyphInfo

	}

	/**  */
	export interface Camera3D {

		/** Camera position */
		position: Vector3

		/** Camera target it looks-at */
		target: Vector3

		/** Camera up vector (rotation over its axis) */
		up: Vector3

		/** Camera field-of-view apperture in Y (degrees) in perspective, used as near plane width in orthographic */
		fovy: number

		/** Camera projection: CAMERA_PERSPECTIVE or CAMERA_ORTHOGRAPHIC */
		projection: number

	}

	/**  */
	export interface Camera2D {

		/** Camera offset (displacement from target) */
		offset: Vector2

		/** Camera target (rotation and zoom origin) */
		target: Vector2

		/** Camera rotation in degrees */
		rotation: number

		/** Camera zoom (scaling), should be 1.0f by default */
		zoom: number

	}

	/**  */
	export interface Mesh {

		/** Number of vertices stored in arrays */
		vertexCount: number

		/** Number of triangles stored (indexed or not) */
		triangleCount: number

		/** Vertex position (XYZ - 3 components per vertex) (shader-location = 0) */
		vertices: number[]

		/** Vertex texture coordinates (UV - 2 components per vertex) (shader-location = 1) */
		texcoords: number[]

		/** Vertex second texture coordinates (useful for lightmaps) (shader-location = 5) */
		texcoords2: number[]

		/** Vertex normals (XYZ - 3 components per vertex) (shader-location = 2) */
		normals: number[]

		/** Vertex tangents (XYZW - 4 components per vertex) (shader-location = 4) */
		tangents: number[]

		/** Vertex colors (RGBA - 4 components per vertex) (shader-location = 3) */
		colors: string

		/** Vertex indices (in case vertex data comes indexed) */
		indices: number[]

		/** Animated vertex positions (after bones transformations) */
		animVertices: number[]

		/** Animated normals (after bones transformations) */
		animNormals: number[]

		/** Vertex bone ids, max 255 bone ids, up to 4 bones influence by vertex (skinning) */
		boneIds: string

		/** Vertex bone weight, up to 4 bones influence by vertex (skinning) */
		boneWeights: number[]

		/** OpenGL Vertex Array Object id */
		vaoId: number

		/** OpenGL Vertex Buffer Objects id (default vertex data) */
		vboId: number[]

	}

	/**  */
	export interface Shader {

		/** Shader program id */
		id: number

		/** Shader locations array (RL_MAX_SHADER_LOCATIONS) */
		locs: number[]

	}

	/**  */
	export interface MaterialMap {

		/** Material map texture */
		texture: Texture

		/** Material map color */
		color: Color

		/** Material map value */
		value: number

	}

	/**  */
	export interface Material {

		/** Material shader */
		shader: Shader

		/** Material maps array (MAX_MATERIAL_MAPS) */
		maps: MaterialMap

		/** Material generic parameters (if required) */
		params: number

	}

	/**  */
	export interface Transform {

		/** Translation */
		translation: Vector3

		/** Rotation */
		rotation: Vector4

		/** Scale */
		scale: Vector3

	}

	/**  */
	export interface BoneInfo {

		/** Bone name */
		name: string

		/** Bone parent */
		parent: number

	}

	/**  */
	export interface Model {

		/** Local transform matrix */
		transform: Matrix

		/** Number of meshes */
		meshCount: number

		/** Number of materials */
		materialCount: number

		/** Meshes array */
		meshes: Mesh

		/** Materials array */
		materials: Material

		/** Mesh material number */
		meshMaterial: number[]

		/** Number of bones */
		boneCount: number

		/** Bones information (skeleton) */
		bones: BoneInfo

		/** Bones base transformation (pose) */
		bindPose: Transform

	}

	/**  */
	export interface ModelAnimation {

		/** Number of bones */
		boneCount: number

		/** Number of animation frames */
		frameCount: number

		/** Bones information (skeleton) */
		bones: BoneInfo

		/** Poses array by frame */
		framePoses: Transform[]

	}

	/**  */
	export interface Ray {

		/** Ray position (origin) */
		position: Vector3

		/** Ray direction */
		direction: Vector3

	}

	/**  */
	export interface RayCollision {

		/** Did the ray hit something? */
		hit: boolean

		/** Distance to nearest hit */
		distance: number

		/** Point of nearest hit */
		point: Vector3

		/** Surface normal of hit */
		normal: Vector3

	}

	/**  */
	export interface BoundingBox {

		/** Minimum vertex box-corner */
		min: Vector3

		/** Maximum vertex box-corner */
		max: Vector3

	}

	/**  */
	export interface Wave {

		/** Total number of frames (considering channels) */
		frameCount: number

		/** Frequency (samples per second) */
		sampleRate: number

		/** Bit depth (bits per sample): 8, 16, 32 (24 not supported) */
		sampleSize: number

		/** Number of channels (1-mono, 2-stereo, ...) */
		channels: number

		/** Buffer data pointer */
		data: any

	}

	/**  */
	export interface AudioStream {

		/** Pointer to internal data used by the audio system */
		buffer: any

		/** Frequency (samples per second) */
		sampleRate: number

		/** Bit depth (bits per sample): 8, 16, 32 (24 not supported) */
		sampleSize: number

		/** Number of channels (1-mono, 2-stereo, ...) */
		channels: number

	}

	/**  */
	export interface Sound {

		/** Audio stream */
		stream: AudioStream

		/** Total number of frames (considering channels) */
		frameCount: number

	}

	/**  */
	export interface Music {

		/** Audio stream */
		stream: AudioStream

		/** Total number of frames (considering channels) */
		frameCount: number

		/** Music looping enable */
		looping: boolean

		/** Type of music context (audio filetype) */
		ctxType: number

		/** Audio context data, depends on type */
		ctxData: any

	}

	/**  */
	export interface VrDeviceInfo {

		/** Horizontal resolution in pixels */
		hResolution: number

		/** Vertical resolution in pixels */
		vResolution: number

		/** Horizontal size in meters */
		hScreenSize: number

		/** Vertical size in meters */
		vScreenSize: number

		/** Screen center in meters */
		vScreenCenter: number

		/** Distance between eye and display in meters */
		eyeToScreenDistance: number

		/** Lens separation distance in meters */
		lensSeparationDistance: number

		/** IPD (distance between pupils) in meters */
		interpupillaryDistance: number

		/** Lens distortion constant parameters */
		lensDistortionValues: number

		/** Chromatic aberration correction parameters */
		chromaAbCorrection: number

	}

	/**  */
	export interface VrStereoConfig {

		/** VR projection matrices (per eye) */
		projection: Matrix

		/** VR view offset matrices (per eye) */
		viewOffset: Matrix

		/** VR left lens center */
		leftLensCenter: number

		/** VR right lens center */
		rightLensCenter: number

		/** VR left screen center */
		leftScreenCenter: number

		/** VR right screen center */
		rightScreenCenter: number

		/** VR distortion scale */
		scale: number

		/** VR distortion scale in */
		scaleIn: number

	}

	export type Texture2D = Texture

	export type RenderTexture2D = Texture

	export type TextureCubemap = Texture2D

	export type Quaternion = Vector4

	export type TraceLogCallback = (logType: number, text: string, ...vaArgs: any) => void

	export type Camera = Camera2D | Camera3D


 export type LoadFileDataCallback = (logType: number, text: string, ...vaArgs: any) => void


 export type SaveFileDataCallback = (logType: number, text: string, ...vaArgs: any) => void


 export type LoadFileTextCallback = (logType: number, text: string, ...vaArgs: any) => void


 export type SaveFileTextCallback = (logType: number, text: string, ...vaArgs: any) => void


	/** Create Vector2 */
	export function Vector2(x: number, y: number): Vector2

	/** Create Vector3 */
	export function Vector2(x: number, y: number, z: number): Vector3

	/** Create Vector4 */
	export function Vector2(x: number, y: number, z: number): Vector4

	/** Create Color */
	export function Color(r: number, g: number, b: number, a: number): Color
	/** Initialize window and OpenGL context */
	export function InitWindow(width: number, height: number, title: string): void

	/** Check if KEY_ESCAPE pressed or Close icon pressed */
	export function WindowShouldClose(): boolean

	/** Close window and unload OpenGL context */
	export function CloseWindow(): void

	/** Check if window has been initialized successfully */
	export function IsWindowReady(): boolean

	/** Check if window is currently fullscreen */
	export function IsWindowFullscreen(): boolean

	/** Check if window is currently hidden (only PLATFORM_DESKTOP) */
	export function IsWindowHidden(): boolean

	/** Check if window is currently minimized (only PLATFORM_DESKTOP) */
	export function IsWindowMinimized(): boolean

	/** Check if window is currently maximized (only PLATFORM_DESKTOP) */
	export function IsWindowMaximized(): boolean

	/** Check if window is currently focused (only PLATFORM_DESKTOP) */
	export function IsWindowFocused(): boolean

	/** Check if window has been resized last frame */
	export function IsWindowResized(): boolean

	/** Check if one specific window flag is enabled */
	export function IsWindowState(flag: number): boolean

	/** Set window configuration state using flags */
	export function SetWindowState(flags: number): void

	/** Clear window configuration state flags */
	export function ClearWindowState(flags: number): void

	/** Toggle window state: fullscreen/windowed (only PLATFORM_DESKTOP) */
	export function ToggleFullscreen(): void

	/** Set window state: maximized, if resizable (only PLATFORM_DESKTOP) */
	export function MaximizeWindow(): void

	/** Set window state: minimized, if resizable (only PLATFORM_DESKTOP) */
	export function MinimizeWindow(): void

	/** Set window state: not minimized/maximized (only PLATFORM_DESKTOP) */
	export function RestoreWindow(): void

	/** Set icon for window (only PLATFORM_DESKTOP) */
	export function SetWindowIcon(image: Image): void

	/** Set title for window (only PLATFORM_DESKTOP) */
	export function SetWindowTitle(title: string): void

	/** Set window position on screen (only PLATFORM_DESKTOP) */
	export function SetWindowPosition(x: number, y: number): void

	/** Set monitor for the current window (fullscreen mode) */
	export function SetWindowMonitor(monitor: number): void

	/** Set window minimum dimensions (for FLAG_WINDOW_RESIZABLE) */
	export function SetWindowMinSize(width: number, height: number): void

	/** Set window dimensions */
	export function SetWindowSize(width: number, height: number): void

	/** Get current screen width */
	export function GetScreenWidth(): number

	/** Get current screen height */
	export function GetScreenHeight(): number

	/** Get number of connected monitors */
	export function GetMonitorCount(): number

	/** Get current connected monitor */
	export function GetCurrentMonitor(): number

	/** Get specified monitor position */
	export function GetMonitorPosition(monitor: number): Vector2

	/** Get specified monitor width (max available by monitor) */
	export function GetMonitorWidth(monitor: number): number

	/** Get specified monitor height (max available by monitor) */
	export function GetMonitorHeight(monitor: number): number

	/** Get specified monitor physical width in millimetres */
	export function GetMonitorPhysicalWidth(monitor: number): number

	/** Get specified monitor physical height in millimetres */
	export function GetMonitorPhysicalHeight(monitor: number): number

	/** Get specified monitor refresh rate */
	export function GetMonitorRefreshRate(monitor: number): number

	/** Get window position XY on monitor */
	export function GetWindowPosition(): Vector2

	/** Get window scale DPI factor */
	export function GetWindowScaleDPI(): Vector2

	/** Get the human-readable, UTF-8 encoded name of the primary monitor */
	export function GetMonitorName(monitor: number): string

	/** Set clipboard text content */
	export function SetClipboardText(text: string): void

	/** Get clipboard text content */
	export function GetClipboardText(): string

	/** Swap back buffer with front buffer (screen drawing) */
	export function SwapScreenBuffer(): void

	/** Register all input events */
	export function PollInputEvents(): void

	/** Wait for some milliseconds (halt program execution) */
	export function WaitTime(ms: number): void

	/** Shows cursor */
	export function ShowCursor(): void

	/** Hides cursor */
	export function HideCursor(): void

	/** Check if cursor is not visible */
	export function IsCursorHidden(): boolean

	/** Enables cursor (unlock cursor) */
	export function EnableCursor(): void

	/** Disables cursor (lock cursor) */
	export function DisableCursor(): void

	/** Check if cursor is on the screen */
	export function IsCursorOnScreen(): boolean

	/** Set background color (framebuffer clear color) */
	export function ClearBackground(color: Color): void

	/** Setup canvas (framebuffer) to start drawing */
	export function BeginDrawing(): void

	/** End canvas drawing and swap buffers (double buffering) */
	export function EndDrawing(): void

	/** Begin 2D mode with custom camera (2D) */
	export function BeginMode2D(camera: Camera2D): void

	/** Ends 2D mode with custom camera */
	export function EndMode2D(): void

	/** Begin 3D mode with custom camera (3D) */
	export function BeginMode3D(camera: Camera3D): void

	/** Ends 3D mode and returns to default 2D orthographic mode */
	export function EndMode3D(): void

	/** Begin drawing to render texture */
	export function BeginTextureMode(target: RenderTexture2D): void

	/** Ends drawing to render texture */
	export function EndTextureMode(): void

	/** Begin custom shader drawing */
	export function BeginShaderMode(shader: Shader): void

	/** End custom shader drawing (use default shader) */
	export function EndShaderMode(): void

	/** Begin blending mode (alpha, additive, multiplied, subtract, custom) */
	export function BeginBlendMode(mode: number): void

	/** End blending mode (reset to default: alpha blending) */
	export function EndBlendMode(): void

	/** Begin scissor mode (define screen area for following drawing) */
	export function BeginScissorMode(x: number, y: number, width: number, height: number): void

	/** End scissor mode */
	export function EndScissorMode(): void

	/** Begin stereo rendering (requires VR simulator) */
	export function BeginVrStereoMode(config: VrStereoConfig): void

	/** End stereo rendering (requires VR simulator) */
	export function EndVrStereoMode(): void

	/** Load VR stereo config for VR simulator device parameters */
	export function LoadVrStereoConfig(device: VrDeviceInfo): VrStereoConfig

	/** Unload VR stereo config */
	export function UnloadVrStereoConfig(config: VrStereoConfig): void

	/** Load shader from files and bind default locations */
	export function LoadShader(vsFileName: string, fsFileName: string): Shader

	/** Load shader from code strings and bind default locations */
	export function LoadShaderFromMemory(vsCode: string, fsCode: string): Shader

	/** Get shader uniform location */
	export function GetShaderLocation(shader: Shader, uniformName: string): number

	/** Get shader attribute location */
	export function GetShaderLocationAttrib(shader: Shader, attribName: string): number

	/** Set shader uniform value */
	export function SetShaderValue(shader: Shader, locIndex: number, value: any, uniformType: number): void

	/** Set shader uniform value vector */
	export function SetShaderValueV(shader: Shader, locIndex: number, value: any, uniformType: number, count: number): void

	/** Set shader uniform value (matrix 4x4) */
	export function SetShaderValueMatrix(shader: Shader, locIndex: number, mat: Matrix): void

	/** Set shader uniform value for texture (sampler2d) */
	export function SetShaderValueTexture(shader: Shader, locIndex: number, texture: Texture2D): void

	/** Unload shader from GPU memory (VRAM) */
	export function UnloadShader(shader: Shader): void

	/** Get a ray trace from mouse position */
	export function GetMouseRay(mousePosition: Vector2, camera: Camera3D): Ray

	/** Get camera transform matrix (view matrix) */
	export function GetCameraMatrix(camera: Camera3D): Matrix

	/** Get camera 2d transform matrix */
	export function GetCameraMatrix2D(camera: Camera2D): Matrix

	/** Get the screen space position for a 3d world space position */
	export function GetWorldToScreen(position: Vector3, camera: Camera3D): Vector2

	/** Get size position for a 3d world space position */
	export function GetWorldToScreenEx(position: Vector3, camera: Camera3D, width: number, height: number): Vector2

	/** Get the screen space position for a 2d camera world space position */
	export function GetWorldToScreen2D(position: Vector2, camera: Camera2D): Vector2

	/** Get the world space position for a 2d camera screen space position */
	export function GetScreenToWorld2D(position: Vector2, camera: Camera2D): Vector2

	/** Set target FPS (maximum) */
	export function SetTargetFPS(fps: number): void

	/** Get current FPS */
	export function GetFPS(): number

	/** Get time in seconds for last frame drawn (delta time) */
	export function GetFrameTime(): number

	/** Get elapsed time in seconds since InitWindow() */
	export function GetTime(): number

	/** Get a random value between min and max (both included) */
	export function GetRandomValue(min: number, max: number): number

	/** Set the seed for the random number generator */
	export function SetRandomSeed(seed: number): void

	/** Takes a screenshot of current screen (filename extension defines format) */
	export function TakeScreenshot(fileName: string): void

	/** Setup init configuration flags (view FLAGS) */
	export function SetConfigFlags(flags: number): void

	/** Show trace log messages (LOG_DEBUG, LOG_INFO, LOG_WARNING, LOG_ERROR...) */
	export function TraceLog(logLevel: number, text: string, ...args: any): void

	/** Set the current threshold (minimum) log level */
	export function SetTraceLogLevel(logLevel: number): void

	/** Internal memory free */
	export function MemFree(ptr: any): void

	/** Unload file data allocated by LoadFileData() */
	export function UnloadFileData(data: string): void

	/** Save data to file from byte array (write), returns true on success */
	export function SaveFileData(fileName: string, data: any, bytesToWrite: number): boolean

	/** Load text data from file (read), returns a ' 0' terminated string */
	export function LoadFileText(fileName: string): string

	/** Unload file text data allocated by LoadFileText() */
	export function UnloadFileText(text: string): void

	/** Save text data to file (write), string must be ' 0' terminated, returns true on success */
	export function SaveFileText(fileName: string, text: string): boolean

	/** Check if file exists */
	export function FileExists(fileName: string): boolean

	/** Check if a directory path exists */
	export function DirectoryExists(dirPath: string): boolean

	/** Check file extension (including point: .png, .wav) */
	export function IsFileExtension(fileName: string, ext: string): boolean

	/** Get pointer to extension for a filename string (includes dot: '.png') */
	export function GetFileExtension(fileName: string): string

	/** Get pointer to filename for a path string */
	export function GetFileName(filePath: string): string

	/** Get filename string without extension (uses static string) */
	export function GetFileNameWithoutExt(filePath: string): string

	/** Get full path for a given fileName with path (uses static string) */
	export function GetDirectoryPath(filePath: string): string

	/** Get previous directory path for a given path (uses static string) */
	export function GetPrevDirectoryPath(dirPath: string): string

	/** Get current working directory (uses static string) */
	export function GetWorkingDirectory(): string

	/** Clear directory files paths buffers (free memory) */
	export function ClearDirectoryFiles(): void

	/** Change working directory, return true on success */
	export function ChangeDirectory(dir: string): boolean

	/** Check if a file has been dropped into window */
	export function IsFileDropped(): boolean

	/** Clear dropped files paths buffer (free memory) */
	export function ClearDroppedFiles(): void

	/** Get file modification time (last write time) */
	export function GetFileModTime(fileName: string): number

	/** Encode data to Base64 string */
	export function EncodeDataBase64(data: string, dataLength: number, outputLength: number[]): string

	/** Save integer value to storage file (to defined position), returns true on success */
	export function SaveStorageValue(position: number, value: number): boolean

	/** Load integer value from storage file (from defined position) */
	export function LoadStorageValue(position: number): number

	/** Open URL with default system browser (if available) */
	export function OpenURL(url: string): void

	/** Check if a key has been pressed once */
	export function IsKeyPressed(key: number): boolean

	/** Check if a key is being pressed */
	export function IsKeyDown(key: number): boolean

	/** Check if a key has been released once */
	export function IsKeyReleased(key: number): boolean

	/** Check if a key is NOT being pressed */
	export function IsKeyUp(key: number): boolean

	/** Set a custom key to exit program (default is ESC) */
	export function SetExitKey(key: number): void

	/** Get key pressed (keycode), call it multiple times for keys queued, returns 0 when the queue is empty */
	export function GetKeyPressed(): number

	/** Get char pressed (unicode), call it multiple times for chars queued, returns 0 when the queue is empty */
	export function GetCharPressed(): number

	/** Check if a gamepad is available */
	export function IsGamepadAvailable(gamepad: number): boolean

	/** Get gamepad internal name id */
	export function GetGamepadName(gamepad: number): string

	/** Check if a gamepad button has been pressed once */
	export function IsGamepadButtonPressed(gamepad: number, button: number): boolean

	/** Check if a gamepad button is being pressed */
	export function IsGamepadButtonDown(gamepad: number, button: number): boolean

	/** Check if a gamepad button has been released once */
	export function IsGamepadButtonReleased(gamepad: number, button: number): boolean

	/** Check if a gamepad button is NOT being pressed */
	export function IsGamepadButtonUp(gamepad: number, button: number): boolean

	/** Get the last gamepad button pressed */
	export function GetGamepadButtonPressed(): number

	/** Get gamepad axis count for a gamepad */
	export function GetGamepadAxisCount(gamepad: number): number

	/** Get axis movement value for a gamepad axis */
	export function GetGamepadAxisMovement(gamepad: number, axis: number): number

	/** Set internal gamepad mappings (SDL_GameControllerDB) */
	export function SetGamepadMappings(mappings: string): number

	/** Check if a mouse button has been pressed once */
	export function IsMouseButtonPressed(button: number): boolean

	/** Check if a mouse button is being pressed */
	export function IsMouseButtonDown(button: number): boolean

	/** Check if a mouse button has been released once */
	export function IsMouseButtonReleased(button: number): boolean

	/** Check if a mouse button is NOT being pressed */
	export function IsMouseButtonUp(button: number): boolean

	/** Get mouse position X */
	export function GetMouseX(): number

	/** Get mouse position Y */
	export function GetMouseY(): number

	/** Get mouse position XY */
	export function GetMousePosition(): Vector2

	/** Get mouse delta between frames */
	export function GetMouseDelta(): Vector2

	/** Set mouse position XY */
	export function SetMousePosition(x: number, y: number): void

	/** Set mouse offset */
	export function SetMouseOffset(offsetX: number, offsetY: number): void

	/** Set mouse scaling */
	export function SetMouseScale(scaleX: number, scaleY: number): void

	/** Get mouse wheel movement Y */
	export function GetMouseWheelMove(): number

	/** Set mouse cursor */
	export function SetMouseCursor(cursor: number): void

	/** Get touch position X for touch point 0 (relative to screen size) */
	export function GetTouchX(): number

	/** Get touch position Y for touch point 0 (relative to screen size) */
	export function GetTouchY(): number

	/** Get touch position XY for a touch point index (relative to screen size) */
	export function GetTouchPosition(index: number): Vector2

	/** Get touch point identifier for given index */
	export function GetTouchPointId(index: number): number

	/** Get number of touch points */
	export function GetTouchPointCount(): number

	/** Enable a set of gestures using flags */
	export function SetGesturesEnabled(flags: number): void

	/** Check if a gesture have been detected */
	export function IsGestureDetected(gesture: number): boolean

	/** Get latest detected gesture */
	export function GetGestureDetected(): number

	/** Get gesture hold time in milliseconds */
	export function GetGestureHoldDuration(): number

	/** Get gesture drag vector */
	export function GetGestureDragVector(): Vector2

	/** Get gesture drag angle */
	export function GetGestureDragAngle(): number

	/** Get gesture pinch delta */
	export function GetGesturePinchVector(): Vector2

	/** Get gesture pinch angle */
	export function GetGesturePinchAngle(): number

	/** Set camera mode (multiple camera modes available) */
	export function SetCameraMode(camera: Camera3D, mode: number): void

	/** Update camera position for selected mode */
	export function UpdateCamera(camera: Camera): void

	/** Set camera pan key to combine with mouse movement (free camera) */
	export function SetCameraPanControl(keyPan: number): void

	/** Set camera alt key to combine with mouse movement (free camera) */
	export function SetCameraAltControl(keyAlt: number): void

	/** Set camera smooth zoom key to combine with mouse (free camera) */
	export function SetCameraSmoothZoomControl(keySmoothZoom: number): void

	/** Set camera move controls (1st person and 3rd person cameras) */
	export function SetCameraMoveControls(keyFront: number, keyBack: number, keyRight: number, keyLeft: number, keyUp: number, keyDown: number): void

	/** Set texture and rectangle to be used on shapes drawing */
	export function SetShapesTexture(texture: Texture2D, source: Rectangle): void

	/** Draw a pixel */
	export function DrawPixel(posX: number, posY: number, color: Color): void

	/** Draw a pixel (Vector version) */
	export function DrawPixelV(position: Vector2, color: Color): void

	/** Draw a line */
	export function DrawLine(startPosX: number, startPosY: number, endPosX: number, endPosY: number, color: Color): void

	/** Draw a line (Vector version) */
	export function DrawLineV(startPos: Vector2, endPos: Vector2, color: Color): void

	/** Draw a line defining thickness */
	export function DrawLineEx(startPos: Vector2, endPos: Vector2, thick: number, color: Color): void

	/** Draw a line using cubic-bezier curves in-out */
	export function DrawLineBezier(startPos: Vector2, endPos: Vector2, thick: number, color: Color): void

	/** Draw line using quadratic bezier curves with a control point */
	export function DrawLineBezierQuad(startPos: Vector2, endPos: Vector2, controlPos: Vector2, thick: number, color: Color): void

	/** Draw line using cubic bezier curves with 2 control points */
	export function DrawLineBezierCubic(startPos: Vector2, endPos: Vector2, startControlPos: Vector2, endControlPos: Vector2, thick: number, color: Color): void

	/** Draw lines sequence */
	export function DrawLineStrip(points: Vector2, pointCount: number, color: Color): void

	/** Draw a color-filled circle */
	export function DrawCircle(centerX: number, centerY: number, radius: number, color: Color): void

	/** Draw a piece of a circle */
	export function DrawCircleSector(center: Vector2, radius: number, startAngle: number, endAngle: number, segments: number, color: Color): void

	/** Draw circle sector outline */
	export function DrawCircleSectorLines(center: Vector2, radius: number, startAngle: number, endAngle: number, segments: number, color: Color): void

	/** Draw a gradient-filled circle */
	export function DrawCircleGradient(centerX: number, centerY: number, radius: number, color1: Color, color2: Color): void

	/** Draw a color-filled circle (Vector version) */
	export function DrawCircleV(center: Vector2, radius: number, color: Color): void

	/** Draw circle outline */
	export function DrawCircleLines(centerX: number, centerY: number, radius: number, color: Color): void

	/** Draw ellipse */
	export function DrawEllipse(centerX: number, centerY: number, radiusH: number, radiusV: number, color: Color): void

	/** Draw ellipse outline */
	export function DrawEllipseLines(centerX: number, centerY: number, radiusH: number, radiusV: number, color: Color): void

	/** Draw ring */
	export function DrawRing(center: Vector2, innerRadius: number, outerRadius: number, startAngle: number, endAngle: number, segments: number, color: Color): void

	/** Draw ring outline */
	export function DrawRingLines(center: Vector2, innerRadius: number, outerRadius: number, startAngle: number, endAngle: number, segments: number, color: Color): void

	/** Draw a color-filled rectangle */
	export function DrawRectangle(posX: number, posY: number, width: number, height: number, color: Color): void

	/** Draw a color-filled rectangle (Vector version) */
	export function DrawRectangleV(position: Vector2, size: Vector2, color: Color): void

	/** Draw a color-filled rectangle */
	export function DrawRectangleRec(rec: Rectangle, color: Color): void

	/** Draw a color-filled rectangle with pro parameters */
	export function DrawRectanglePro(rec: Rectangle, origin: Vector2, rotation: number, color: Color): void

	/** Draw a vertical-gradient-filled rectangle */
	export function DrawRectangleGradientV(posX: number, posY: number, width: number, height: number, color1: Color, color2: Color): void

	/** Draw a horizontal-gradient-filled rectangle */
	export function DrawRectangleGradientH(posX: number, posY: number, width: number, height: number, color1: Color, color2: Color): void

	/** Draw a gradient-filled rectangle with custom vertex colors */
	export function DrawRectangleGradientEx(rec: Rectangle, col1: Color, col2: Color, col3: Color, col4: Color): void

	/** Draw rectangle outline */
	export function DrawRectangleLines(posX: number, posY: number, width: number, height: number, color: Color): void

	/** Draw rectangle outline with extended parameters */
	export function DrawRectangleLinesEx(rec: Rectangle, lineThick: number, color: Color): void

	/** Draw rectangle with rounded edges */
	export function DrawRectangleRounded(rec: Rectangle, roundness: number, segments: number, color: Color): void

	/** Draw rectangle with rounded edges outline */
	export function DrawRectangleRoundedLines(rec: Rectangle, roundness: number, segments: number, lineThick: number, color: Color): void

	/** Draw a color-filled triangle (vertex in counter-clockwise order!) */
	export function DrawTriangle(v1: Vector2, v2: Vector2, v3: Vector2, color: Color): void

	/** Draw triangle outline (vertex in counter-clockwise order!) */
	export function DrawTriangleLines(v1: Vector2, v2: Vector2, v3: Vector2, color: Color): void

	/** Draw a triangle fan defined by points (first vertex is the center) */
	export function DrawTriangleFan(points: Vector2, pointCount: number, color: Color): void

	/** Draw a triangle strip defined by points */
	export function DrawTriangleStrip(points: Vector2, pointCount: number, color: Color): void

	/** Draw a regular polygon (Vector version) */
	export function DrawPoly(center: Vector2, sides: number, radius: number, rotation: number, color: Color): void

	/** Draw a polygon outline of n sides */
	export function DrawPolyLines(center: Vector2, sides: number, radius: number, rotation: number, color: Color): void

	/** Draw a polygon outline of n sides with extended parameters */
	export function DrawPolyLinesEx(center: Vector2, sides: number, radius: number, rotation: number, lineThick: number, color: Color): void

	/** Check collision between two rectangles */
	export function CheckCollisionRecs(rec1: Rectangle, rec2: Rectangle): boolean

	/** Check collision between two circles */
	export function CheckCollisionCircles(center1: Vector2, radius1: number, center2: Vector2, radius2: number): boolean

	/** Check collision between circle and rectangle */
	export function CheckCollisionCircleRec(center: Vector2, radius: number, rec: Rectangle): boolean

	/** Check if point is inside rectangle */
	export function CheckCollisionPointRec(point: Vector2, rec: Rectangle): boolean

	/** Check if point is inside circle */
	export function CheckCollisionPointCircle(point: Vector2, center: Vector2, radius: number): boolean

	/** Check if point is inside a triangle */
	export function CheckCollisionPointTriangle(point: Vector2, p1: Vector2, p2: Vector2, p3: Vector2): boolean

	/** Check the collision between two lines defined by two points each, returns collision point by reference */
	export function CheckCollisionLines(startPos1: Vector2, endPos1: Vector2, startPos2: Vector2, endPos2: Vector2, collisionPoint: Vector2): boolean

	/** Check if point belongs to line created between two points [p1] and [p2] with defined margin in pixels [threshold] */
	export function CheckCollisionPointLine(point: Vector2, p1: Vector2, p2: Vector2, threshold: number): boolean

	/** Get collision rectangle for two rectangles collision */
	export function GetCollisionRec(rec1: Rectangle, rec2: Rectangle): Rectangle

	/** Load image from file into CPU memory (RAM) */
	export function LoadImage(fileName: string): Image

	/** Load image from RAW file data */
	export function LoadImageRaw(fileName: string, width: number, height: number, format: number, headerSize: number): Image

	/** Load image sequence from file (frames appended to image.data) */
	export function LoadImageAnim(fileName: string, frames: number[]): Image

	/** Load image from memory buffer, fileType refers to extension: i.e. '.png' */
	export function LoadImageFromMemory(fileType: string, fileData: string, dataSize: number): Image

	/** Load image from GPU texture data */
	export function LoadImageFromTexture(texture: Texture2D): Image

	/** Load image from screen buffer and (screenshot) */
	export function LoadImageFromScreen(): Image

	/** Unload image from CPU memory (RAM) */
	export function UnloadImage(image: Image): void

	/** Export image data to file, returns true on success */
	export function ExportImage(image: Image, fileName: string): boolean

	/** Export image as code file defining an array of bytes, returns true on success */
	export function ExportImageAsCode(image: Image, fileName: string): boolean

	/** Generate image: plain color */
	export function GenImageColor(width: number, height: number, color: Color): Image

	/** Generate image: vertical gradient */
	export function GenImageGradientV(width: number, height: number, top: Color, bottom: Color): Image

	/** Generate image: horizontal gradient */
	export function GenImageGradientH(width: number, height: number, left: Color, right: Color): Image

	/** Generate image: radial gradient */
	export function GenImageGradientRadial(width: number, height: number, density: number, inner: Color, outer: Color): Image

	/** Generate image: checked */
	export function GenImageChecked(width: number, height: number, checksX: number, checksY: number, col1: Color, col2: Color): Image

	/** Generate image: white noise */
	export function GenImageWhiteNoise(width: number, height: number, factor: number): Image

	/** Generate image: cellular algorithm, bigger tileSize means bigger cells */
	export function GenImageCellular(width: number, height: number, tileSize: number): Image

	/** Create an image duplicate (useful for transformations) */
	export function ImageCopy(image: Image): Image

	/** Create an image from another image piece */
	export function ImageFromImage(image: Image, rec: Rectangle): Image

	/** Create an image from text (default font) */
	export function ImageText(text: string, fontSize: number, color: Color): Image

	/** Create an image from text (custom sprite font) */
	export function ImageTextEx(font: Font, text: string, fontSize: number, spacing: number, tint: Color): Image

	/** Convert image data to desired format */
	export function ImageFormat(image: Image, newFormat: number): void

	/** Convert image to POT (power-of-two) */
	export function ImageToPOT(image: Image, fill: Color): void

	/** Crop an image to a defined rectangle */
	export function ImageCrop(image: Image, crop: Rectangle): void

	/** Crop image depending on alpha value */
	export function ImageAlphaCrop(image: Image, threshold: number): void

	/** Clear alpha channel to desired color */
	export function ImageAlphaClear(image: Image, color: Color, threshold: number): void

	/** Apply alpha mask to image */
	export function ImageAlphaMask(image: Image, alphaMask: Image): void

	/** Premultiply alpha channel */
	export function ImageAlphaPremultiply(image: Image): void

	/** Resize image (Bicubic scaling algorithm) */
	export function ImageResize(image: Image, newWidth: number, newHeight: number): void

	/** Resize image (Nearest-Neighbor scaling algorithm) */
	export function ImageResizeNN(image: Image, newWidth: number, newHeight: number): void

	/** Resize canvas and fill with color */
	export function ImageResizeCanvas(image: Image, newWidth: number, newHeight: number, offsetX: number, offsetY: number, fill: Color): void

	/** Compute all mipmap levels for a provided image */
	export function ImageMipmaps(image: Image): void

	/** Dither image data to 16bpp or lower (Floyd-Steinberg dithering) */
	export function ImageDither(image: Image, rBpp: number, gBpp: number, bBpp: number, aBpp: number): void

	/** Flip image vertically */
	export function ImageFlipVertical(image: Image): void

	/** Flip image horizontally */
	export function ImageFlipHorizontal(image: Image): void

	/** Rotate image clockwise 90deg */
	export function ImageRotateCW(image: Image): void

	/** Rotate image counter-clockwise 90deg */
	export function ImageRotateCCW(image: Image): void

	/** Modify image color: tint */
	export function ImageColorTint(image: Image, color: Color): void

	/** Modify image color: invert */
	export function ImageColorInvert(image: Image): void

	/** Modify image color: grayscale */
	export function ImageColorGrayscale(image: Image): void

	/** Modify image color: contrast (-100 to 100) */
	export function ImageColorContrast(image: Image, contrast: number): void

	/** Modify image color: brightness (-255 to 255) */
	export function ImageColorBrightness(image: Image, brightness: number): void

	/** Modify image color: replace color */
	export function ImageColorReplace(image: Image, color: Color, replace: Color): void

	/** Unload color data loaded with LoadImageColors() */
	export function UnloadImageColors(colors: Color): void

	/** Unload colors palette loaded with LoadImagePalette() */
	export function UnloadImagePalette(colors: Color): void

	/** Get image alpha border rectangle */
	export function GetImageAlphaBorder(image: Image, threshold: number): Rectangle

	/** Get image pixel color at (x, y) position */
	export function GetImageColor(image: Image, x: number, y: number): Color

	/** Clear image background with given color */
	export function ImageClearBackground(dst: Image, color: Color): void

	/** Draw pixel within an image */
	export function ImageDrawPixel(dst: Image, posX: number, posY: number, color: Color): void

	/** Draw pixel within an image (Vector version) */
	export function ImageDrawPixelV(dst: Image, position: Vector2, color: Color): void

	/** Draw line within an image */
	export function ImageDrawLine(dst: Image, startPosX: number, startPosY: number, endPosX: number, endPosY: number, color: Color): void

	/** Draw line within an image (Vector version) */
	export function ImageDrawLineV(dst: Image, start: Vector2, end: Vector2, color: Color): void

	/** Draw circle within an image */
	export function ImageDrawCircle(dst: Image, centerX: number, centerY: number, radius: number, color: Color): void

	/** Draw circle within an image (Vector version) */
	export function ImageDrawCircleV(dst: Image, center: Vector2, radius: number, color: Color): void

	/** Draw rectangle within an image */
	export function ImageDrawRectangle(dst: Image, posX: number, posY: number, width: number, height: number, color: Color): void

	/** Draw rectangle within an image (Vector version) */
	export function ImageDrawRectangleV(dst: Image, position: Vector2, size: Vector2, color: Color): void

	/** Draw rectangle within an image */
	export function ImageDrawRectangleRec(dst: Image, rec: Rectangle, color: Color): void

	/** Draw rectangle lines within an image */
	export function ImageDrawRectangleLines(dst: Image, rec: Rectangle, thick: number, color: Color): void

	/** Draw a source image within a destination image (tint applied to source) */
	export function ImageDraw(dst: Image, src: Image, srcRec: Rectangle, dstRec: Rectangle, tint: Color): void

	/** Draw text (using default font) within an image (destination) */
	export function ImageDrawText(dst: Image, text: string, posX: number, posY: number, fontSize: number, color: Color): void

	/** Draw text (custom sprite font) within an image (destination) */
	export function ImageDrawTextEx(dst: Image, font: Font, text: string, position: Vector2, fontSize: number, spacing: number, tint: Color): void

	/** Load texture from file into GPU memory (VRAM) */
	export function LoadTexture(fileName: string): Texture

	/** Load texture from image data */
	export function LoadTextureFromImage(image: Image): Texture

	/** Load cubemap from image, multiple image cubemap layouts supported */
	export function LoadTextureCubemap(image: Image, layout: number): Texture

	/** Unload texture from GPU memory (VRAM) */
	export function UnloadTexture(texture: Texture2D): void

	/** Unload render texture from GPU memory (VRAM) */
	export function UnloadRenderTexture(target: RenderTexture2D): void

	/** Update GPU texture with new data */
	export function UpdateTexture(texture: Texture2D, pixels: any): void

	/** Update GPU texture rectangle with new data */
	export function UpdateTextureRec(texture: Texture2D, rec: Rectangle, pixels: any): void

	/** Generate GPU mipmaps for a texture */
	export function GenTextureMipmaps(texture: Texture2D): void

	/** Set texture scaling filter mode */
	export function SetTextureFilter(texture: Texture2D, filter: number): void

	/** Set texture wrapping mode */
	export function SetTextureWrap(texture: Texture2D, wrap: number): void

	/** Draw a Texture2D */
	export function DrawTexture(texture: Texture2D, posX: number, posY: number, tint: Color): void

	/** Draw a Texture2D with position defined as Vector2 */
	export function DrawTextureV(texture: Texture2D, position: Vector2, tint: Color): void

	/** Draw a Texture2D with extended parameters */
	export function DrawTextureEx(texture: Texture2D, position: Vector2, rotation: number, scale: number, tint: Color): void

	/** Draw a part of a texture defined by a rectangle */
	export function DrawTextureRec(texture: Texture2D, source: Rectangle, position: Vector2, tint: Color): void

	/** Draw texture quad with tiling and offset parameters */
	export function DrawTextureQuad(texture: Texture2D, tiling: Vector2, offset: Vector2, quad: Rectangle, tint: Color): void

	/** Draw part of a texture (defined by a rectangle) with rotation and scale tiled into dest. */
	export function DrawTextureTiled(texture: Texture2D, source: Rectangle, dest: Rectangle, origin: Vector2, rotation: number, scale: number, tint: Color): void

	/** Draw a part of a texture defined by a rectangle with 'pro' parameters */
	export function DrawTexturePro(texture: Texture2D, source: Rectangle, dest: Rectangle, origin: Vector2, rotation: number, tint: Color): void

	/** Draws a texture (or part of it) that stretches or shrinks nicely */
	export function DrawTextureNPatch(texture: Texture2D, nPatchInfo: NPatchInfo, dest: Rectangle, origin: Vector2, rotation: number, tint: Color): void

	/** Draw a textured polygon */
	export function DrawTexturePoly(texture: Texture2D, center: Vector2, points: Vector2, texcoords: Vector2, pointCount: number, tint: Color): void

	/** Get color with alpha applied, alpha goes from 0.0f to 1.0f */
	export function Fade(color: Color, alpha: number): Color

	/** Get hexadecimal value for a Color */
	export function ColorToInt(color: Color): number

	/** Get Color normalized as float [0..1] */
	export function ColorNormalize(color: Color): Vector4

	/** Get Color from normalized values [0..1] */
	export function ColorFromNormalized(normalized: Vector4): Color

	/** Get HSV values for a Color, hue [0..360], saturation/value [0..1] */
	export function ColorToHSV(color: Color): Vector3

	/** Get a Color from HSV values, hue [0..360], saturation/value [0..1] */
	export function ColorFromHSV(hue: number, saturation: number, value: number): Color

	/** Get color with alpha applied, alpha goes from 0.0f to 1.0f */
	export function ColorAlpha(color: Color, alpha: number): Color

	/** Get src alpha-blended into dst color with tint */
	export function ColorAlphaBlend(dst: Color, src: Color, tint: Color): Color

	/** Get Color structure from hexadecimal value */
	export function GetColor(hexValue: number): Color

	/** Get Color from a source pixel pointer of certain format */
	export function GetPixelColor(srcPtr: any, format: number): Color

	/** Set color formatted into destination pixel pointer */
	export function SetPixelColor(dstPtr: any, color: Color, format: number): void

	/** Get pixel data size in bytes for certain format */
	export function GetPixelDataSize(width: number, height: number, format: number): number

	/** Get the default Font */
	export function GetFontDefault(): Font

	/** Load font from file into GPU memory (VRAM) */
	export function LoadFont(fileName: string): Font

	/** Load font from file with extended parameters */
	export function LoadFontEx(fileName: string, fontSize: number, fontChars: number[], glyphCount: number): Font

	/** Load font from Image (XNA style) */
	export function LoadFontFromImage(image: Image, key: Color, firstChar: number): Font

	/** Load font from memory buffer, fileType refers to extension: i.e. '.ttf' */
	export function LoadFontFromMemory(fileType: string, fileData: string, dataSize: number, fontSize: number, fontChars: number[], glyphCount: number): Font

	/** Generate image font atlas using chars info */
	export function GenImageFontAtlas(chars: GlyphInfo, recs: Rectangle[], glyphCount: number, fontSize: number, padding: number, packMethod: number): Image

	/** Unload font chars info data (RAM) */
	export function UnloadFontData(chars: GlyphInfo, glyphCount: number): void

	/** Unload Font from GPU memory (VRAM) */
	export function UnloadFont(font: Font): void

	/** Draw current FPS */
	export function DrawFPS(posX: number, posY: number): void

	/** Draw text (using default font) */
	export function DrawText(text: string, posX: number, posY: number, fontSize: number, color: Color): void

	/** Draw text using font and additional parameters */
	export function DrawTextEx(font: Font, text: string, position: Vector2, fontSize: number, spacing: number, tint: Color): void

	/** Draw text using Font and pro parameters (rotation) */
	export function DrawTextPro(font: Font, text: string, position: Vector2, origin: Vector2, rotation: number, fontSize: number, spacing: number, tint: Color): void

	/** Draw one character (codepoint) */
	export function DrawTextCodepoint(font: Font, codepoint: number, position: Vector2, fontSize: number, tint: Color): void

	/** Measure string width for default font */
	export function MeasureText(text: string, fontSize: number): number

	/** Measure string size for Font */
	export function MeasureTextEx(font: Font, text: string, fontSize: number, spacing: number): Vector2

	/** Get glyph index position in font for a codepoint (unicode character), fallback to '?' if not found */
	export function GetGlyphIndex(font: Font, codepoint: number): number

	/** Get glyph font info data for a codepoint (unicode character), fallback to '?' if not found */
	export function GetGlyphInfo(font: Font, codepoint: number): GlyphInfo

	/** Get glyph rectangle in font atlas for a codepoint (unicode character), fallback to '?' if not found */
	export function GetGlyphAtlasRec(font: Font, codepoint: number): Rectangle

	/** Unload codepoints data from memory */
	export function UnloadCodepoints(codepoints: number[]): void

	/** Get total number of codepoints in a UTF-8 encoded string */
	export function GetCodepointCount(text: string): number

	/** Get next codepoint in a UTF-8 encoded string, 0x3f('?') is returned on failure */
	export function GetCodepoint(text: string, bytesProcessed: number[]): number

	/** Encode one codepoint into UTF-8 byte array (array length returned as parameter) */
	export function CodepointToUTF8(codepoint: number, byteSize: number[]): string

	/** Encode text as codepoints array into UTF-8 text string (WARNING: memory must be freed!) */
	export function TextCodepointsToUTF8(codepoints: number[], length: number): string

	/** Copy one string to another, returns bytes copied */
	export function TextCopy(dst: string, src: string): number

	/** Check if two text string are equal */
	export function TextIsEqual(text1: string, text2: string): boolean

	/** Get text length, checks for ' 0' ending */
	export function TextLength(text: string): number

	/** Text formatting with variables (sprintf() style) */
	export function TextFormat(text: string, ...args: any): string

	/** Get a piece of a text string */
	export function TextSubtext(text: string, position: number, length: number): string

	/** Replace text string (WARNING: memory must be freed!) */
	export function TextReplace(text: string, replace: string, by: string): string

	/** Insert text in a position (WARNING: memory must be freed!) */
	export function TextInsert(text: string, insert: string, position: number): string

	/** Join text strings with delimiter */
	export function TextJoin(textList: string, count: number, delimiter: string): string

	/** Append text at specific position and move cursor! */
	export function TextAppend(text: string, append: string, position: number[]): void

	/** Find first text occurrence within a string */
	export function TextFindIndex(text: string, find: string): number

	/** Get upper case version of provided string */
	export function TextToUpper(text: string): string

	/** Get lower case version of provided string */
	export function TextToLower(text: string): string

	/** Get Pascal case notation version of provided string */
	export function TextToPascal(text: string): string

	/** Get integer value from text (negative values not supported) */
	export function TextToInteger(text: string): number

	/** Draw a line in 3D world space */
	export function DrawLine3D(startPos: Vector3, endPos: Vector3, color: Color): void

	/** Draw a point in 3D space, actually a small line */
	export function DrawPoint3D(position: Vector3, color: Color): void

	/** Draw a circle in 3D world space */
	export function DrawCircle3D(center: Vector3, radius: number, rotationAxis: Vector3, rotationAngle: number, color: Color): void

	/** Draw a color-filled triangle (vertex in counter-clockwise order!) */
	export function DrawTriangle3D(v1: Vector3, v2: Vector3, v3: Vector3, color: Color): void

	/** Draw a triangle strip defined by points */
	export function DrawTriangleStrip3D(points: Vector3, pointCount: number, color: Color): void

	/** Draw cube */
	export function DrawCube(position: Vector3, width: number, height: number, length: number, color: Color): void

	/** Draw cube (Vector version) */
	export function DrawCubeV(position: Vector3, size: Vector3, color: Color): void

	/** Draw cube wires */
	export function DrawCubeWires(position: Vector3, width: number, height: number, length: number, color: Color): void

	/** Draw cube wires (Vector version) */
	export function DrawCubeWiresV(position: Vector3, size: Vector3, color: Color): void

	/** Draw cube textured */
	export function DrawCubeTexture(texture: Texture2D, position: Vector3, width: number, height: number, length: number, color: Color): void

	/** Draw cube with a region of a texture */
	export function DrawCubeTextureRec(texture: Texture2D, source: Rectangle, position: Vector3, width: number, height: number, length: number, color: Color): void

	/** Draw sphere */
	export function DrawSphere(centerPos: Vector3, radius: number, color: Color): void

	/** Draw sphere with extended parameters */
	export function DrawSphereEx(centerPos: Vector3, radius: number, rings: number, slices: number, color: Color): void

	/** Draw sphere wires */
	export function DrawSphereWires(centerPos: Vector3, radius: number, rings: number, slices: number, color: Color): void

	/** Draw a cylinder/cone */
	export function DrawCylinder(position: Vector3, radiusTop: number, radiusBottom: number, height: number, slices: number, color: Color): void

	/** Draw a cylinder with base at startPos and top at endPos */
	export function DrawCylinderEx(startPos: Vector3, endPos: Vector3, startRadius: number, endRadius: number, sides: number, color: Color): void

	/** Draw a cylinder/cone wires */
	export function DrawCylinderWires(position: Vector3, radiusTop: number, radiusBottom: number, height: number, slices: number, color: Color): void

	/** Draw a cylinder wires with base at startPos and top at endPos */
	export function DrawCylinderWiresEx(startPos: Vector3, endPos: Vector3, startRadius: number, endRadius: number, sides: number, color: Color): void

	/** Draw a plane XZ */
	export function DrawPlane(centerPos: Vector3, size: Vector2, color: Color): void

	/** Draw a ray line */
	export function DrawRay(ray: Ray, color: Color): void

	/** Draw a grid (centered at (0, 0, 0)) */
	export function DrawGrid(slices: number, spacing: number): void

	/** Load model from files (meshes and materials) */
	export function LoadModel(fileName: string): Model

	/** Load model from generated mesh (default material) */
	export function LoadModelFromMesh(mesh: Mesh): Model

	/** Unload model (including meshes) from memory (RAM and/or VRAM) */
	export function UnloadModel(model: Model): void

	/** Unload model (but not meshes) from memory (RAM and/or VRAM) */
	export function UnloadModelKeepMeshes(model: Model): void

	/** Compute model bounding box limits (considers all meshes) */
	export function GetModelBoundingBox(model: Model): BoundingBox

	/** Draw a model (with texture if set) */
	export function DrawModel(model: Model, position: Vector3, scale: number, tint: Color): void

	/** Draw a model with extended parameters */
	export function DrawModelEx(model: Model, position: Vector3, rotationAxis: Vector3, rotationAngle: number, scale: Vector3, tint: Color): void

	/** Draw a model wires (with texture if set) */
	export function DrawModelWires(model: Model, position: Vector3, scale: number, tint: Color): void

	/** Draw a model wires (with texture if set) with extended parameters */
	export function DrawModelWiresEx(model: Model, position: Vector3, rotationAxis: Vector3, rotationAngle: number, scale: Vector3, tint: Color): void

	/** Draw bounding box (wires) */
	export function DrawBoundingBox(box: BoundingBox, color: Color): void

	/** Draw a billboard texture */
	export function DrawBillboard(camera: Camera3D, texture: Texture2D, position: Vector3, size: number, tint: Color): void

	/** Draw a billboard texture defined by source */
	export function DrawBillboardRec(camera: Camera3D, texture: Texture2D, source: Rectangle, position: Vector3, size: Vector2, tint: Color): void

	/** Draw a billboard texture defined by source and rotation */
	export function DrawBillboardPro(camera: Camera3D, texture: Texture2D, source: Rectangle, position: Vector3, up: Vector3, size: Vector2, origin: Vector2, rotation: number, tint: Color): void

	/** Upload mesh vertex data in GPU and provide VAO/VBO ids */
	export function UploadMesh(mesh: Mesh, dynamic: boolean): void

	/** Update mesh vertex data in GPU for a specific buffer index */
	export function UpdateMeshBuffer(mesh: Mesh, index: number, data: any, dataSize: number, offset: number): void

	/** Unload mesh data from CPU and GPU */
	export function UnloadMesh(mesh: Mesh): void

	/** Draw a 3d mesh with material and transform */
	export function DrawMesh(mesh: Mesh, material: Material, transform: Matrix): void

	/** Draw multiple mesh instances with material and different transforms */
	export function DrawMeshInstanced(mesh: Mesh, material: Material, transforms: Matrix, instances: number): void

	/** Export mesh data to file, returns true on success */
	export function ExportMesh(mesh: Mesh, fileName: string): boolean

	/** Compute mesh bounding box limits */
	export function GetMeshBoundingBox(mesh: Mesh): BoundingBox

	/** Compute mesh tangents */
	export function GenMeshTangents(mesh: Mesh): void

	/** Compute mesh binormals */
	export function GenMeshBinormals(mesh: Mesh): void

	/** Generate polygonal mesh */
	export function GenMeshPoly(sides: number, radius: number): Mesh

	/** Generate plane mesh (with subdivisions) */
	export function GenMeshPlane(width: number, length: number, resX: number, resZ: number): Mesh

	/** Generate cuboid mesh */
	export function GenMeshCube(width: number, height: number, length: number): Mesh

	/** Generate sphere mesh (standard sphere) */
	export function GenMeshSphere(radius: number, rings: number, slices: number): Mesh

	/** Generate half-sphere mesh (no bottom cap) */
	export function GenMeshHemiSphere(radius: number, rings: number, slices: number): Mesh

	/** Generate cylinder mesh */
	export function GenMeshCylinder(radius: number, height: number, slices: number): Mesh

	/** Generate cone/pyramid mesh */
	export function GenMeshCone(radius: number, height: number, slices: number): Mesh

	/** Generate torus mesh */
	export function GenMeshTorus(radius: number, size: number, radSeg: number, sides: number): Mesh

	/** Generate trefoil knot mesh */
	export function GenMeshKnot(radius: number, size: number, radSeg: number, sides: number): Mesh

	/** Generate heightmap mesh from image data */
	export function GenMeshHeightmap(heightmap: Image, size: Vector3): Mesh

	/** Generate cubes-based map mesh from image data */
	export function GenMeshCubicmap(cubicmap: Image, cubeSize: Vector3): Mesh

	/** Load default material (Supports: DIFFUSE, SPECULAR, NORMAL maps) */
	export function LoadMaterialDefault(): Material

	/** Unload material from GPU memory (VRAM) */
	export function UnloadMaterial(material: Material): void

	/** Set texture for a material map type (MATERIAL_MAP_DIFFUSE, MATERIAL_MAP_SPECULAR...) */
	export function SetMaterialTexture(material: Material, mapType: number, texture: Texture2D): void

	/** Set material for a mesh */
	export function SetModelMeshMaterial(model: Model, meshId: number, materialId: number): void

	/** Update model animation pose */
	export function UpdateModelAnimation(model: Model, anim: ModelAnimation, frame: number): void

	/** Unload animation data */
	export function UnloadModelAnimation(anim: ModelAnimation): void

	/** Unload animation array data */
	export function UnloadModelAnimations(animations: ModelAnimation[], count: number): void

	/** Check model animation skeleton match */
	export function IsModelAnimationValid(model: Model, anim: ModelAnimation): boolean

	/** Check collision between two spheres */
	export function CheckCollisionSpheres(center1: Vector3, radius1: number, center2: Vector3, radius2: number): boolean

	/** Check collision between two bounding boxes */
	export function CheckCollisionBoxes(box1: BoundingBox, box2: BoundingBox): boolean

	/** Check collision between box and sphere */
	export function CheckCollisionBoxSphere(box: BoundingBox, center: Vector3, radius: number): boolean

	/** Get collision info between ray and sphere */
	export function GetRayCollisionSphere(ray: Ray, center: Vector3, radius: number): RayCollision

	/** Get collision info between ray and box */
	export function GetRayCollisionBox(ray: Ray, box: BoundingBox): RayCollision

	/** Get collision info between ray and model */
	export function GetRayCollisionModel(ray: Ray, model: Model): RayCollision

	/** Get collision info between ray and mesh */
	export function GetRayCollisionMesh(ray: Ray, mesh: Mesh, transform: Matrix): RayCollision

	/** Get collision info between ray and triangle */
	export function GetRayCollisionTriangle(ray: Ray, p1: Vector3, p2: Vector3, p3: Vector3): RayCollision

	/** Get collision info between ray and quad */
	export function GetRayCollisionQuad(ray: Ray, p1: Vector3, p2: Vector3, p3: Vector3, p4: Vector3): RayCollision

	/** Initialize audio device and context */
	export function InitAudioDevice(): void

	/** Close the audio device and context */
	export function CloseAudioDevice(): void

	/** Check if audio device has been initialized successfully */
	export function IsAudioDeviceReady(): boolean

	/** Set master volume (listener) */
	export function SetMasterVolume(volume: number): void

	/** Load wave data from file */
	export function LoadWave(fileName: string): Wave

	/** Load wave from memory buffer, fileType refers to extension: i.e. '.wav' */
	export function LoadWaveFromMemory(fileType: string, fileData: string, dataSize: number): Wave

	/** Load sound from file */
	export function LoadSound(fileName: string): Sound

	/** Load sound from wave data */
	export function LoadSoundFromWave(wave: Wave): Sound

	/** Update sound buffer with new data */
	export function UpdateSound(sound: Sound, data: any, sampleCount: number): void

	/** Unload wave data */
	export function UnloadWave(wave: Wave): void

	/** Unload sound */
	export function UnloadSound(sound: Sound): void

	/** Export wave data to file, returns true on success */
	export function ExportWave(wave: Wave, fileName: string): boolean

	/** Export wave sample data to code (.h), returns true on success */
	export function ExportWaveAsCode(wave: Wave, fileName: string): boolean

	/** Play a sound */
	export function PlaySound(sound: Sound): void

	/** Stop playing a sound */
	export function StopSound(sound: Sound): void

	/** Pause a sound */
	export function PauseSound(sound: Sound): void

	/** Resume a paused sound */
	export function ResumeSound(sound: Sound): void

	/** Play a sound (using multichannel buffer pool) */
	export function PlaySoundMulti(sound: Sound): void

	/** Stop any sound playing (using multichannel buffer pool) */
	export function StopSoundMulti(): void

	/** Get number of sounds playing in the multichannel */
	export function GetSoundsPlaying(): number

	/** Check if a sound is currently playing */
	export function IsSoundPlaying(sound: Sound): boolean

	/** Set volume for a sound (1.0 is max level) */
	export function SetSoundVolume(sound: Sound, volume: number): void

	/** Set pitch for a sound (1.0 is base level) */
	export function SetSoundPitch(sound: Sound, pitch: number): void

	/** Convert wave data to desired format */
	export function WaveFormat(wave: Wave, sampleRate: number, sampleSize: number, channels: number): void

	/** Copy a wave to a new wave */
	export function WaveCopy(wave: Wave): Wave

	/** Crop a wave to defined samples range */
	export function WaveCrop(wave: Wave, initSample: number, finalSample: number): void

	/** Unload samples data loaded with LoadWaveSamples() */
	export function UnloadWaveSamples(samples: number[]): void

	/** Load music stream from file */
	export function LoadMusicStream(fileName: string): Music

	/** Load music stream from data */
	export function LoadMusicStreamFromMemory(fileType: string, data: string, dataSize: number): Music

	/** Unload music stream */
	export function UnloadMusicStream(music: Music): void

	/** Start music playing */
	export function PlayMusicStream(music: Music): void

	/** Check if music is playing */
	export function IsMusicStreamPlaying(music: Music): boolean

	/** Updates buffers for music streaming */
	export function UpdateMusicStream(music: Music): void

	/** Stop music playing */
	export function StopMusicStream(music: Music): void

	/** Pause music playing */
	export function PauseMusicStream(music: Music): void

	/** Resume playing paused music */
	export function ResumeMusicStream(music: Music): void

	/** Seek music to a position (in seconds) */
	export function SeekMusicStream(music: Music, position: number): void

	/** Set volume for music (1.0 is max level) */
	export function SetMusicVolume(music: Music, volume: number): void

	/** Set pitch for a music (1.0 is base level) */
	export function SetMusicPitch(music: Music, pitch: number): void

	/** Get music time length (in seconds) */
	export function GetMusicTimeLength(music: Music): number

	/** Get current music time played (in seconds) */
	export function GetMusicTimePlayed(music: Music): number

	/** Load audio stream (to stream raw audio pcm data) */
	export function LoadAudioStream(sampleRate: number, sampleSize: number, channels: number): AudioStream

	/** Unload audio stream and free memory */
	export function UnloadAudioStream(stream: AudioStream): void

	/** Update audio stream buffers with data */
	export function UpdateAudioStream(stream: AudioStream, data: any, frameCount: number): void

	/** Check if any audio stream buffers requires refill */
	export function IsAudioStreamProcessed(stream: AudioStream): boolean

	/** Play audio stream */
	export function PlayAudioStream(stream: AudioStream): void

	/** Pause audio stream */
	export function PauseAudioStream(stream: AudioStream): void

	/** Resume audio stream */
	export function ResumeAudioStream(stream: AudioStream): void

	/** Check if audio stream is playing */
	export function IsAudioStreamPlaying(stream: AudioStream): boolean

	/** Stop audio stream */
	export function StopAudioStream(stream: AudioStream): void

	/** Set volume for audio stream (1.0 is max level) */
	export function SetAudioStreamVolume(stream: AudioStream, volume: number): void

	/** Set pitch for audio stream (1.0 is base level) */
	export function SetAudioStreamPitch(stream: AudioStream, pitch: number): void

	/** Default size for new audio streams */
	export function SetAudioStreamBufferSizeDefault(size: number): void


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
}