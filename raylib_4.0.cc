#include <napi.h>
#include "./raylib/include/raylib.h"
using namespace Napi;

Vector2 Vector2FromNAPIObject(Napi::Object obj) {
	Vector2 out = Vector2();
	out.x = obj.Get("x").As<Napi::Number>();
	out.y = obj.Get("y").As<Napi::Number>();
	return out;
}

Napi::Object BindVector2(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("x", info[0].As<Napi::Object>());
	out.Set("y", info[1].As<Napi::Object>());
	return out;
}

Napi::Object Vector2ToNAPIObject(napi_env env, Vector2 object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("x", object.x);
	out.Set("y", object.y);
	return out;
}

Vector3 Vector3FromNAPIObject(Napi::Object obj) {
	Vector3 out = Vector3();
	out.x = obj.Get("x").As<Napi::Number>();
	out.y = obj.Get("y").As<Napi::Number>();
	out.z = obj.Get("z").As<Napi::Number>();
	return out;
}

Napi::Object BindVector3(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("x", info[0].As<Napi::Object>());
	out.Set("y", info[1].As<Napi::Object>());
	out.Set("z", info[2].As<Napi::Object>());
	return out;
}

Napi::Object Vector3ToNAPIObject(napi_env env, Vector3 object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("x", object.x);
	out.Set("y", object.y);
	out.Set("z", object.z);
	return out;
}

Vector4 Vector4FromNAPIObject(Napi::Object obj) {
	Vector4 out = Vector4();
	out.x = obj.Get("x").As<Napi::Number>();
	out.y = obj.Get("y").As<Napi::Number>();
	out.z = obj.Get("z").As<Napi::Number>();
	out.w = obj.Get("w").As<Napi::Number>();
	return out;
}

Napi::Object BindVector4(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("x", info[0].As<Napi::Object>());
	out.Set("y", info[1].As<Napi::Object>());
	out.Set("z", info[2].As<Napi::Object>());
	out.Set("w", info[3].As<Napi::Object>());
	return out;
}

Napi::Object Vector4ToNAPIObject(napi_env env, Vector4 object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("x", object.x);
	out.Set("y", object.y);
	out.Set("z", object.z);
	out.Set("w", object.w);
	return out;
}

Matrix MatrixFromNAPIObject(Napi::Object obj) {
	Matrix out = Matrix();
	out.m0 = obj.Get("m0").As<Napi::Number>();
	out.m1 = obj.Get("m1").As<Napi::Number>();
	out.m2 = obj.Get("m2").As<Napi::Number>();
	out.m3 = obj.Get("m3").As<Napi::Number>();
	out.m4 = obj.Get("m4").As<Napi::Number>();
	out.m5 = obj.Get("m5").As<Napi::Number>();
	out.m6 = obj.Get("m6").As<Napi::Number>();
	out.m7 = obj.Get("m7").As<Napi::Number>();
	out.m8 = obj.Get("m8").As<Napi::Number>();
	out.m9 = obj.Get("m9").As<Napi::Number>();
	out.m10 = obj.Get("m10").As<Napi::Number>();
	out.m11 = obj.Get("m11").As<Napi::Number>();
	out.m12 = obj.Get("m12").As<Napi::Number>();
	out.m13 = obj.Get("m13").As<Napi::Number>();
	out.m14 = obj.Get("m14").As<Napi::Number>();
	out.m15 = obj.Get("m15").As<Napi::Number>();
	return out;
}

Napi::Object BindMatrix(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("m0", info[0].As<Napi::Object>());
	out.Set("m1", info[1].As<Napi::Object>());
	out.Set("m2", info[2].As<Napi::Object>());
	out.Set("m3", info[3].As<Napi::Object>());
	out.Set("m4", info[4].As<Napi::Object>());
	out.Set("m5", info[5].As<Napi::Object>());
	out.Set("m6", info[6].As<Napi::Object>());
	out.Set("m7", info[7].As<Napi::Object>());
	out.Set("m8", info[8].As<Napi::Object>());
	out.Set("m9", info[9].As<Napi::Object>());
	out.Set("m10", info[10].As<Napi::Object>());
	out.Set("m11", info[11].As<Napi::Object>());
	out.Set("m12", info[12].As<Napi::Object>());
	out.Set("m13", info[13].As<Napi::Object>());
	out.Set("m14", info[14].As<Napi::Object>());
	out.Set("m15", info[15].As<Napi::Object>());
	return out;
}

Napi::Object MatrixToNAPIObject(napi_env env, Matrix object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("m0", object.m0);
	out.Set("m1", object.m1);
	out.Set("m2", object.m2);
	out.Set("m3", object.m3);
	out.Set("m4", object.m4);
	out.Set("m5", object.m5);
	out.Set("m6", object.m6);
	out.Set("m7", object.m7);
	out.Set("m8", object.m8);
	out.Set("m9", object.m9);
	out.Set("m10", object.m10);
	out.Set("m11", object.m11);
	out.Set("m12", object.m12);
	out.Set("m13", object.m13);
	out.Set("m14", object.m14);
	out.Set("m15", object.m15);
	return out;
}

Color ColorFromNAPIObject(Napi::Object obj) {
	Color out = Color();
	out.r = obj.Get("r").As<Napi::Number>().Uint32Value();
	out.g = obj.Get("g").As<Napi::Number>().Uint32Value();
	out.b = obj.Get("b").As<Napi::Number>().Uint32Value();
	out.a = obj.Get("a").As<Napi::Number>().Uint32Value();
	return out;
}

Napi::Object BindColor(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("r", info[0].As<Napi::Object>());
	out.Set("g", info[1].As<Napi::Object>());
	out.Set("b", info[2].As<Napi::Object>());
	out.Set("a", info[3].As<Napi::Object>());
	return out;
}

Napi::Object ColorToNAPIObject(napi_env env, Color object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("r", object.r);
	out.Set("g", object.g);
	out.Set("b", object.b);
	out.Set("a", object.a);
	return out;
}

Rectangle RectangleFromNAPIObject(Napi::Object obj) {
	Rectangle out = Rectangle();
	out.x = obj.Get("x").As<Napi::Number>();
	out.y = obj.Get("y").As<Napi::Number>();
	out.width = obj.Get("width").As<Napi::Number>();
	out.height = obj.Get("height").As<Napi::Number>();
	return out;
}

Napi::Object BindRectangle(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("x", info[0].As<Napi::Object>());
	out.Set("y", info[1].As<Napi::Object>());
	out.Set("width", info[2].As<Napi::Object>());
	out.Set("height", info[3].As<Napi::Object>());
	return out;
}

Napi::Object RectangleToNAPIObject(napi_env env, Rectangle object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("x", object.x);
	out.Set("y", object.y);
	out.Set("width", object.width);
	out.Set("height", object.height);
	return out;
}

Image ImageFromNAPIObject(Napi::Object obj) {
	Image out = Image();
	out.data = (void *)obj.Get("data").As<Napi::Number>().Int64Value();
	out.width = obj.Get("width").As<Napi::Number>();
	out.height = obj.Get("height").As<Napi::Number>();
	out.mipmaps = obj.Get("mipmaps").As<Napi::Number>();
	out.format = obj.Get("format").As<Napi::Number>();
	return out;
}

Napi::Object BindImage(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", info[0].As<Napi::Object>());
	out.Set("width", info[1].As<Napi::Object>());
	out.Set("height", info[2].As<Napi::Object>());
	out.Set("mipmaps", info[3].As<Napi::Object>());
	out.Set("format", info[4].As<Napi::Object>());
	return out;
}

Napi::Object ImageToNAPIObject(napi_env env, Image object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("data", (int64_t)object.data);
	out.Set("width", object.width);
	out.Set("height", object.height);
	out.Set("mipmaps", object.mipmaps);
	out.Set("format", object.format);
	return out;
}

Texture TextureFromNAPIObject(Napi::Object obj) {
	Texture out = Texture();
	out.id = obj.Get("id").As<Napi::Number>();
	out.width = obj.Get("width").As<Napi::Number>();
	out.height = obj.Get("height").As<Napi::Number>();
	out.mipmaps = obj.Get("mipmaps").As<Napi::Number>();
	out.format = obj.Get("format").As<Napi::Number>();
	return out;
}

Napi::Object BindTexture(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("id", info[0].As<Napi::Object>());
	out.Set("width", info[1].As<Napi::Object>());
	out.Set("height", info[2].As<Napi::Object>());
	out.Set("mipmaps", info[3].As<Napi::Object>());
	out.Set("format", info[4].As<Napi::Object>());
	return out;
}

Napi::Object TextureToNAPIObject(napi_env env, Texture object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("id", object.id);
	out.Set("width", object.width);
	out.Set("height", object.height);
	out.Set("mipmaps", object.mipmaps);
	out.Set("format", object.format);
	return out;
}

RenderTexture RenderTextureFromNAPIObject(Napi::Object obj) {
	RenderTexture out = RenderTexture();
	out.id = obj.Get("id").As<Napi::Number>();
	out.texture = TextureFromNAPIObject(obj.Get("texture").As<Napi::Object>());
	out.depth = TextureFromNAPIObject(obj.Get("depth").As<Napi::Object>());
	return out;
}

Napi::Object BindRenderTexture(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("id", info[0].As<Napi::Object>());
	out.Set("texture", info[1].As<Napi::Object>());
	out.Set("depth", info[2].As<Napi::Object>());
	return out;
}

Napi::Object RenderTextureToNAPIObject(napi_env env, RenderTexture object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("id", object.id);
	out.Set("texture", TextureToNAPIObject(env, object.texture));
	out.Set("depth", TextureToNAPIObject(env, object.depth));
	return out;
}

NPatchInfo NPatchInfoFromNAPIObject(Napi::Object obj) {
	NPatchInfo out = NPatchInfo();
	out.source = RectangleFromNAPIObject(obj.Get("source").As<Napi::Object>());
	out.left = obj.Get("left").As<Napi::Number>();
	out.top = obj.Get("top").As<Napi::Number>();
	out.right = obj.Get("right").As<Napi::Number>();
	out.bottom = obj.Get("bottom").As<Napi::Number>();
	out.layout = obj.Get("layout").As<Napi::Number>();
	return out;
}

Napi::Object BindNPatchInfo(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("source", info[0].As<Napi::Object>());
	out.Set("left", info[1].As<Napi::Object>());
	out.Set("top", info[2].As<Napi::Object>());
	out.Set("right", info[3].As<Napi::Object>());
	out.Set("bottom", info[4].As<Napi::Object>());
	out.Set("layout", info[5].As<Napi::Object>());
	return out;
}

Napi::Object NPatchInfoToNAPIObject(napi_env env, NPatchInfo object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("source", RectangleToNAPIObject(env, object.source));
	out.Set("left", object.left);
	out.Set("top", object.top);
	out.Set("right", object.right);
	out.Set("bottom", object.bottom);
	out.Set("layout", object.layout);
	return out;
}

GlyphInfo GlyphInfoFromNAPIObject(Napi::Object obj) {
	GlyphInfo out = GlyphInfo();
	out.value = obj.Get("value").As<Napi::Number>();
	out.offsetX = obj.Get("offsetX").As<Napi::Number>();
	out.offsetY = obj.Get("offsetY").As<Napi::Number>();
	out.advanceX = obj.Get("advanceX").As<Napi::Number>();
	out.image = ImageFromNAPIObject(obj.Get("image").As<Napi::Object>());
	return out;
}

Napi::Object BindGlyphInfo(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("value", info[0].As<Napi::Object>());
	out.Set("offsetX", info[1].As<Napi::Object>());
	out.Set("offsetY", info[2].As<Napi::Object>());
	out.Set("advanceX", info[3].As<Napi::Object>());
	out.Set("image", info[4].As<Napi::Object>());
	return out;
}

Napi::Object GlyphInfoToNAPIObject(napi_env env, GlyphInfo object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("value", object.value);
	out.Set("offsetX", object.offsetX);
	out.Set("offsetY", object.offsetY);
	out.Set("advanceX", object.advanceX);
	out.Set("image", ImageToNAPIObject(env, object.image));
	return out;
}

Font FontFromNAPIObject(Napi::Object obj) {
	Font out = Font();
	out.baseSize = obj.Get("baseSize").As<Napi::Number>();
	out.glyphCount = obj.Get("glyphCount").As<Napi::Number>();
	out.glyphPadding = obj.Get("glyphPadding").As<Napi::Number>();
	out.texture = TextureFromNAPIObject(obj.Get("texture").As<Napi::Object>());
	out.recs = (Rectangle *)obj.Get("recs").As<Napi::Number>().Int64Value();
	out.glyphs = (GlyphInfo *)obj.Get("glyphs").As<Napi::Number>().Int64Value();
	return out;
}

Napi::Object BindFont(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("baseSize", info[0].As<Napi::Object>());
	out.Set("glyphCount", info[1].As<Napi::Object>());
	out.Set("glyphPadding", info[2].As<Napi::Object>());
	out.Set("texture", info[3].As<Napi::Object>());
	out.Set("recs", info[4].As<Napi::Object>());
	out.Set("glyphs", info[5].As<Napi::Object>());
	return out;
}

Napi::Object FontToNAPIObject(napi_env env, Font object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("baseSize", object.baseSize);
	out.Set("glyphCount", object.glyphCount);
	out.Set("glyphPadding", object.glyphPadding);
	out.Set("texture", TextureToNAPIObject(env, object.texture));
	out.Set("recs", (int64_t)object.recs);
	out.Set("glyphs", (int64_t)object.glyphs);
	return out;
}

Camera3D Camera3DFromNAPIObject(Napi::Object obj) {
	Camera3D out = Camera3D();
	out.position = Vector3FromNAPIObject(obj.Get("position").As<Napi::Object>());
	out.target = Vector3FromNAPIObject(obj.Get("target").As<Napi::Object>());
	out.up = Vector3FromNAPIObject(obj.Get("up").As<Napi::Object>());
	out.fovy = obj.Get("fovy").As<Napi::Number>();
	out.projection = obj.Get("projection").As<Napi::Number>();
	return out;
}

Napi::Object BindCamera3D(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("position", info[0].As<Napi::Object>());
	out.Set("target", info[1].As<Napi::Object>());
	out.Set("up", info[2].As<Napi::Object>());
	out.Set("fovy", info[3].As<Napi::Object>());
	out.Set("projection", info[4].As<Napi::Object>());
	return out;
}

Napi::Object Camera3DToNAPIObject(napi_env env, Camera3D object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("position", Vector3ToNAPIObject(env, object.position));
	out.Set("target", Vector3ToNAPIObject(env, object.target));
	out.Set("up", Vector3ToNAPIObject(env, object.up));
	out.Set("fovy", object.fovy);
	out.Set("projection", object.projection);
	return out;
}

Camera2D Camera2DFromNAPIObject(Napi::Object obj) {
	Camera2D out = Camera2D();
	out.offset = Vector2FromNAPIObject(obj.Get("offset").As<Napi::Object>());
	out.target = Vector2FromNAPIObject(obj.Get("target").As<Napi::Object>());
	out.rotation = obj.Get("rotation").As<Napi::Number>();
	out.zoom = obj.Get("zoom").As<Napi::Number>();
	return out;
}

Napi::Object BindCamera2D(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("offset", info[0].As<Napi::Object>());
	out.Set("target", info[1].As<Napi::Object>());
	out.Set("rotation", info[2].As<Napi::Object>());
	out.Set("zoom", info[3].As<Napi::Object>());
	return out;
}

Napi::Object Camera2DToNAPIObject(napi_env env, Camera2D object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("offset", Vector2ToNAPIObject(env, object.offset));
	out.Set("target", Vector2ToNAPIObject(env, object.target));
	out.Set("rotation", object.rotation);
	out.Set("zoom", object.zoom);
	return out;
}

Mesh MeshFromNAPIObject(Napi::Object obj) {
	Mesh out = Mesh();
	out.vertexCount = obj.Get("vertexCount").As<Napi::Number>();
	out.triangleCount = obj.Get("triangleCount").As<Napi::Number>();
	out.vertices = (float *)obj.Get("vertices").As<Napi::Number>().Int64Value();
	out.texcoords = (float *)obj.Get("texcoords").As<Napi::Number>().Int64Value();
	out.texcoords2 = (float *)obj.Get("texcoords2").As<Napi::Number>().Int64Value();
	out.normals = (float *)obj.Get("normals").As<Napi::Number>().Int64Value();
	out.tangents = (float *)obj.Get("tangents").As<Napi::Number>().Int64Value();
	out.colors = (unsigned char *)obj.Get("colors").As<Napi::Number>().Int64Value();
	out.indices = (unsigned short *)obj.Get("indices").As<Napi::Number>().Int64Value();
	out.animVertices = (float *)obj.Get("animVertices").As<Napi::Number>().Int64Value();
	out.animNormals = (float *)obj.Get("animNormals").As<Napi::Number>().Int64Value();
	out.boneIds = (unsigned char *)obj.Get("boneIds").As<Napi::Number>().Int64Value();
	out.boneWeights = (float *)obj.Get("boneWeights").As<Napi::Number>().Int64Value();
	out.vaoId = obj.Get("vaoId").As<Napi::Number>();
	out.vboId = (unsigned int *)obj.Get("vboId").As<Napi::Number>().Int64Value();
	return out;
}

Napi::Object BindMesh(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("vertexCount", info[0].As<Napi::Object>());
	out.Set("triangleCount", info[1].As<Napi::Object>());
	out.Set("vertices", info[2].As<Napi::Object>());
	out.Set("texcoords", info[3].As<Napi::Object>());
	out.Set("texcoords2", info[4].As<Napi::Object>());
	out.Set("normals", info[5].As<Napi::Object>());
	out.Set("tangents", info[6].As<Napi::Object>());
	out.Set("colors", info[7].As<Napi::Object>());
	out.Set("indices", info[8].As<Napi::Object>());
	out.Set("animVertices", info[9].As<Napi::Object>());
	out.Set("animNormals", info[10].As<Napi::Object>());
	out.Set("boneIds", info[11].As<Napi::Object>());
	out.Set("boneWeights", info[12].As<Napi::Object>());
	out.Set("vaoId", info[13].As<Napi::Object>());
	out.Set("vboId", info[14].As<Napi::Object>());
	return out;
}

Napi::Object MeshToNAPIObject(napi_env env, Mesh object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("vertexCount", object.vertexCount);
	out.Set("triangleCount", object.triangleCount);
	out.Set("vertices", (int64_t)object.vertices);
	out.Set("texcoords", (int64_t)object.texcoords);
	out.Set("texcoords2", (int64_t)object.texcoords2);
	out.Set("normals", (int64_t)object.normals);
	out.Set("tangents", (int64_t)object.tangents);
	out.Set("colors", (int64_t)object.colors);
	out.Set("indices", (int64_t)object.indices);
	out.Set("animVertices", (int64_t)object.animVertices);
	out.Set("animNormals", (int64_t)object.animNormals);
	out.Set("boneIds", (int64_t)object.boneIds);
	out.Set("boneWeights", (int64_t)object.boneWeights);
	out.Set("vaoId", object.vaoId);
	out.Set("vboId", (int64_t)object.vboId);
	return out;
}

Shader ShaderFromNAPIObject(Napi::Object obj) {
	Shader out = Shader();
	out.id = obj.Get("id").As<Napi::Number>();
	out.locs = (int *)obj.Get("locs").As<Napi::Number>().Int64Value();
	return out;
}

Napi::Object BindShader(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("id", info[0].As<Napi::Object>());
	out.Set("locs", info[1].As<Napi::Object>());
	return out;
}

Napi::Object ShaderToNAPIObject(napi_env env, Shader object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("id", object.id);
	out.Set("locs", (int64_t)object.locs);
	return out;
}

MaterialMap MaterialMapFromNAPIObject(Napi::Object obj) {
	MaterialMap out = MaterialMap();
	out.texture = TextureFromNAPIObject(obj.Get("texture").As<Napi::Object>());
	out.color = ColorFromNAPIObject(obj.Get("color").As<Napi::Object>());
	out.value = obj.Get("value").As<Napi::Number>();
	return out;
}

Napi::Object BindMaterialMap(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("texture", info[0].As<Napi::Object>());
	out.Set("color", info[1].As<Napi::Object>());
	out.Set("value", info[2].As<Napi::Object>());
	return out;
}

Napi::Object MaterialMapToNAPIObject(napi_env env, MaterialMap object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("texture", TextureToNAPIObject(env, object.texture));
	out.Set("color", ColorToNAPIObject(env, object.color));
	out.Set("value", object.value);
	return out;
}

Material MaterialFromNAPIObject(Napi::Object obj) {
	Material out = Material();
	out.shader = ShaderFromNAPIObject(obj.Get("shader").As<Napi::Object>());
	out.maps = (MaterialMap *)obj.Get("maps").As<Napi::Number>().Int64Value();
	out.params[4] = obj.Get("params[4]").As<Napi::Number>();
	return out;
}

Napi::Object BindMaterial(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("shader", info[0].As<Napi::Object>());
	out.Set("maps", info[1].As<Napi::Object>());
	out.Set("params[4]", info[2].As<Napi::Object>());
	return out;
}

Napi::Object MaterialToNAPIObject(napi_env env, Material object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("shader", ShaderToNAPIObject(env, object.shader));
	out.Set("maps", (int64_t)object.maps);
	out.Set("params[4]", object.params[4]);
	return out;
}

Transform TransformFromNAPIObject(Napi::Object obj) {
	Transform out = Transform();
	out.translation = Vector3FromNAPIObject(obj.Get("translation").As<Napi::Object>());
	out.rotation = Vector4FromNAPIObject(obj.Get("rotation").As<Napi::Object>());
	out.scale = Vector3FromNAPIObject(obj.Get("scale").As<Napi::Object>());
	return out;
}

Napi::Object BindTransform(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("translation", info[0].As<Napi::Object>());
	out.Set("rotation", info[1].As<Napi::Object>());
	out.Set("scale", info[2].As<Napi::Object>());
	return out;
}

Napi::Object TransformToNAPIObject(napi_env env, Transform object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("translation", Vector3ToNAPIObject(env, object.translation));
	out.Set("rotation", Vector4ToNAPIObject(env, object.rotation));
	out.Set("scale", Vector3ToNAPIObject(env, object.scale));
	return out;
}

BoneInfo BoneInfoFromNAPIObject(Napi::Object obj) {
	BoneInfo out = BoneInfo();
	out.name[32] = obj.Get("name[32]").As<Napi::Number>().Uint32Value();
	out.parent = obj.Get("parent").As<Napi::Number>();
	return out;
}

Napi::Object BindBoneInfo(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("name[32]", info[0].As<Napi::Object>());
	out.Set("parent", info[1].As<Napi::Object>());
	return out;
}

Napi::Object BoneInfoToNAPIObject(napi_env env, BoneInfo object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("name[32]", object.name[32]);
	out.Set("parent", object.parent);
	return out;
}

Model ModelFromNAPIObject(Napi::Object obj) {
	Model out = Model();
	out.transform = MatrixFromNAPIObject(obj.Get("transform").As<Napi::Object>());
	out.meshCount = obj.Get("meshCount").As<Napi::Number>();
	out.materialCount = obj.Get("materialCount").As<Napi::Number>();
	out.meshes = (Mesh *)obj.Get("meshes").As<Napi::Number>().Int64Value();
	out.materials = (Material *)obj.Get("materials").As<Napi::Number>().Int64Value();
	out.meshMaterial = (int *)obj.Get("meshMaterial").As<Napi::Number>().Int64Value();
	out.boneCount = obj.Get("boneCount").As<Napi::Number>();
	out.bones = (BoneInfo *)obj.Get("bones").As<Napi::Number>().Int64Value();
	out.bindPose = (Transform *)obj.Get("bindPose").As<Napi::Number>().Int64Value();
	return out;
}

Napi::Object BindModel(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("transform", info[0].As<Napi::Object>());
	out.Set("meshCount", info[1].As<Napi::Object>());
	out.Set("materialCount", info[2].As<Napi::Object>());
	out.Set("meshes", info[3].As<Napi::Object>());
	out.Set("materials", info[4].As<Napi::Object>());
	out.Set("meshMaterial", info[5].As<Napi::Object>());
	out.Set("boneCount", info[6].As<Napi::Object>());
	out.Set("bones", info[7].As<Napi::Object>());
	out.Set("bindPose", info[8].As<Napi::Object>());
	return out;
}

Napi::Object ModelToNAPIObject(napi_env env, Model object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("transform", MatrixToNAPIObject(env, object.transform));
	out.Set("meshCount", object.meshCount);
	out.Set("materialCount", object.materialCount);
	out.Set("meshes", (int64_t)object.meshes);
	out.Set("materials", (int64_t)object.materials);
	out.Set("meshMaterial", (int64_t)object.meshMaterial);
	out.Set("boneCount", object.boneCount);
	out.Set("bones", (int64_t)object.bones);
	out.Set("bindPose", (int64_t)object.bindPose);
	return out;
}

ModelAnimation ModelAnimationFromNAPIObject(Napi::Object obj) {
	ModelAnimation out = ModelAnimation();
	out.boneCount = obj.Get("boneCount").As<Napi::Number>();
	out.frameCount = obj.Get("frameCount").As<Napi::Number>();
	out.bones = (BoneInfo *)obj.Get("bones").As<Napi::Number>().Int64Value();
	out.framePoses = (Transform **)obj.Get("framePoses").As<Napi::Number>().Int64Value();
	return out;
}

Napi::Object BindModelAnimation(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("boneCount", info[0].As<Napi::Object>());
	out.Set("frameCount", info[1].As<Napi::Object>());
	out.Set("bones", info[2].As<Napi::Object>());
	out.Set("framePoses", info[3].As<Napi::Object>());
	return out;
}

Napi::Object ModelAnimationToNAPIObject(napi_env env, ModelAnimation object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("boneCount", object.boneCount);
	out.Set("frameCount", object.frameCount);
	out.Set("bones", (int64_t)object.bones);
	out.Set("framePoses", (int64_t)object.framePoses);
	return out;
}

Ray RayFromNAPIObject(Napi::Object obj) {
	Ray out = Ray();
	out.position = Vector3FromNAPIObject(obj.Get("position").As<Napi::Object>());
	out.direction = Vector3FromNAPIObject(obj.Get("direction").As<Napi::Object>());
	return out;
}

Napi::Object BindRay(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("position", info[0].As<Napi::Object>());
	out.Set("direction", info[1].As<Napi::Object>());
	return out;
}

Napi::Object RayToNAPIObject(napi_env env, Ray object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("position", Vector3ToNAPIObject(env, object.position));
	out.Set("direction", Vector3ToNAPIObject(env, object.direction));
	return out;
}

RayCollision RayCollisionFromNAPIObject(Napi::Object obj) {
	RayCollision out = RayCollision();
	out.hit = obj.Get("hit").As<Napi::Boolean>();
	out.distance = obj.Get("distance").As<Napi::Number>();
	out.point = Vector3FromNAPIObject(obj.Get("point").As<Napi::Object>());
	out.normal = Vector3FromNAPIObject(obj.Get("normal").As<Napi::Object>());
	return out;
}

Napi::Object BindRayCollision(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("hit", info[0].As<Napi::Object>());
	out.Set("distance", info[1].As<Napi::Object>());
	out.Set("point", info[2].As<Napi::Object>());
	out.Set("normal", info[3].As<Napi::Object>());
	return out;
}

Napi::Object RayCollisionToNAPIObject(napi_env env, RayCollision object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("hit", object.hit);
	out.Set("distance", object.distance);
	out.Set("point", Vector3ToNAPIObject(env, object.point));
	out.Set("normal", Vector3ToNAPIObject(env, object.normal));
	return out;
}

BoundingBox BoundingBoxFromNAPIObject(Napi::Object obj) {
	BoundingBox out = BoundingBox();
	out.min = Vector3FromNAPIObject(obj.Get("min").As<Napi::Object>());
	out.max = Vector3FromNAPIObject(obj.Get("max").As<Napi::Object>());
	return out;
}

Napi::Object BindBoundingBox(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("min", info[0].As<Napi::Object>());
	out.Set("max", info[1].As<Napi::Object>());
	return out;
}

Napi::Object BoundingBoxToNAPIObject(napi_env env, BoundingBox object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("min", Vector3ToNAPIObject(env, object.min));
	out.Set("max", Vector3ToNAPIObject(env, object.max));
	return out;
}

Wave WaveFromNAPIObject(Napi::Object obj) {
	Wave out = Wave();
	out.frameCount = obj.Get("frameCount").As<Napi::Number>();
	out.sampleRate = obj.Get("sampleRate").As<Napi::Number>();
	out.sampleSize = obj.Get("sampleSize").As<Napi::Number>();
	out.channels = obj.Get("channels").As<Napi::Number>();
	out.data = (void *)obj.Get("data").As<Napi::Number>().Int64Value();
	return out;
}

Napi::Object BindWave(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("frameCount", info[0].As<Napi::Object>());
	out.Set("sampleRate", info[1].As<Napi::Object>());
	out.Set("sampleSize", info[2].As<Napi::Object>());
	out.Set("channels", info[3].As<Napi::Object>());
	out.Set("data", info[4].As<Napi::Object>());
	return out;
}

Napi::Object WaveToNAPIObject(napi_env env, Wave object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("frameCount", object.frameCount);
	out.Set("sampleRate", object.sampleRate);
	out.Set("sampleSize", object.sampleSize);
	out.Set("channels", object.channels);
	out.Set("data", (int64_t)object.data);
	return out;
}

AudioStream AudioStreamFromNAPIObject(Napi::Object obj) {
	AudioStream out = AudioStream();
	out.buffer = (rAudioBuffer *)obj.Get("buffer").As<Napi::Number>().Int64Value();
	out.sampleRate = obj.Get("sampleRate").As<Napi::Number>();
	out.sampleSize = obj.Get("sampleSize").As<Napi::Number>();
	out.channels = obj.Get("channels").As<Napi::Number>();
	return out;
}

Napi::Object BindAudioStream(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("buffer", info[0].As<Napi::Object>());
	out.Set("sampleRate", info[1].As<Napi::Object>());
	out.Set("sampleSize", info[2].As<Napi::Object>());
	out.Set("channels", info[3].As<Napi::Object>());
	return out;
}

Napi::Object AudioStreamToNAPIObject(napi_env env, AudioStream object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("buffer", (int64_t)object.buffer);
	out.Set("sampleRate", object.sampleRate);
	out.Set("sampleSize", object.sampleSize);
	out.Set("channels", object.channels);
	return out;
}

Sound SoundFromNAPIObject(Napi::Object obj) {
	Sound out = Sound();
	out.stream = AudioStreamFromNAPIObject(obj.Get("stream").As<Napi::Object>());
	out.frameCount = obj.Get("frameCount").As<Napi::Number>();
	return out;
}

Napi::Object BindSound(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("stream", info[0].As<Napi::Object>());
	out.Set("frameCount", info[1].As<Napi::Object>());
	return out;
}

Napi::Object SoundToNAPIObject(napi_env env, Sound object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("stream", AudioStreamToNAPIObject(env, object.stream));
	out.Set("frameCount", object.frameCount);
	return out;
}

Music MusicFromNAPIObject(Napi::Object obj) {
	Music out = Music();
	out.stream = AudioStreamFromNAPIObject(obj.Get("stream").As<Napi::Object>());
	out.frameCount = obj.Get("frameCount").As<Napi::Number>();
	out.looping = obj.Get("looping").As<Napi::Boolean>();
	out.ctxType = obj.Get("ctxType").As<Napi::Number>();
	out.ctxData = (void *)obj.Get("ctxData").As<Napi::Number>().Int64Value();
	return out;
}

Napi::Object BindMusic(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("stream", info[0].As<Napi::Object>());
	out.Set("frameCount", info[1].As<Napi::Object>());
	out.Set("looping", info[2].As<Napi::Object>());
	out.Set("ctxType", info[3].As<Napi::Object>());
	out.Set("ctxData", info[4].As<Napi::Object>());
	return out;
}

Napi::Object MusicToNAPIObject(napi_env env, Music object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("stream", AudioStreamToNAPIObject(env, object.stream));
	out.Set("frameCount", object.frameCount);
	out.Set("looping", object.looping);
	out.Set("ctxType", object.ctxType);
	out.Set("ctxData", (int64_t)object.ctxData);
	return out;
}

VrDeviceInfo VrDeviceInfoFromNAPIObject(Napi::Object obj) {
	VrDeviceInfo out = VrDeviceInfo();
	out.hResolution = obj.Get("hResolution").As<Napi::Number>();
	out.vResolution = obj.Get("vResolution").As<Napi::Number>();
	out.hScreenSize = obj.Get("hScreenSize").As<Napi::Number>();
	out.vScreenSize = obj.Get("vScreenSize").As<Napi::Number>();
	out.vScreenCenter = obj.Get("vScreenCenter").As<Napi::Number>();
	out.eyeToScreenDistance = obj.Get("eyeToScreenDistance").As<Napi::Number>();
	out.lensSeparationDistance = obj.Get("lensSeparationDistance").As<Napi::Number>();
	out.interpupillaryDistance = obj.Get("interpupillaryDistance").As<Napi::Number>();
	out.lensDistortionValues[4] = obj.Get("lensDistortionValues[4]").As<Napi::Number>();
	out.chromaAbCorrection[4] = obj.Get("chromaAbCorrection[4]").As<Napi::Number>();
	return out;
}

Napi::Object BindVrDeviceInfo(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("hResolution", info[0].As<Napi::Object>());
	out.Set("vResolution", info[1].As<Napi::Object>());
	out.Set("hScreenSize", info[2].As<Napi::Object>());
	out.Set("vScreenSize", info[3].As<Napi::Object>());
	out.Set("vScreenCenter", info[4].As<Napi::Object>());
	out.Set("eyeToScreenDistance", info[5].As<Napi::Object>());
	out.Set("lensSeparationDistance", info[6].As<Napi::Object>());
	out.Set("interpupillaryDistance", info[7].As<Napi::Object>());
	out.Set("lensDistortionValues[4]", info[8].As<Napi::Object>());
	out.Set("chromaAbCorrection[4]", info[9].As<Napi::Object>());
	return out;
}

Napi::Object VrDeviceInfoToNAPIObject(napi_env env, VrDeviceInfo object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("hResolution", object.hResolution);
	out.Set("vResolution", object.vResolution);
	out.Set("hScreenSize", object.hScreenSize);
	out.Set("vScreenSize", object.vScreenSize);
	out.Set("vScreenCenter", object.vScreenCenter);
	out.Set("eyeToScreenDistance", object.eyeToScreenDistance);
	out.Set("lensSeparationDistance", object.lensSeparationDistance);
	out.Set("interpupillaryDistance", object.interpupillaryDistance);
	out.Set("lensDistortionValues[4]", object.lensDistortionValues[4]);
	out.Set("chromaAbCorrection[4]", object.chromaAbCorrection[4]);
	return out;
}

VrStereoConfig VrStereoConfigFromNAPIObject(Napi::Object obj) {
	VrStereoConfig out = VrStereoConfig();
	out.projection[2] = MatrixFromNAPIObject(obj.Get("projection[2]").As<Napi::Object>());
	out.viewOffset[2] = MatrixFromNAPIObject(obj.Get("viewOffset[2]").As<Napi::Object>());
	out.leftLensCenter[2] = obj.Get("leftLensCenter[2]").As<Napi::Number>();
	out.rightLensCenter[2] = obj.Get("rightLensCenter[2]").As<Napi::Number>();
	out.leftScreenCenter[2] = obj.Get("leftScreenCenter[2]").As<Napi::Number>();
	out.rightScreenCenter[2] = obj.Get("rightScreenCenter[2]").As<Napi::Number>();
	out.scale[2] = obj.Get("scale[2]").As<Napi::Number>();
	out.scaleIn[2] = obj.Get("scaleIn[2]").As<Napi::Number>();
	return out;
}

Napi::Object BindVrStereoConfig(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("projection[2]", info[0].As<Napi::Object>());
	out.Set("viewOffset[2]", info[1].As<Napi::Object>());
	out.Set("leftLensCenter[2]", info[2].As<Napi::Object>());
	out.Set("rightLensCenter[2]", info[3].As<Napi::Object>());
	out.Set("leftScreenCenter[2]", info[4].As<Napi::Object>());
	out.Set("rightScreenCenter[2]", info[5].As<Napi::Object>());
	out.Set("scale[2]", info[6].As<Napi::Object>());
	out.Set("scaleIn[2]", info[7].As<Napi::Object>());
	return out;
}

Napi::Object VrStereoConfigToNAPIObject(napi_env env, VrStereoConfig object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("projection[2]", MatrixToNAPIObject(env, object.projection[2]));
	out.Set("viewOffset[2]", MatrixToNAPIObject(env, object.viewOffset[2]));
	out.Set("leftLensCenter[2]", object.leftLensCenter[2]);
	out.Set("rightLensCenter[2]", object.rightLensCenter[2]);
	out.Set("leftScreenCenter[2]", object.leftScreenCenter[2]);
	out.Set("rightScreenCenter[2]", object.rightScreenCenter[2]);
	out.Set("scale[2]", object.scale[2]);
	out.Set("scaleIn[2]", object.scaleIn[2]);
	return out;
}

void BindInitWindow(const Napi::CallbackInfo& info) {
	InitWindow(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::String>().Utf8Value().c_str()
	);
}

Napi::Boolean BindWindowShouldClose(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		WindowShouldClose(	)
);
}

void BindCloseWindow(const Napi::CallbackInfo& info) {
	CloseWindow(	);
}

Napi::Boolean BindIsWindowReady(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsWindowReady(	)
);
}

Napi::Boolean BindIsWindowFullscreen(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsWindowFullscreen(	)
);
}

Napi::Boolean BindIsWindowHidden(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsWindowHidden(	)
);
}

Napi::Boolean BindIsWindowMinimized(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsWindowMinimized(	)
);
}

Napi::Boolean BindIsWindowMaximized(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsWindowMaximized(	)
);
}

Napi::Boolean BindIsWindowFocused(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsWindowFocused(	)
);
}

Napi::Boolean BindIsWindowResized(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsWindowResized(	)
);
}

Napi::Boolean BindIsWindowState(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsWindowState(
		info[0].As<Napi::Number>()
	)
);
}

void BindSetWindowState(const Napi::CallbackInfo& info) {
	SetWindowState(
		info[0].As<Napi::Number>()
	);
}

void BindClearWindowState(const Napi::CallbackInfo& info) {
	ClearWindowState(
		info[0].As<Napi::Number>()
	);
}

void BindToggleFullscreen(const Napi::CallbackInfo& info) {
	ToggleFullscreen(	);
}

void BindMaximizeWindow(const Napi::CallbackInfo& info) {
	MaximizeWindow(	);
}

void BindMinimizeWindow(const Napi::CallbackInfo& info) {
	MinimizeWindow(	);
}

void BindRestoreWindow(const Napi::CallbackInfo& info) {
	RestoreWindow(	);
}

void BindSetWindowIcon(const Napi::CallbackInfo& info) {
	SetWindowIcon(
		ImageFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindSetWindowTitle(const Napi::CallbackInfo& info) {
	SetWindowTitle(
		info[0].As<Napi::String>().Utf8Value().c_str()
	);
}

void BindSetWindowPosition(const Napi::CallbackInfo& info) {
	SetWindowPosition(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>()
	);
}

void BindSetWindowMonitor(const Napi::CallbackInfo& info) {
	SetWindowMonitor(
		info[0].As<Napi::Number>()
	);
}

void BindSetWindowMinSize(const Napi::CallbackInfo& info) {
	SetWindowMinSize(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>()
	);
}

void BindSetWindowSize(const Napi::CallbackInfo& info) {
	SetWindowSize(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>()
	);
}

Napi::Number BindGetScreenWidth(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetScreenWidth(	)
);
}

Napi::Number BindGetScreenHeight(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetScreenHeight(	)
);
}

Napi::Number BindGetMonitorCount(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetMonitorCount(	)
);
}

Napi::Number BindGetCurrentMonitor(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetCurrentMonitor(	)
);
}

Napi::Object BindGetMonitorPosition(const Napi::CallbackInfo& info) {
	Vector2 obj = GetMonitorPosition(
		info[0].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("x", obj.x);
	out.Set("y", obj.y);
	return out;
}


Napi::Number BindGetMonitorWidth(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetMonitorWidth(
		info[0].As<Napi::Number>()
	)
);
}

Napi::Number BindGetMonitorHeight(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetMonitorHeight(
		info[0].As<Napi::Number>()
	)
);
}

Napi::Number BindGetMonitorPhysicalWidth(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetMonitorPhysicalWidth(
		info[0].As<Napi::Number>()
	)
);
}

Napi::Number BindGetMonitorPhysicalHeight(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetMonitorPhysicalHeight(
		info[0].As<Napi::Number>()
	)
);
}

Napi::Number BindGetMonitorRefreshRate(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetMonitorRefreshRate(
		info[0].As<Napi::Number>()
	)
);
}

Napi::Object BindGetWindowPosition(const Napi::CallbackInfo& info) {
	Vector2 obj = GetWindowPosition(	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("x", obj.x);
	out.Set("y", obj.y);
	return out;
}


Napi::Object BindGetWindowScaleDPI(const Napi::CallbackInfo& info) {
	Vector2 obj = GetWindowScaleDPI(	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("x", obj.x);
	out.Set("y", obj.y);
	return out;
}


Napi::String BindGetMonitorName(const Napi::CallbackInfo& info) {
	return Napi::String::New(info.Env(), 
		GetMonitorName(
		info[0].As<Napi::Number>()
	)
);
}

void BindSetClipboardText(const Napi::CallbackInfo& info) {
	SetClipboardText(
		info[0].As<Napi::String>().Utf8Value().c_str()
	);
}

Napi::String BindGetClipboardText(const Napi::CallbackInfo& info) {
	return Napi::String::New(info.Env(), 
		GetClipboardText(	)
);
}

void BindSwapScreenBuffer(const Napi::CallbackInfo& info) {
	SwapScreenBuffer(	);
}

void BindPollInputEvents(const Napi::CallbackInfo& info) {
	PollInputEvents(	);
}

void BindWaitTime(const Napi::CallbackInfo& info) {
	WaitTime(
		info[0].As<Napi::Number>()
	);
}

void BindShowCursor(const Napi::CallbackInfo& info) {
	ShowCursor(	);
}

void BindHideCursor(const Napi::CallbackInfo& info) {
	HideCursor(	);
}

Napi::Boolean BindIsCursorHidden(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsCursorHidden(	)
);
}

void BindEnableCursor(const Napi::CallbackInfo& info) {
	EnableCursor(	);
}

void BindDisableCursor(const Napi::CallbackInfo& info) {
	DisableCursor(	);
}

Napi::Boolean BindIsCursorOnScreen(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsCursorOnScreen(	)
);
}

void BindClearBackground(const Napi::CallbackInfo& info) {
	ClearBackground(
		ColorFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindBeginDrawing(const Napi::CallbackInfo& info) {
	BeginDrawing(	);
}

void BindEndDrawing(const Napi::CallbackInfo& info) {
	EndDrawing(	);
}

void BindBeginMode2D(const Napi::CallbackInfo& info) {
	BeginMode2D(
		Camera2DFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindEndMode2D(const Napi::CallbackInfo& info) {
	EndMode2D(	);
}

void BindBeginMode3D(const Napi::CallbackInfo& info) {
	BeginMode3D(
		Camera3DFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindEndMode3D(const Napi::CallbackInfo& info) {
	EndMode3D(	);
}

void BindBeginTextureMode(const Napi::CallbackInfo& info) {
	BeginTextureMode(
		RenderTextureFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindEndTextureMode(const Napi::CallbackInfo& info) {
	EndTextureMode(	);
}

void BindBeginShaderMode(const Napi::CallbackInfo& info) {
	BeginShaderMode(
		ShaderFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindEndShaderMode(const Napi::CallbackInfo& info) {
	EndShaderMode(	);
}

void BindBeginBlendMode(const Napi::CallbackInfo& info) {
	BeginBlendMode(
		info[0].As<Napi::Number>()
	);
}

void BindEndBlendMode(const Napi::CallbackInfo& info) {
	EndBlendMode(	);
}

void BindBeginScissorMode(const Napi::CallbackInfo& info) {
	BeginScissorMode(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>()
	);
}

void BindEndScissorMode(const Napi::CallbackInfo& info) {
	EndScissorMode(	);
}

void BindBeginVrStereoMode(const Napi::CallbackInfo& info) {
	BeginVrStereoMode(
		VrStereoConfigFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindEndVrStereoMode(const Napi::CallbackInfo& info) {
	EndVrStereoMode(	);
}

Napi::Object BindLoadVrStereoConfig(const Napi::CallbackInfo& info) {
	VrStereoConfig obj = LoadVrStereoConfig(
		VrDeviceInfoFromNAPIObject(info[0].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("projection[2]", MatrixToNAPIObject(info.Env(), obj.projection[2]));
	out.Set("viewOffset[2]", MatrixToNAPIObject(info.Env(), obj.viewOffset[2]));
	out.Set("leftLensCenter[2]", obj.leftLensCenter[2]);
	out.Set("rightLensCenter[2]", obj.rightLensCenter[2]);
	out.Set("leftScreenCenter[2]", obj.leftScreenCenter[2]);
	out.Set("rightScreenCenter[2]", obj.rightScreenCenter[2]);
	out.Set("scale[2]", obj.scale[2]);
	out.Set("scaleIn[2]", obj.scaleIn[2]);
	return out;
}


void BindUnloadVrStereoConfig(const Napi::CallbackInfo& info) {
	UnloadVrStereoConfig(
		VrStereoConfigFromNAPIObject(info[0].As<Napi::Object>())
	);
}

Napi::Object BindLoadShader(const Napi::CallbackInfo& info) {
	Shader obj = LoadShader(
		info[0].As<Napi::String>().Utf8Value().c_str(),
		info[1].As<Napi::String>().Utf8Value().c_str()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("id", obj.id);
	out.Set("locs", (int64_t)obj.locs);
	return out;
}


Napi::Object BindLoadShaderFromMemory(const Napi::CallbackInfo& info) {
	Shader obj = LoadShaderFromMemory(
		info[0].As<Napi::String>().Utf8Value().c_str(),
		info[1].As<Napi::String>().Utf8Value().c_str()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("id", obj.id);
	out.Set("locs", (int64_t)obj.locs);
	return out;
}


Napi::Number BindGetShaderLocation(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetShaderLocation(
		ShaderFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::Number BindGetShaderLocationAttrib(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetShaderLocationAttrib(
		ShaderFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::String>().Utf8Value().c_str()
	)
);
}

void BindSetShaderValue(const Napi::CallbackInfo& info) {
	SetShaderValue(
		ShaderFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		(const void *)info[2].As<Napi::Number>().Int64Value(),
		info[3].As<Napi::Number>()
	);
}

void BindSetShaderValueV(const Napi::CallbackInfo& info) {
	SetShaderValueV(
		ShaderFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		(const void *)info[2].As<Napi::Number>().Int64Value(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>()
	);
}

void BindSetShaderValueMatrix(const Napi::CallbackInfo& info) {
	SetShaderValueMatrix(
		ShaderFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		MatrixFromNAPIObject(info[2].As<Napi::Object>())
	);
}

void BindSetShaderValueTexture(const Napi::CallbackInfo& info) {
	SetShaderValueTexture(
		ShaderFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		TextureFromNAPIObject(info[2].As<Napi::Object>())
	);
}

void BindUnloadShader(const Napi::CallbackInfo& info) {
	UnloadShader(
		ShaderFromNAPIObject(info[0].As<Napi::Object>())
	);
}

Napi::Object BindGetMouseRay(const Napi::CallbackInfo& info) {
	Ray obj = GetMouseRay(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		Camera3DFromNAPIObject(info[1].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("position", Vector3ToNAPIObject(info.Env(), obj.position));
	out.Set("direction", Vector3ToNAPIObject(info.Env(), obj.direction));
	return out;
}


Napi::Object BindGetCameraMatrix(const Napi::CallbackInfo& info) {
	Matrix obj = GetCameraMatrix(
		Camera3DFromNAPIObject(info[0].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("m0", obj.m0);
	out.Set("m1", obj.m1);
	out.Set("m2", obj.m2);
	out.Set("m3", obj.m3);
	out.Set("m4", obj.m4);
	out.Set("m5", obj.m5);
	out.Set("m6", obj.m6);
	out.Set("m7", obj.m7);
	out.Set("m8", obj.m8);
	out.Set("m9", obj.m9);
	out.Set("m10", obj.m10);
	out.Set("m11", obj.m11);
	out.Set("m12", obj.m12);
	out.Set("m13", obj.m13);
	out.Set("m14", obj.m14);
	out.Set("m15", obj.m15);
	return out;
}


Napi::Object BindGetCameraMatrix2D(const Napi::CallbackInfo& info) {
	Matrix obj = GetCameraMatrix2D(
		Camera2DFromNAPIObject(info[0].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("m0", obj.m0);
	out.Set("m1", obj.m1);
	out.Set("m2", obj.m2);
	out.Set("m3", obj.m3);
	out.Set("m4", obj.m4);
	out.Set("m5", obj.m5);
	out.Set("m6", obj.m6);
	out.Set("m7", obj.m7);
	out.Set("m8", obj.m8);
	out.Set("m9", obj.m9);
	out.Set("m10", obj.m10);
	out.Set("m11", obj.m11);
	out.Set("m12", obj.m12);
	out.Set("m13", obj.m13);
	out.Set("m14", obj.m14);
	out.Set("m15", obj.m15);
	return out;
}


Napi::Object BindGetWorldToScreen(const Napi::CallbackInfo& info) {
	Vector2 obj = GetWorldToScreen(
		Vector3FromNAPIObject(info[0].As<Napi::Object>()),
		Camera3DFromNAPIObject(info[1].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("x", obj.x);
	out.Set("y", obj.y);
	return out;
}


Napi::Object BindGetWorldToScreenEx(const Napi::CallbackInfo& info) {
	Vector2 obj = GetWorldToScreenEx(
		Vector3FromNAPIObject(info[0].As<Napi::Object>()),
		Camera3DFromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("x", obj.x);
	out.Set("y", obj.y);
	return out;
}


Napi::Object BindGetWorldToScreen2D(const Napi::CallbackInfo& info) {
	Vector2 obj = GetWorldToScreen2D(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		Camera2DFromNAPIObject(info[1].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("x", obj.x);
	out.Set("y", obj.y);
	return out;
}


Napi::Object BindGetScreenToWorld2D(const Napi::CallbackInfo& info) {
	Vector2 obj = GetScreenToWorld2D(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		Camera2DFromNAPIObject(info[1].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("x", obj.x);
	out.Set("y", obj.y);
	return out;
}


void BindSetTargetFPS(const Napi::CallbackInfo& info) {
	SetTargetFPS(
		info[0].As<Napi::Number>()
	);
}

Napi::Number BindGetFPS(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetFPS(	)
);
}

Napi::Number BindGetFrameTime(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetFrameTime(	)
);
}

Napi::Number BindGetTime(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetTime(	)
);
}

Napi::Number BindGetRandomValue(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetRandomValue(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>()
	)
);
}

void BindSetRandomSeed(const Napi::CallbackInfo& info) {
	SetRandomSeed(
		info[0].As<Napi::Number>()
	);
}

void BindTakeScreenshot(const Napi::CallbackInfo& info) {
	TakeScreenshot(
		info[0].As<Napi::String>().Utf8Value().c_str()
	);
}

void BindSetConfigFlags(const Napi::CallbackInfo& info) {
	SetConfigFlags(
		info[0].As<Napi::Number>()
	);
}

void BindTraceLog(const Napi::CallbackInfo& info) {
	TraceLog(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::String>().Utf8Value().c_str()
	);
}

void BindSetTraceLogLevel(const Napi::CallbackInfo& info) {
	SetTraceLogLevel(
		info[0].As<Napi::Number>()
	);
}

void BindMemFree(const Napi::CallbackInfo& info) {
	MemFree(
		(void *)info[0].As<Napi::Number>().Int64Value()
	);
}

void BindUnloadFileData(const Napi::CallbackInfo& info) {
	UnloadFileData(
		(unsigned char *)info[0].As<Napi::Number>().Int64Value()
	);
}

Napi::Boolean BindSaveFileData(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		SaveFileData(
		info[0].As<Napi::String>().Utf8Value().c_str(),
		(void *)info[1].As<Napi::Number>().Int64Value(),
		info[2].As<Napi::Number>()
	)
);
}

Napi::String BindLoadFileText(const Napi::CallbackInfo& info) {
	return Napi::String::New(info.Env(), 
		LoadFileText(
		info[0].As<Napi::String>().Utf8Value().c_str()
	)
);
}

void BindUnloadFileText(const Napi::CallbackInfo& info) {
	UnloadFileText(
		(char *)info[0].As<Napi::Number>().Int64Value()
	);
}

Napi::Boolean BindSaveFileText(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		SaveFileText(
		info[0].As<Napi::String>().Utf8Value().c_str(),
		(char *)info[1].As<Napi::Number>().Int64Value()
	)
);
}

Napi::Boolean BindFileExists(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		FileExists(
		info[0].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::Boolean BindDirectoryExists(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		DirectoryExists(
		info[0].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::Boolean BindIsFileExtension(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsFileExtension(
		info[0].As<Napi::String>().Utf8Value().c_str(),
		info[1].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::String BindGetFileExtension(const Napi::CallbackInfo& info) {
	return Napi::String::New(info.Env(), 
		GetFileExtension(
		info[0].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::String BindGetFileName(const Napi::CallbackInfo& info) {
	return Napi::String::New(info.Env(), 
		GetFileName(
		info[0].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::String BindGetFileNameWithoutExt(const Napi::CallbackInfo& info) {
	return Napi::String::New(info.Env(), 
		GetFileNameWithoutExt(
		info[0].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::String BindGetDirectoryPath(const Napi::CallbackInfo& info) {
	return Napi::String::New(info.Env(), 
		GetDirectoryPath(
		info[0].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::String BindGetPrevDirectoryPath(const Napi::CallbackInfo& info) {
	return Napi::String::New(info.Env(), 
		GetPrevDirectoryPath(
		info[0].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::String BindGetWorkingDirectory(const Napi::CallbackInfo& info) {
	return Napi::String::New(info.Env(), 
		GetWorkingDirectory(	)
);
}

void BindClearDirectoryFiles(const Napi::CallbackInfo& info) {
	ClearDirectoryFiles(	);
}

Napi::Boolean BindChangeDirectory(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		ChangeDirectory(
		info[0].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::Boolean BindIsFileDropped(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsFileDropped(	)
);
}

void BindClearDroppedFiles(const Napi::CallbackInfo& info) {
	ClearDroppedFiles(	);
}

Napi::Number BindGetFileModTime(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetFileModTime(
		info[0].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::String BindEncodeDataBase64(const Napi::CallbackInfo& info) {
	return Napi::String::New(info.Env(), 
		EncodeDataBase64(
		(const unsigned char *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>(),
		(int *)info[2].As<Napi::Number>().Int64Value()
	)
);
}

Napi::Boolean BindSaveStorageValue(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		SaveStorageValue(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>()
	)
);
}

Napi::Number BindLoadStorageValue(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		LoadStorageValue(
		info[0].As<Napi::Number>()
	)
);
}

void BindOpenURL(const Napi::CallbackInfo& info) {
	OpenURL(
		info[0].As<Napi::String>().Utf8Value().c_str()
	);
}

Napi::Boolean BindIsKeyPressed(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsKeyPressed(
		info[0].As<Napi::Number>()
	)
);
}

Napi::Boolean BindIsKeyDown(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsKeyDown(
		info[0].As<Napi::Number>()
	)
);
}

Napi::Boolean BindIsKeyReleased(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsKeyReleased(
		info[0].As<Napi::Number>()
	)
);
}

Napi::Boolean BindIsKeyUp(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsKeyUp(
		info[0].As<Napi::Number>()
	)
);
}

void BindSetExitKey(const Napi::CallbackInfo& info) {
	SetExitKey(
		info[0].As<Napi::Number>()
	);
}

Napi::Number BindGetKeyPressed(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetKeyPressed(	)
);
}

Napi::Number BindGetCharPressed(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetCharPressed(	)
);
}

Napi::Boolean BindIsGamepadAvailable(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsGamepadAvailable(
		info[0].As<Napi::Number>()
	)
);
}

Napi::String BindGetGamepadName(const Napi::CallbackInfo& info) {
	return Napi::String::New(info.Env(), 
		GetGamepadName(
		info[0].As<Napi::Number>()
	)
);
}

Napi::Boolean BindIsGamepadButtonPressed(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsGamepadButtonPressed(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>()
	)
);
}

Napi::Boolean BindIsGamepadButtonDown(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsGamepadButtonDown(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>()
	)
);
}

Napi::Boolean BindIsGamepadButtonReleased(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsGamepadButtonReleased(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>()
	)
);
}

Napi::Boolean BindIsGamepadButtonUp(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsGamepadButtonUp(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>()
	)
);
}

Napi::Number BindGetGamepadButtonPressed(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetGamepadButtonPressed(	)
);
}

Napi::Number BindGetGamepadAxisCount(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetGamepadAxisCount(
		info[0].As<Napi::Number>()
	)
);
}

Napi::Number BindGetGamepadAxisMovement(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetGamepadAxisMovement(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>()
	)
);
}

Napi::Number BindSetGamepadMappings(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		SetGamepadMappings(
		info[0].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::Boolean BindIsMouseButtonPressed(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsMouseButtonPressed(
		info[0].As<Napi::Number>()
	)
);
}

Napi::Boolean BindIsMouseButtonDown(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsMouseButtonDown(
		info[0].As<Napi::Number>()
	)
);
}

Napi::Boolean BindIsMouseButtonReleased(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsMouseButtonReleased(
		info[0].As<Napi::Number>()
	)
);
}

Napi::Boolean BindIsMouseButtonUp(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsMouseButtonUp(
		info[0].As<Napi::Number>()
	)
);
}

Napi::Number BindGetMouseX(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetMouseX(	)
);
}

Napi::Number BindGetMouseY(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetMouseY(	)
);
}

Napi::Object BindGetMousePosition(const Napi::CallbackInfo& info) {
	Vector2 obj = GetMousePosition(	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("x", obj.x);
	out.Set("y", obj.y);
	return out;
}


Napi::Object BindGetMouseDelta(const Napi::CallbackInfo& info) {
	Vector2 obj = GetMouseDelta(	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("x", obj.x);
	out.Set("y", obj.y);
	return out;
}


void BindSetMousePosition(const Napi::CallbackInfo& info) {
	SetMousePosition(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>()
	);
}

void BindSetMouseOffset(const Napi::CallbackInfo& info) {
	SetMouseOffset(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>()
	);
}

void BindSetMouseScale(const Napi::CallbackInfo& info) {
	SetMouseScale(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>()
	);
}

Napi::Number BindGetMouseWheelMove(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetMouseWheelMove(	)
);
}

void BindSetMouseCursor(const Napi::CallbackInfo& info) {
	SetMouseCursor(
		info[0].As<Napi::Number>()
	);
}

Napi::Number BindGetTouchX(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetTouchX(	)
);
}

Napi::Number BindGetTouchY(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetTouchY(	)
);
}

Napi::Object BindGetTouchPosition(const Napi::CallbackInfo& info) {
	Vector2 obj = GetTouchPosition(
		info[0].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("x", obj.x);
	out.Set("y", obj.y);
	return out;
}


Napi::Number BindGetTouchPointId(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetTouchPointId(
		info[0].As<Napi::Number>()
	)
);
}

Napi::Number BindGetTouchPointCount(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetTouchPointCount(	)
);
}

void BindSetGesturesEnabled(const Napi::CallbackInfo& info) {
	SetGesturesEnabled(
		info[0].As<Napi::Number>()
	);
}

Napi::Boolean BindIsGestureDetected(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsGestureDetected(
		info[0].As<Napi::Number>()
	)
);
}

Napi::Number BindGetGestureDetected(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetGestureDetected(	)
);
}

Napi::Number BindGetGestureHoldDuration(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetGestureHoldDuration(	)
);
}

Napi::Object BindGetGestureDragVector(const Napi::CallbackInfo& info) {
	Vector2 obj = GetGestureDragVector(	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("x", obj.x);
	out.Set("y", obj.y);
	return out;
}


Napi::Number BindGetGestureDragAngle(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetGestureDragAngle(	)
);
}

Napi::Object BindGetGesturePinchVector(const Napi::CallbackInfo& info) {
	Vector2 obj = GetGesturePinchVector(	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("x", obj.x);
	out.Set("y", obj.y);
	return out;
}


Napi::Number BindGetGesturePinchAngle(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetGesturePinchAngle(	)
);
}

void BindSetCameraMode(const Napi::CallbackInfo& info) {
	SetCameraMode(
		Camera3DFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>()
	);
}

void BindUpdateCamera(const Napi::CallbackInfo& info) {
	UpdateCamera(
		(Camera *)info[0].As<Napi::Number>().Int64Value()
	);
}

void BindSetCameraPanControl(const Napi::CallbackInfo& info) {
	SetCameraPanControl(
		info[0].As<Napi::Number>()
	);
}

void BindSetCameraAltControl(const Napi::CallbackInfo& info) {
	SetCameraAltControl(
		info[0].As<Napi::Number>()
	);
}

void BindSetCameraSmoothZoomControl(const Napi::CallbackInfo& info) {
	SetCameraSmoothZoomControl(
		info[0].As<Napi::Number>()
	);
}

void BindSetCameraMoveControls(const Napi::CallbackInfo& info) {
	SetCameraMoveControls(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>(),
		info[5].As<Napi::Number>()
	);
}

void BindSetShapesTexture(const Napi::CallbackInfo& info) {
	SetShapesTexture(
		TextureFromNAPIObject(info[0].As<Napi::Object>()),
		RectangleFromNAPIObject(info[1].As<Napi::Object>())
	);
}

void BindDrawPixel(const Napi::CallbackInfo& info) {
	DrawPixel(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
}

void BindDrawPixelV(const Napi::CallbackInfo& info) {
	DrawPixelV(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		ColorFromNAPIObject(info[1].As<Napi::Object>())
	);
}

void BindDrawLine(const Napi::CallbackInfo& info) {
	DrawLine(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}

void BindDrawLineV(const Napi::CallbackInfo& info) {
	DrawLineV(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
}

void BindDrawLineEx(const Napi::CallbackInfo& info) {
	DrawLineEx(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::Number>(),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
}

void BindDrawLineBezier(const Napi::CallbackInfo& info) {
	DrawLineBezier(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::Number>(),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
}

void BindDrawLineBezierQuad(const Napi::CallbackInfo& info) {
	DrawLineBezierQuad(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		Vector2FromNAPIObject(info[2].As<Napi::Object>()),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}

void BindDrawLineBezierCubic(const Napi::CallbackInfo& info) {
	DrawLineBezierCubic(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		Vector2FromNAPIObject(info[2].As<Napi::Object>()),
		Vector2FromNAPIObject(info[3].As<Napi::Object>()),
		info[4].As<Napi::Number>(),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
}

void BindDrawLineStrip(const Napi::CallbackInfo& info) {
	DrawLineStrip(
		(Vector2 *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>(),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
}

void BindDrawCircle(const Napi::CallbackInfo& info) {
	DrawCircle(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
}

void BindDrawCircleSector(const Napi::CallbackInfo& info) {
	DrawCircleSector(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>(),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
}

void BindDrawCircleSectorLines(const Napi::CallbackInfo& info) {
	DrawCircleSectorLines(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>(),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
}

void BindDrawCircleGradient(const Napi::CallbackInfo& info) {
	DrawCircleGradient(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		ColorFromNAPIObject(info[3].As<Napi::Object>()),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}

void BindDrawCircleV(const Napi::CallbackInfo& info) {
	DrawCircleV(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
}

void BindDrawCircleLines(const Napi::CallbackInfo& info) {
	DrawCircleLines(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
}

void BindDrawEllipse(const Napi::CallbackInfo& info) {
	DrawEllipse(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}

void BindDrawEllipseLines(const Napi::CallbackInfo& info) {
	DrawEllipseLines(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}

void BindDrawRing(const Napi::CallbackInfo& info) {
	DrawRing(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>(),
		info[5].As<Napi::Number>(),
		ColorFromNAPIObject(info[6].As<Napi::Object>())
	);
}

void BindDrawRingLines(const Napi::CallbackInfo& info) {
	DrawRingLines(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>(),
		info[5].As<Napi::Number>(),
		ColorFromNAPIObject(info[6].As<Napi::Object>())
	);
}

void BindDrawRectangle(const Napi::CallbackInfo& info) {
	DrawRectangle(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}

void BindDrawRectangleV(const Napi::CallbackInfo& info) {
	DrawRectangleV(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
}

void BindDrawRectangleRec(const Napi::CallbackInfo& info) {
	DrawRectangleRec(
		RectangleFromNAPIObject(info[0].As<Napi::Object>()),
		ColorFromNAPIObject(info[1].As<Napi::Object>())
	);
}

void BindDrawRectanglePro(const Napi::CallbackInfo& info) {
	DrawRectanglePro(
		RectangleFromNAPIObject(info[0].As<Napi::Object>()),
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::Number>(),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
}

void BindDrawRectangleGradientV(const Napi::CallbackInfo& info) {
	DrawRectangleGradientV(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>()),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
}

void BindDrawRectangleGradientH(const Napi::CallbackInfo& info) {
	DrawRectangleGradientH(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>()),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
}

void BindDrawRectangleGradientEx(const Napi::CallbackInfo& info) {
	DrawRectangleGradientEx(
		RectangleFromNAPIObject(info[0].As<Napi::Object>()),
		ColorFromNAPIObject(info[1].As<Napi::Object>()),
		ColorFromNAPIObject(info[2].As<Napi::Object>()),
		ColorFromNAPIObject(info[3].As<Napi::Object>()),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}

void BindDrawRectangleLines(const Napi::CallbackInfo& info) {
	DrawRectangleLines(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}

void BindDrawRectangleLinesEx(const Napi::CallbackInfo& info) {
	DrawRectangleLinesEx(
		RectangleFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
}

void BindDrawRectangleRounded(const Napi::CallbackInfo& info) {
	DrawRectangleRounded(
		RectangleFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
}

void BindDrawRectangleRoundedLines(const Napi::CallbackInfo& info) {
	DrawRectangleRoundedLines(
		RectangleFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}

void BindDrawTriangle(const Napi::CallbackInfo& info) {
	DrawTriangle(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		Vector2FromNAPIObject(info[2].As<Napi::Object>()),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
}

void BindDrawTriangleLines(const Napi::CallbackInfo& info) {
	DrawTriangleLines(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		Vector2FromNAPIObject(info[2].As<Napi::Object>()),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
}

void BindDrawTriangleFan(const Napi::CallbackInfo& info) {
	DrawTriangleFan(
		(Vector2 *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>(),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
}

void BindDrawTriangleStrip(const Napi::CallbackInfo& info) {
	DrawTriangleStrip(
		(Vector2 *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>(),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
}

void BindDrawPoly(const Napi::CallbackInfo& info) {
	DrawPoly(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}

void BindDrawPolyLines(const Napi::CallbackInfo& info) {
	DrawPolyLines(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}

void BindDrawPolyLinesEx(const Napi::CallbackInfo& info) {
	DrawPolyLinesEx(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>(),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
}

Napi::Boolean BindCheckCollisionRecs(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		CheckCollisionRecs(
		RectangleFromNAPIObject(info[0].As<Napi::Object>()),
		RectangleFromNAPIObject(info[1].As<Napi::Object>())
	)
);
}

Napi::Boolean BindCheckCollisionCircles(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		CheckCollisionCircles(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		Vector2FromNAPIObject(info[2].As<Napi::Object>()),
		info[3].As<Napi::Number>()
	)
);
}

Napi::Boolean BindCheckCollisionCircleRec(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		CheckCollisionCircleRec(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		RectangleFromNAPIObject(info[2].As<Napi::Object>())
	)
);
}

Napi::Boolean BindCheckCollisionPointRec(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		CheckCollisionPointRec(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		RectangleFromNAPIObject(info[1].As<Napi::Object>())
	)
);
}

Napi::Boolean BindCheckCollisionPointCircle(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		CheckCollisionPointCircle(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::Number>()
	)
);
}

Napi::Boolean BindCheckCollisionPointTriangle(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		CheckCollisionPointTriangle(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		Vector2FromNAPIObject(info[2].As<Napi::Object>()),
		Vector2FromNAPIObject(info[3].As<Napi::Object>())
	)
);
}

Napi::Boolean BindCheckCollisionLines(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		CheckCollisionLines(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		Vector2FromNAPIObject(info[2].As<Napi::Object>()),
		Vector2FromNAPIObject(info[3].As<Napi::Object>()),
		(Vector2 *)info[4].As<Napi::Number>().Int64Value()
	)
);
}

Napi::Boolean BindCheckCollisionPointLine(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		CheckCollisionPointLine(
		Vector2FromNAPIObject(info[0].As<Napi::Object>()),
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		Vector2FromNAPIObject(info[2].As<Napi::Object>()),
		info[3].As<Napi::Number>()
	)
);
}

Napi::Object BindGetCollisionRec(const Napi::CallbackInfo& info) {
	Rectangle obj = GetCollisionRec(
		RectangleFromNAPIObject(info[0].As<Napi::Object>()),
		RectangleFromNAPIObject(info[1].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("x", obj.x);
	out.Set("y", obj.y);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	return out;
}


Napi::Object BindLoadImage(const Napi::CallbackInfo& info) {
	Image obj = LoadImage(
		info[0].As<Napi::String>().Utf8Value().c_str()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}


Napi::Object BindLoadImageRaw(const Napi::CallbackInfo& info) {
	Image obj = LoadImageRaw(
		info[0].As<Napi::String>().Utf8Value().c_str(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}


Napi::Object BindLoadImageAnim(const Napi::CallbackInfo& info) {
	Image obj = LoadImageAnim(
		info[0].As<Napi::String>().Utf8Value().c_str(),
		(int *)info[1].As<Napi::Number>().Int64Value()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}


Napi::Object BindLoadImageFromMemory(const Napi::CallbackInfo& info) {
	Image obj = LoadImageFromMemory(
		info[0].As<Napi::String>().Utf8Value().c_str(),
		(const unsigned char *)info[1].As<Napi::Number>().Int64Value(),
		info[2].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}


Napi::Object BindLoadImageFromTexture(const Napi::CallbackInfo& info) {
	Image obj = LoadImageFromTexture(
		TextureFromNAPIObject(info[0].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}


Napi::Object BindLoadImageFromScreen(const Napi::CallbackInfo& info) {
	Image obj = LoadImageFromScreen(	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}


void BindUnloadImage(const Napi::CallbackInfo& info) {
	UnloadImage(
		ImageFromNAPIObject(info[0].As<Napi::Object>())
	);
}

Napi::Boolean BindExportImage(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		ExportImage(
		ImageFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::Boolean BindExportImageAsCode(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		ExportImageAsCode(
		ImageFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::Object BindGenImageColor(const Napi::CallbackInfo& info) {
	Image obj = GenImageColor(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}


Napi::Object BindGenImageGradientV(const Napi::CallbackInfo& info) {
	Image obj = GenImageGradientV(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		ColorFromNAPIObject(info[2].As<Napi::Object>()),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}


Napi::Object BindGenImageGradientH(const Napi::CallbackInfo& info) {
	Image obj = GenImageGradientH(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		ColorFromNAPIObject(info[2].As<Napi::Object>()),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}


Napi::Object BindGenImageGradientRadial(const Napi::CallbackInfo& info) {
	Image obj = GenImageGradientRadial(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		ColorFromNAPIObject(info[3].As<Napi::Object>()),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}


Napi::Object BindGenImageChecked(const Napi::CallbackInfo& info) {
	Image obj = GenImageChecked(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>()),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}


Napi::Object BindGenImageWhiteNoise(const Napi::CallbackInfo& info) {
	Image obj = GenImageWhiteNoise(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}


Napi::Object BindGenImageCellular(const Napi::CallbackInfo& info) {
	Image obj = GenImageCellular(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}


Napi::Object BindImageCopy(const Napi::CallbackInfo& info) {
	Image obj = ImageCopy(
		ImageFromNAPIObject(info[0].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}


Napi::Object BindImageFromImage(const Napi::CallbackInfo& info) {
	Image obj = ImageFromImage(
		ImageFromNAPIObject(info[0].As<Napi::Object>()),
		RectangleFromNAPIObject(info[1].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}


Napi::Object BindImageText(const Napi::CallbackInfo& info) {
	Image obj = ImageText(
		info[0].As<Napi::String>().Utf8Value().c_str(),
		info[1].As<Napi::Number>(),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}


Napi::Object BindImageTextEx(const Napi::CallbackInfo& info) {
	Image obj = ImageTextEx(
		FontFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::String>().Utf8Value().c_str(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}


void BindImageFormat(const Napi::CallbackInfo& info) {
	ImageFormat(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>()
	);
}

void BindImageToPOT(const Napi::CallbackInfo& info) {
	ImageToPOT(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		ColorFromNAPIObject(info[1].As<Napi::Object>())
	);
}

void BindImageCrop(const Napi::CallbackInfo& info) {
	ImageCrop(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		RectangleFromNAPIObject(info[1].As<Napi::Object>())
	);
}

void BindImageAlphaCrop(const Napi::CallbackInfo& info) {
	ImageAlphaCrop(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>()
	);
}

void BindImageAlphaClear(const Napi::CallbackInfo& info) {
	ImageAlphaClear(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		ColorFromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::Number>()
	);
}

void BindImageAlphaMask(const Napi::CallbackInfo& info) {
	ImageAlphaMask(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		ImageFromNAPIObject(info[1].As<Napi::Object>())
	);
}

void BindImageAlphaPremultiply(const Napi::CallbackInfo& info) {
	ImageAlphaPremultiply(
		(Image *)info[0].As<Napi::Number>().Int64Value()
	);
}

void BindImageResize(const Napi::CallbackInfo& info) {
	ImageResize(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>()
	);
}

void BindImageResizeNN(const Napi::CallbackInfo& info) {
	ImageResizeNN(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>()
	);
}

void BindImageResizeCanvas(const Napi::CallbackInfo& info) {
	ImageResizeCanvas(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>(),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
}

void BindImageMipmaps(const Napi::CallbackInfo& info) {
	ImageMipmaps(
		(Image *)info[0].As<Napi::Number>().Int64Value()
	);
}

void BindImageDither(const Napi::CallbackInfo& info) {
	ImageDither(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>()
	);
}

void BindImageFlipVertical(const Napi::CallbackInfo& info) {
	ImageFlipVertical(
		(Image *)info[0].As<Napi::Number>().Int64Value()
	);
}

void BindImageFlipHorizontal(const Napi::CallbackInfo& info) {
	ImageFlipHorizontal(
		(Image *)info[0].As<Napi::Number>().Int64Value()
	);
}

void BindImageRotateCW(const Napi::CallbackInfo& info) {
	ImageRotateCW(
		(Image *)info[0].As<Napi::Number>().Int64Value()
	);
}

void BindImageRotateCCW(const Napi::CallbackInfo& info) {
	ImageRotateCCW(
		(Image *)info[0].As<Napi::Number>().Int64Value()
	);
}

void BindImageColorTint(const Napi::CallbackInfo& info) {
	ImageColorTint(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		ColorFromNAPIObject(info[1].As<Napi::Object>())
	);
}

void BindImageColorInvert(const Napi::CallbackInfo& info) {
	ImageColorInvert(
		(Image *)info[0].As<Napi::Number>().Int64Value()
	);
}

void BindImageColorGrayscale(const Napi::CallbackInfo& info) {
	ImageColorGrayscale(
		(Image *)info[0].As<Napi::Number>().Int64Value()
	);
}

void BindImageColorContrast(const Napi::CallbackInfo& info) {
	ImageColorContrast(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>()
	);
}

void BindImageColorBrightness(const Napi::CallbackInfo& info) {
	ImageColorBrightness(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>()
	);
}

void BindImageColorReplace(const Napi::CallbackInfo& info) {
	ImageColorReplace(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		ColorFromNAPIObject(info[1].As<Napi::Object>()),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
}

void BindUnloadImageColors(const Napi::CallbackInfo& info) {
	UnloadImageColors(
		(Color *)info[0].As<Napi::Number>().Int64Value()
	);
}

void BindUnloadImagePalette(const Napi::CallbackInfo& info) {
	UnloadImagePalette(
		(Color *)info[0].As<Napi::Number>().Int64Value()
	);
}

Napi::Object BindGetImageAlphaBorder(const Napi::CallbackInfo& info) {
	Rectangle obj = GetImageAlphaBorder(
		ImageFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("x", obj.x);
	out.Set("y", obj.y);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	return out;
}


Napi::Object BindGetImageColor(const Napi::CallbackInfo& info) {
	Color obj = GetImageColor(
		ImageFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("r", obj.r);
	out.Set("g", obj.g);
	out.Set("b", obj.b);
	out.Set("a", obj.a);
	return out;
}


void BindImageClearBackground(const Napi::CallbackInfo& info) {
	ImageClearBackground(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		ColorFromNAPIObject(info[1].As<Napi::Object>())
	);
}

void BindImageDrawPixel(const Napi::CallbackInfo& info) {
	ImageDrawPixel(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
}

void BindImageDrawPixelV(const Napi::CallbackInfo& info) {
	ImageDrawPixelV(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
}

void BindImageDrawLine(const Napi::CallbackInfo& info) {
	ImageDrawLine(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>(),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
}

void BindImageDrawLineV(const Napi::CallbackInfo& info) {
	ImageDrawLineV(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		Vector2FromNAPIObject(info[2].As<Napi::Object>()),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
}

void BindImageDrawCircle(const Napi::CallbackInfo& info) {
	ImageDrawCircle(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}

void BindImageDrawCircleV(const Napi::CallbackInfo& info) {
	ImageDrawCircleV(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::Number>(),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
}

void BindImageDrawRectangle(const Napi::CallbackInfo& info) {
	ImageDrawRectangle(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>(),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
}

void BindImageDrawRectangleV(const Napi::CallbackInfo& info) {
	ImageDrawRectangleV(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		Vector2FromNAPIObject(info[2].As<Napi::Object>()),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
}

void BindImageDrawRectangleRec(const Napi::CallbackInfo& info) {
	ImageDrawRectangleRec(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		RectangleFromNAPIObject(info[1].As<Napi::Object>()),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
}

void BindImageDrawRectangleLines(const Napi::CallbackInfo& info) {
	ImageDrawRectangleLines(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		RectangleFromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::Number>(),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
}

void BindImageDraw(const Napi::CallbackInfo& info) {
	ImageDraw(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		ImageFromNAPIObject(info[1].As<Napi::Object>()),
		RectangleFromNAPIObject(info[2].As<Napi::Object>()),
		RectangleFromNAPIObject(info[3].As<Napi::Object>()),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}

void BindImageDrawText(const Napi::CallbackInfo& info) {
	ImageDrawText(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::String>().Utf8Value().c_str(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>(),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
}

void BindImageDrawTextEx(const Napi::CallbackInfo& info) {
	ImageDrawTextEx(
		(Image *)info[0].As<Napi::Number>().Int64Value(),
		FontFromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::String>().Utf8Value().c_str(),
		Vector2FromNAPIObject(info[3].As<Napi::Object>()),
		info[4].As<Napi::Number>(),
		info[5].As<Napi::Number>(),
		ColorFromNAPIObject(info[6].As<Napi::Object>())
	);
}

Napi::Object BindLoadTexture(const Napi::CallbackInfo& info) {
	Texture obj = LoadTexture(
		info[0].As<Napi::String>().Utf8Value().c_str()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("id", obj.id);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}


Napi::Object BindLoadTextureFromImage(const Napi::CallbackInfo& info) {
	Texture obj = LoadTextureFromImage(
		ImageFromNAPIObject(info[0].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("id", obj.id);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}


Napi::Object BindLoadTextureCubemap(const Napi::CallbackInfo& info) {
	Texture obj = LoadTextureCubemap(
		ImageFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("id", obj.id);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}


Napi::Object BindLoadRenderTexture(const Napi::CallbackInfo& info) {
	RenderTexture obj = LoadRenderTexture(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("id", obj.id);
	out.Set("texture", TextureToNAPIObject(info.Env(), obj.texture));
	out.Set("depth", TextureToNAPIObject(info.Env(), obj.depth));
	return out;
}


void BindUnloadTexture(const Napi::CallbackInfo& info) {
	UnloadTexture(
		TextureFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindUnloadRenderTexture(const Napi::CallbackInfo& info) {
	UnloadRenderTexture(
		RenderTextureFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindUpdateTexture(const Napi::CallbackInfo& info) {
	UpdateTexture(
		TextureFromNAPIObject(info[0].As<Napi::Object>()),
		(const void *)info[1].As<Napi::Number>().Int64Value()
	);
}

void BindUpdateTextureRec(const Napi::CallbackInfo& info) {
	UpdateTextureRec(
		TextureFromNAPIObject(info[0].As<Napi::Object>()),
		RectangleFromNAPIObject(info[1].As<Napi::Object>()),
		(const void *)info[2].As<Napi::Number>().Int64Value()
	);
}

void BindGenTextureMipmaps(const Napi::CallbackInfo& info) {
	GenTextureMipmaps(
		(Texture2D *)info[0].As<Napi::Number>().Int64Value()
	);
}

void BindSetTextureFilter(const Napi::CallbackInfo& info) {
	SetTextureFilter(
		TextureFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>()
	);
}

void BindSetTextureWrap(const Napi::CallbackInfo& info) {
	SetTextureWrap(
		TextureFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>()
	);
}

void BindDrawTexture(const Napi::CallbackInfo& info) {
	DrawTexture(
		TextureFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
}

void BindDrawTextureV(const Napi::CallbackInfo& info) {
	DrawTextureV(
		TextureFromNAPIObject(info[0].As<Napi::Object>()),
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
}

void BindDrawTextureEx(const Napi::CallbackInfo& info) {
	DrawTextureEx(
		TextureFromNAPIObject(info[0].As<Napi::Object>()),
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}

void BindDrawTextureRec(const Napi::CallbackInfo& info) {
	DrawTextureRec(
		TextureFromNAPIObject(info[0].As<Napi::Object>()),
		RectangleFromNAPIObject(info[1].As<Napi::Object>()),
		Vector2FromNAPIObject(info[2].As<Napi::Object>()),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
}

void BindDrawTextureQuad(const Napi::CallbackInfo& info) {
	DrawTextureQuad(
		TextureFromNAPIObject(info[0].As<Napi::Object>()),
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		Vector2FromNAPIObject(info[2].As<Napi::Object>()),
		RectangleFromNAPIObject(info[3].As<Napi::Object>()),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}

void BindDrawTextureTiled(const Napi::CallbackInfo& info) {
	DrawTextureTiled(
		TextureFromNAPIObject(info[0].As<Napi::Object>()),
		RectangleFromNAPIObject(info[1].As<Napi::Object>()),
		RectangleFromNAPIObject(info[2].As<Napi::Object>()),
		Vector2FromNAPIObject(info[3].As<Napi::Object>()),
		info[4].As<Napi::Number>(),
		info[5].As<Napi::Number>(),
		ColorFromNAPIObject(info[6].As<Napi::Object>())
	);
}

void BindDrawTexturePro(const Napi::CallbackInfo& info) {
	DrawTexturePro(
		TextureFromNAPIObject(info[0].As<Napi::Object>()),
		RectangleFromNAPIObject(info[1].As<Napi::Object>()),
		RectangleFromNAPIObject(info[2].As<Napi::Object>()),
		Vector2FromNAPIObject(info[3].As<Napi::Object>()),
		info[4].As<Napi::Number>(),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
}

void BindDrawTextureNPatch(const Napi::CallbackInfo& info) {
	DrawTextureNPatch(
		TextureFromNAPIObject(info[0].As<Napi::Object>()),
		NPatchInfoFromNAPIObject(info[1].As<Napi::Object>()),
		RectangleFromNAPIObject(info[2].As<Napi::Object>()),
		Vector2FromNAPIObject(info[3].As<Napi::Object>()),
		info[4].As<Napi::Number>(),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
}

void BindDrawTexturePoly(const Napi::CallbackInfo& info) {
	DrawTexturePoly(
		TextureFromNAPIObject(info[0].As<Napi::Object>()),
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		(Vector2 *)info[2].As<Napi::Number>().Int64Value(),
		(Vector2 *)info[3].As<Napi::Number>().Int64Value(),
		info[4].As<Napi::Number>(),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
}

Napi::Object BindFade(const Napi::CallbackInfo& info) {
	Color obj = Fade(
		ColorFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("r", obj.r);
	out.Set("g", obj.g);
	out.Set("b", obj.b);
	out.Set("a", obj.a);
	return out;
}


Napi::Number BindColorToInt(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		ColorToInt(
		ColorFromNAPIObject(info[0].As<Napi::Object>())
	)
);
}

Napi::Object BindColorNormalize(const Napi::CallbackInfo& info) {
	Vector4 obj = ColorNormalize(
		ColorFromNAPIObject(info[0].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("x", obj.x);
	out.Set("y", obj.y);
	out.Set("z", obj.z);
	out.Set("w", obj.w);
	return out;
}


Napi::Object BindColorFromNormalized(const Napi::CallbackInfo& info) {
	Color obj = ColorFromNormalized(
		Vector4FromNAPIObject(info[0].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("r", obj.r);
	out.Set("g", obj.g);
	out.Set("b", obj.b);
	out.Set("a", obj.a);
	return out;
}


Napi::Object BindColorToHSV(const Napi::CallbackInfo& info) {
	Vector3 obj = ColorToHSV(
		ColorFromNAPIObject(info[0].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("x", obj.x);
	out.Set("y", obj.y);
	out.Set("z", obj.z);
	return out;
}


Napi::Object BindColorFromHSV(const Napi::CallbackInfo& info) {
	Color obj = ColorFromHSV(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("r", obj.r);
	out.Set("g", obj.g);
	out.Set("b", obj.b);
	out.Set("a", obj.a);
	return out;
}


Napi::Object BindColorAlpha(const Napi::CallbackInfo& info) {
	Color obj = ColorAlpha(
		ColorFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("r", obj.r);
	out.Set("g", obj.g);
	out.Set("b", obj.b);
	out.Set("a", obj.a);
	return out;
}


Napi::Object BindColorAlphaBlend(const Napi::CallbackInfo& info) {
	Color obj = ColorAlphaBlend(
		ColorFromNAPIObject(info[0].As<Napi::Object>()),
		ColorFromNAPIObject(info[1].As<Napi::Object>()),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("r", obj.r);
	out.Set("g", obj.g);
	out.Set("b", obj.b);
	out.Set("a", obj.a);
	return out;
}


Napi::Object BindGetColor(const Napi::CallbackInfo& info) {
	Color obj = GetColor(
		info[0].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("r", obj.r);
	out.Set("g", obj.g);
	out.Set("b", obj.b);
	out.Set("a", obj.a);
	return out;
}


Napi::Object BindGetPixelColor(const Napi::CallbackInfo& info) {
	Color obj = GetPixelColor(
		(void *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("r", obj.r);
	out.Set("g", obj.g);
	out.Set("b", obj.b);
	out.Set("a", obj.a);
	return out;
}


void BindSetPixelColor(const Napi::CallbackInfo& info) {
	SetPixelColor(
		(void *)info[0].As<Napi::Number>().Int64Value(),
		ColorFromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::Number>()
	);
}

Napi::Number BindGetPixelDataSize(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetPixelDataSize(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>()
	)
);
}

Napi::Object BindGetFontDefault(const Napi::CallbackInfo& info) {
	Font obj = GetFontDefault(	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("baseSize", obj.baseSize);
	out.Set("glyphCount", obj.glyphCount);
	out.Set("glyphPadding", obj.glyphPadding);
	out.Set("texture", TextureToNAPIObject(info.Env(), obj.texture));
	out.Set("recs", (int64_t)obj.recs);
	out.Set("glyphs", (int64_t)obj.glyphs);
	return out;
}


Napi::Object BindLoadFont(const Napi::CallbackInfo& info) {
	Font obj = LoadFont(
		info[0].As<Napi::String>().Utf8Value().c_str()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("baseSize", obj.baseSize);
	out.Set("glyphCount", obj.glyphCount);
	out.Set("glyphPadding", obj.glyphPadding);
	out.Set("texture", TextureToNAPIObject(info.Env(), obj.texture));
	out.Set("recs", (int64_t)obj.recs);
	out.Set("glyphs", (int64_t)obj.glyphs);
	return out;
}


Napi::Object BindLoadFontEx(const Napi::CallbackInfo& info) {
	Font obj = LoadFontEx(
		info[0].As<Napi::String>().Utf8Value().c_str(),
		info[1].As<Napi::Number>(),
		(int *)info[2].As<Napi::Number>().Int64Value(),
		info[3].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("baseSize", obj.baseSize);
	out.Set("glyphCount", obj.glyphCount);
	out.Set("glyphPadding", obj.glyphPadding);
	out.Set("texture", TextureToNAPIObject(info.Env(), obj.texture));
	out.Set("recs", (int64_t)obj.recs);
	out.Set("glyphs", (int64_t)obj.glyphs);
	return out;
}


Napi::Object BindLoadFontFromImage(const Napi::CallbackInfo& info) {
	Font obj = LoadFontFromImage(
		ImageFromNAPIObject(info[0].As<Napi::Object>()),
		ColorFromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("baseSize", obj.baseSize);
	out.Set("glyphCount", obj.glyphCount);
	out.Set("glyphPadding", obj.glyphPadding);
	out.Set("texture", TextureToNAPIObject(info.Env(), obj.texture));
	out.Set("recs", (int64_t)obj.recs);
	out.Set("glyphs", (int64_t)obj.glyphs);
	return out;
}


Napi::Object BindLoadFontFromMemory(const Napi::CallbackInfo& info) {
	Font obj = LoadFontFromMemory(
		info[0].As<Napi::String>().Utf8Value().c_str(),
		(const unsigned char *)info[1].As<Napi::Number>().Int64Value(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		(int *)info[4].As<Napi::Number>().Int64Value(),
		info[5].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("baseSize", obj.baseSize);
	out.Set("glyphCount", obj.glyphCount);
	out.Set("glyphPadding", obj.glyphPadding);
	out.Set("texture", TextureToNAPIObject(info.Env(), obj.texture));
	out.Set("recs", (int64_t)obj.recs);
	out.Set("glyphs", (int64_t)obj.glyphs);
	return out;
}


Napi::Object BindGenImageFontAtlas(const Napi::CallbackInfo& info) {
	Image obj = GenImageFontAtlas(
		(const GlyphInfo *)info[0].As<Napi::Number>().Int64Value(),
		(Rectangle **)info[1].As<Napi::Number>().Int64Value(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>(),
		info[5].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}


void BindUnloadFontData(const Napi::CallbackInfo& info) {
	UnloadFontData(
		(GlyphInfo *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>()
	);
}

void BindUnloadFont(const Napi::CallbackInfo& info) {
	UnloadFont(
		FontFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindDrawFPS(const Napi::CallbackInfo& info) {
	DrawFPS(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>()
	);
}

void BindDrawText(const Napi::CallbackInfo& info) {
	DrawText(
		info[0].As<Napi::String>().Utf8Value().c_str(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}

void BindDrawTextEx(const Napi::CallbackInfo& info) {
	DrawTextEx(
		FontFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::String>().Utf8Value().c_str(),
		Vector2FromNAPIObject(info[2].As<Napi::Object>()),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>(),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
}

void BindDrawTextPro(const Napi::CallbackInfo& info) {
	DrawTextPro(
		FontFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::String>().Utf8Value().c_str(),
		Vector2FromNAPIObject(info[2].As<Napi::Object>()),
		Vector2FromNAPIObject(info[3].As<Napi::Object>()),
		info[4].As<Napi::Number>(),
		info[5].As<Napi::Number>(),
		info[6].As<Napi::Number>(),
		ColorFromNAPIObject(info[7].As<Napi::Object>())
	);
}

void BindDrawTextCodepoint(const Napi::CallbackInfo& info) {
	DrawTextCodepoint(
		FontFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		Vector2FromNAPIObject(info[2].As<Napi::Object>()),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}

Napi::Number BindMeasureText(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		MeasureText(
		info[0].As<Napi::String>().Utf8Value().c_str(),
		info[1].As<Napi::Number>()
	)
);
}

Napi::Object BindMeasureTextEx(const Napi::CallbackInfo& info) {
	Vector2 obj = MeasureTextEx(
		FontFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::String>().Utf8Value().c_str(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("x", obj.x);
	out.Set("y", obj.y);
	return out;
}


Napi::Number BindGetGlyphIndex(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetGlyphIndex(
		FontFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>()
	)
);
}

Napi::Object BindGetGlyphInfo(const Napi::CallbackInfo& info) {
	GlyphInfo obj = GetGlyphInfo(
		FontFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("value", obj.value);
	out.Set("offsetX", obj.offsetX);
	out.Set("offsetY", obj.offsetY);
	out.Set("advanceX", obj.advanceX);
	out.Set("image", ImageToNAPIObject(info.Env(), obj.image));
	return out;
}


Napi::Object BindGetGlyphAtlasRec(const Napi::CallbackInfo& info) {
	Rectangle obj = GetGlyphAtlasRec(
		FontFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("x", obj.x);
	out.Set("y", obj.y);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	return out;
}


void BindUnloadCodepoints(const Napi::CallbackInfo& info) {
	UnloadCodepoints(
		(int *)info[0].As<Napi::Number>().Int64Value()
	);
}

Napi::Number BindGetCodepointCount(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetCodepointCount(
		info[0].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::Number BindGetCodepoint(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetCodepoint(
		info[0].As<Napi::String>().Utf8Value().c_str(),
		(int *)info[1].As<Napi::Number>().Int64Value()
	)
);
}

Napi::String BindCodepointToUTF8(const Napi::CallbackInfo& info) {
	return Napi::String::New(info.Env(), 
		CodepointToUTF8(
		info[0].As<Napi::Number>(),
		(int *)info[1].As<Napi::Number>().Int64Value()
	)
);
}

Napi::String BindTextCodepointsToUTF8(const Napi::CallbackInfo& info) {
	return Napi::String::New(info.Env(), 
		TextCodepointsToUTF8(
		(int *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>()
	)
);
}

Napi::Number BindTextCopy(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		TextCopy(
		(char *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::Boolean BindTextIsEqual(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		TextIsEqual(
		info[0].As<Napi::String>().Utf8Value().c_str(),
		info[1].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::Number BindTextLength(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		TextLength(
		info[0].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::String BindTextFormat(const Napi::CallbackInfo& info) {
	return Napi::String::New(info.Env(), 
		TextFormat(
		info[0].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::String BindTextSubtext(const Napi::CallbackInfo& info) {
	return Napi::String::New(info.Env(), 
		TextSubtext(
		info[0].As<Napi::String>().Utf8Value().c_str(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>()
	)
);
}

Napi::String BindTextReplace(const Napi::CallbackInfo& info) {
	return Napi::String::New(info.Env(), 
		TextReplace(
		(char *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::String>().Utf8Value().c_str(),
		info[2].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::String BindTextInsert(const Napi::CallbackInfo& info) {
	return Napi::String::New(info.Env(), 
		TextInsert(
		info[0].As<Napi::String>().Utf8Value().c_str(),
		info[1].As<Napi::String>().Utf8Value().c_str(),
		info[2].As<Napi::Number>()
	)
);
}

Napi::String BindTextJoin(const Napi::CallbackInfo& info) {
	return Napi::String::New(info.Env(), 
		TextJoin(
		(const char **)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::String>().Utf8Value().c_str()
	)
);
}

void BindTextAppend(const Napi::CallbackInfo& info) {
	TextAppend(
		(char *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::String>().Utf8Value().c_str(),
		(int *)info[2].As<Napi::Number>().Int64Value()
	);
}

Napi::Number BindTextFindIndex(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		TextFindIndex(
		info[0].As<Napi::String>().Utf8Value().c_str(),
		info[1].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::String BindTextToUpper(const Napi::CallbackInfo& info) {
	return Napi::String::New(info.Env(), 
		TextToUpper(
		info[0].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::String BindTextToLower(const Napi::CallbackInfo& info) {
	return Napi::String::New(info.Env(), 
		TextToLower(
		info[0].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::String BindTextToPascal(const Napi::CallbackInfo& info) {
	return Napi::String::New(info.Env(), 
		TextToPascal(
		info[0].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::Number BindTextToInteger(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		TextToInteger(
		info[0].As<Napi::String>().Utf8Value().c_str()
	)
);
}

void BindDrawLine3D(const Napi::CallbackInfo& info) {
	DrawLine3D(
		Vector3FromNAPIObject(info[0].As<Napi::Object>()),
		Vector3FromNAPIObject(info[1].As<Napi::Object>()),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
}

void BindDrawPoint3D(const Napi::CallbackInfo& info) {
	DrawPoint3D(
		Vector3FromNAPIObject(info[0].As<Napi::Object>()),
		ColorFromNAPIObject(info[1].As<Napi::Object>())
	);
}

void BindDrawCircle3D(const Napi::CallbackInfo& info) {
	DrawCircle3D(
		Vector3FromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		Vector3FromNAPIObject(info[2].As<Napi::Object>()),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}

void BindDrawTriangle3D(const Napi::CallbackInfo& info) {
	DrawTriangle3D(
		Vector3FromNAPIObject(info[0].As<Napi::Object>()),
		Vector3FromNAPIObject(info[1].As<Napi::Object>()),
		Vector3FromNAPIObject(info[2].As<Napi::Object>()),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
}

void BindDrawTriangleStrip3D(const Napi::CallbackInfo& info) {
	DrawTriangleStrip3D(
		(Vector3 *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>(),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
}

void BindDrawCube(const Napi::CallbackInfo& info) {
	DrawCube(
		Vector3FromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}

void BindDrawCubeV(const Napi::CallbackInfo& info) {
	DrawCubeV(
		Vector3FromNAPIObject(info[0].As<Napi::Object>()),
		Vector3FromNAPIObject(info[1].As<Napi::Object>()),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
}

void BindDrawCubeWires(const Napi::CallbackInfo& info) {
	DrawCubeWires(
		Vector3FromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}

void BindDrawCubeWiresV(const Napi::CallbackInfo& info) {
	DrawCubeWiresV(
		Vector3FromNAPIObject(info[0].As<Napi::Object>()),
		Vector3FromNAPIObject(info[1].As<Napi::Object>()),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
}

void BindDrawCubeTexture(const Napi::CallbackInfo& info) {
	DrawCubeTexture(
		TextureFromNAPIObject(info[0].As<Napi::Object>()),
		Vector3FromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>(),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
}

void BindDrawCubeTextureRec(const Napi::CallbackInfo& info) {
	DrawCubeTextureRec(
		TextureFromNAPIObject(info[0].As<Napi::Object>()),
		RectangleFromNAPIObject(info[1].As<Napi::Object>()),
		Vector3FromNAPIObject(info[2].As<Napi::Object>()),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>(),
		info[5].As<Napi::Number>(),
		ColorFromNAPIObject(info[6].As<Napi::Object>())
	);
}

void BindDrawSphere(const Napi::CallbackInfo& info) {
	DrawSphere(
		Vector3FromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
}

void BindDrawSphereEx(const Napi::CallbackInfo& info) {
	DrawSphereEx(
		Vector3FromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}

void BindDrawSphereWires(const Napi::CallbackInfo& info) {
	DrawSphereWires(
		Vector3FromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}

void BindDrawCylinder(const Napi::CallbackInfo& info) {
	DrawCylinder(
		Vector3FromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>(),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
}

void BindDrawCylinderEx(const Napi::CallbackInfo& info) {
	DrawCylinderEx(
		Vector3FromNAPIObject(info[0].As<Napi::Object>()),
		Vector3FromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>(),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
}

void BindDrawCylinderWires(const Napi::CallbackInfo& info) {
	DrawCylinderWires(
		Vector3FromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>(),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
}

void BindDrawCylinderWiresEx(const Napi::CallbackInfo& info) {
	DrawCylinderWiresEx(
		Vector3FromNAPIObject(info[0].As<Napi::Object>()),
		Vector3FromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>(),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
}

void BindDrawPlane(const Napi::CallbackInfo& info) {
	DrawPlane(
		Vector3FromNAPIObject(info[0].As<Napi::Object>()),
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
}

void BindDrawRay(const Napi::CallbackInfo& info) {
	DrawRay(
		RayFromNAPIObject(info[0].As<Napi::Object>()),
		ColorFromNAPIObject(info[1].As<Napi::Object>())
	);
}

void BindDrawGrid(const Napi::CallbackInfo& info) {
	DrawGrid(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>()
	);
}

Napi::Object BindLoadModel(const Napi::CallbackInfo& info) {
	Model obj = LoadModel(
		info[0].As<Napi::String>().Utf8Value().c_str()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("transform", MatrixToNAPIObject(info.Env(), obj.transform));
	out.Set("meshCount", obj.meshCount);
	out.Set("materialCount", obj.materialCount);
	out.Set("meshes", (int64_t)obj.meshes);
	out.Set("materials", (int64_t)obj.materials);
	out.Set("meshMaterial", (int64_t)obj.meshMaterial);
	out.Set("boneCount", obj.boneCount);
	out.Set("bones", (int64_t)obj.bones);
	out.Set("bindPose", (int64_t)obj.bindPose);
	return out;
}


Napi::Object BindLoadModelFromMesh(const Napi::CallbackInfo& info) {
	Model obj = LoadModelFromMesh(
		MeshFromNAPIObject(info[0].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("transform", MatrixToNAPIObject(info.Env(), obj.transform));
	out.Set("meshCount", obj.meshCount);
	out.Set("materialCount", obj.materialCount);
	out.Set("meshes", (int64_t)obj.meshes);
	out.Set("materials", (int64_t)obj.materials);
	out.Set("meshMaterial", (int64_t)obj.meshMaterial);
	out.Set("boneCount", obj.boneCount);
	out.Set("bones", (int64_t)obj.bones);
	out.Set("bindPose", (int64_t)obj.bindPose);
	return out;
}


void BindUnloadModel(const Napi::CallbackInfo& info) {
	UnloadModel(
		ModelFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindUnloadModelKeepMeshes(const Napi::CallbackInfo& info) {
	UnloadModelKeepMeshes(
		ModelFromNAPIObject(info[0].As<Napi::Object>())
	);
}

Napi::Object BindGetModelBoundingBox(const Napi::CallbackInfo& info) {
	BoundingBox obj = GetModelBoundingBox(
		ModelFromNAPIObject(info[0].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("min", Vector3ToNAPIObject(info.Env(), obj.min));
	out.Set("max", Vector3ToNAPIObject(info.Env(), obj.max));
	return out;
}


void BindDrawModel(const Napi::CallbackInfo& info) {
	DrawModel(
		ModelFromNAPIObject(info[0].As<Napi::Object>()),
		Vector3FromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::Number>(),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
}

void BindDrawModelEx(const Napi::CallbackInfo& info) {
	DrawModelEx(
		ModelFromNAPIObject(info[0].As<Napi::Object>()),
		Vector3FromNAPIObject(info[1].As<Napi::Object>()),
		Vector3FromNAPIObject(info[2].As<Napi::Object>()),
		info[3].As<Napi::Number>(),
		Vector3FromNAPIObject(info[4].As<Napi::Object>()),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
}

void BindDrawModelWires(const Napi::CallbackInfo& info) {
	DrawModelWires(
		ModelFromNAPIObject(info[0].As<Napi::Object>()),
		Vector3FromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::Number>(),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
}

void BindDrawModelWiresEx(const Napi::CallbackInfo& info) {
	DrawModelWiresEx(
		ModelFromNAPIObject(info[0].As<Napi::Object>()),
		Vector3FromNAPIObject(info[1].As<Napi::Object>()),
		Vector3FromNAPIObject(info[2].As<Napi::Object>()),
		info[3].As<Napi::Number>(),
		Vector3FromNAPIObject(info[4].As<Napi::Object>()),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
}

void BindDrawBoundingBox(const Napi::CallbackInfo& info) {
	DrawBoundingBox(
		BoundingBoxFromNAPIObject(info[0].As<Napi::Object>()),
		ColorFromNAPIObject(info[1].As<Napi::Object>())
	);
}

void BindDrawBillboard(const Napi::CallbackInfo& info) {
	DrawBillboard(
		Camera3DFromNAPIObject(info[0].As<Napi::Object>()),
		TextureFromNAPIObject(info[1].As<Napi::Object>()),
		Vector3FromNAPIObject(info[2].As<Napi::Object>()),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}

void BindDrawBillboardRec(const Napi::CallbackInfo& info) {
	DrawBillboardRec(
		Camera3DFromNAPIObject(info[0].As<Napi::Object>()),
		TextureFromNAPIObject(info[1].As<Napi::Object>()),
		RectangleFromNAPIObject(info[2].As<Napi::Object>()),
		Vector3FromNAPIObject(info[3].As<Napi::Object>()),
		Vector2FromNAPIObject(info[4].As<Napi::Object>()),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
}

void BindDrawBillboardPro(const Napi::CallbackInfo& info) {
	DrawBillboardPro(
		Camera3DFromNAPIObject(info[0].As<Napi::Object>()),
		TextureFromNAPIObject(info[1].As<Napi::Object>()),
		RectangleFromNAPIObject(info[2].As<Napi::Object>()),
		Vector3FromNAPIObject(info[3].As<Napi::Object>()),
		Vector3FromNAPIObject(info[4].As<Napi::Object>()),
		Vector2FromNAPIObject(info[5].As<Napi::Object>()),
		Vector2FromNAPIObject(info[6].As<Napi::Object>()),
		info[7].As<Napi::Number>(),
		ColorFromNAPIObject(info[8].As<Napi::Object>())
	);
}

void BindUploadMesh(const Napi::CallbackInfo& info) {
	UploadMesh(
		(Mesh *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Boolean>()
	);
}

void BindUpdateMeshBuffer(const Napi::CallbackInfo& info) {
	UpdateMeshBuffer(
		MeshFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		(void *)info[2].As<Napi::Number>().Int64Value(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>()
	);
}

void BindUnloadMesh(const Napi::CallbackInfo& info) {
	UnloadMesh(
		MeshFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindDrawMesh(const Napi::CallbackInfo& info) {
	DrawMesh(
		MeshFromNAPIObject(info[0].As<Napi::Object>()),
		MaterialFromNAPIObject(info[1].As<Napi::Object>()),
		MatrixFromNAPIObject(info[2].As<Napi::Object>())
	);
}

void BindDrawMeshInstanced(const Napi::CallbackInfo& info) {
	DrawMeshInstanced(
		MeshFromNAPIObject(info[0].As<Napi::Object>()),
		MaterialFromNAPIObject(info[1].As<Napi::Object>()),
		(Matrix *)info[2].As<Napi::Number>().Int64Value(),
		info[3].As<Napi::Number>()
	);
}

Napi::Boolean BindExportMesh(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		ExportMesh(
		MeshFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::Object BindGetMeshBoundingBox(const Napi::CallbackInfo& info) {
	BoundingBox obj = GetMeshBoundingBox(
		MeshFromNAPIObject(info[0].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("min", Vector3ToNAPIObject(info.Env(), obj.min));
	out.Set("max", Vector3ToNAPIObject(info.Env(), obj.max));
	return out;
}


void BindGenMeshTangents(const Napi::CallbackInfo& info) {
	GenMeshTangents(
		(Mesh *)info[0].As<Napi::Number>().Int64Value()
	);
}

void BindGenMeshBinormals(const Napi::CallbackInfo& info) {
	GenMeshBinormals(
		(Mesh *)info[0].As<Napi::Number>().Int64Value()
	);
}

Napi::Object BindGenMeshPoly(const Napi::CallbackInfo& info) {
	Mesh obj = GenMeshPoly(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("vertexCount", obj.vertexCount);
	out.Set("triangleCount", obj.triangleCount);
	out.Set("vertices", (int64_t)obj.vertices);
	out.Set("texcoords", (int64_t)obj.texcoords);
	out.Set("texcoords2", (int64_t)obj.texcoords2);
	out.Set("normals", (int64_t)obj.normals);
	out.Set("tangents", (int64_t)obj.tangents);
	out.Set("colors", (int64_t)obj.colors);
	out.Set("indices", (int64_t)obj.indices);
	out.Set("animVertices", (int64_t)obj.animVertices);
	out.Set("animNormals", (int64_t)obj.animNormals);
	out.Set("boneIds", (int64_t)obj.boneIds);
	out.Set("boneWeights", (int64_t)obj.boneWeights);
	out.Set("vaoId", obj.vaoId);
	out.Set("vboId", (int64_t)obj.vboId);
	return out;
}


Napi::Object BindGenMeshPlane(const Napi::CallbackInfo& info) {
	Mesh obj = GenMeshPlane(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("vertexCount", obj.vertexCount);
	out.Set("triangleCount", obj.triangleCount);
	out.Set("vertices", (int64_t)obj.vertices);
	out.Set("texcoords", (int64_t)obj.texcoords);
	out.Set("texcoords2", (int64_t)obj.texcoords2);
	out.Set("normals", (int64_t)obj.normals);
	out.Set("tangents", (int64_t)obj.tangents);
	out.Set("colors", (int64_t)obj.colors);
	out.Set("indices", (int64_t)obj.indices);
	out.Set("animVertices", (int64_t)obj.animVertices);
	out.Set("animNormals", (int64_t)obj.animNormals);
	out.Set("boneIds", (int64_t)obj.boneIds);
	out.Set("boneWeights", (int64_t)obj.boneWeights);
	out.Set("vaoId", obj.vaoId);
	out.Set("vboId", (int64_t)obj.vboId);
	return out;
}


Napi::Object BindGenMeshCube(const Napi::CallbackInfo& info) {
	Mesh obj = GenMeshCube(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("vertexCount", obj.vertexCount);
	out.Set("triangleCount", obj.triangleCount);
	out.Set("vertices", (int64_t)obj.vertices);
	out.Set("texcoords", (int64_t)obj.texcoords);
	out.Set("texcoords2", (int64_t)obj.texcoords2);
	out.Set("normals", (int64_t)obj.normals);
	out.Set("tangents", (int64_t)obj.tangents);
	out.Set("colors", (int64_t)obj.colors);
	out.Set("indices", (int64_t)obj.indices);
	out.Set("animVertices", (int64_t)obj.animVertices);
	out.Set("animNormals", (int64_t)obj.animNormals);
	out.Set("boneIds", (int64_t)obj.boneIds);
	out.Set("boneWeights", (int64_t)obj.boneWeights);
	out.Set("vaoId", obj.vaoId);
	out.Set("vboId", (int64_t)obj.vboId);
	return out;
}


Napi::Object BindGenMeshSphere(const Napi::CallbackInfo& info) {
	Mesh obj = GenMeshSphere(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("vertexCount", obj.vertexCount);
	out.Set("triangleCount", obj.triangleCount);
	out.Set("vertices", (int64_t)obj.vertices);
	out.Set("texcoords", (int64_t)obj.texcoords);
	out.Set("texcoords2", (int64_t)obj.texcoords2);
	out.Set("normals", (int64_t)obj.normals);
	out.Set("tangents", (int64_t)obj.tangents);
	out.Set("colors", (int64_t)obj.colors);
	out.Set("indices", (int64_t)obj.indices);
	out.Set("animVertices", (int64_t)obj.animVertices);
	out.Set("animNormals", (int64_t)obj.animNormals);
	out.Set("boneIds", (int64_t)obj.boneIds);
	out.Set("boneWeights", (int64_t)obj.boneWeights);
	out.Set("vaoId", obj.vaoId);
	out.Set("vboId", (int64_t)obj.vboId);
	return out;
}


Napi::Object BindGenMeshHemiSphere(const Napi::CallbackInfo& info) {
	Mesh obj = GenMeshHemiSphere(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("vertexCount", obj.vertexCount);
	out.Set("triangleCount", obj.triangleCount);
	out.Set("vertices", (int64_t)obj.vertices);
	out.Set("texcoords", (int64_t)obj.texcoords);
	out.Set("texcoords2", (int64_t)obj.texcoords2);
	out.Set("normals", (int64_t)obj.normals);
	out.Set("tangents", (int64_t)obj.tangents);
	out.Set("colors", (int64_t)obj.colors);
	out.Set("indices", (int64_t)obj.indices);
	out.Set("animVertices", (int64_t)obj.animVertices);
	out.Set("animNormals", (int64_t)obj.animNormals);
	out.Set("boneIds", (int64_t)obj.boneIds);
	out.Set("boneWeights", (int64_t)obj.boneWeights);
	out.Set("vaoId", obj.vaoId);
	out.Set("vboId", (int64_t)obj.vboId);
	return out;
}


Napi::Object BindGenMeshCylinder(const Napi::CallbackInfo& info) {
	Mesh obj = GenMeshCylinder(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("vertexCount", obj.vertexCount);
	out.Set("triangleCount", obj.triangleCount);
	out.Set("vertices", (int64_t)obj.vertices);
	out.Set("texcoords", (int64_t)obj.texcoords);
	out.Set("texcoords2", (int64_t)obj.texcoords2);
	out.Set("normals", (int64_t)obj.normals);
	out.Set("tangents", (int64_t)obj.tangents);
	out.Set("colors", (int64_t)obj.colors);
	out.Set("indices", (int64_t)obj.indices);
	out.Set("animVertices", (int64_t)obj.animVertices);
	out.Set("animNormals", (int64_t)obj.animNormals);
	out.Set("boneIds", (int64_t)obj.boneIds);
	out.Set("boneWeights", (int64_t)obj.boneWeights);
	out.Set("vaoId", obj.vaoId);
	out.Set("vboId", (int64_t)obj.vboId);
	return out;
}


Napi::Object BindGenMeshCone(const Napi::CallbackInfo& info) {
	Mesh obj = GenMeshCone(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("vertexCount", obj.vertexCount);
	out.Set("triangleCount", obj.triangleCount);
	out.Set("vertices", (int64_t)obj.vertices);
	out.Set("texcoords", (int64_t)obj.texcoords);
	out.Set("texcoords2", (int64_t)obj.texcoords2);
	out.Set("normals", (int64_t)obj.normals);
	out.Set("tangents", (int64_t)obj.tangents);
	out.Set("colors", (int64_t)obj.colors);
	out.Set("indices", (int64_t)obj.indices);
	out.Set("animVertices", (int64_t)obj.animVertices);
	out.Set("animNormals", (int64_t)obj.animNormals);
	out.Set("boneIds", (int64_t)obj.boneIds);
	out.Set("boneWeights", (int64_t)obj.boneWeights);
	out.Set("vaoId", obj.vaoId);
	out.Set("vboId", (int64_t)obj.vboId);
	return out;
}


Napi::Object BindGenMeshTorus(const Napi::CallbackInfo& info) {
	Mesh obj = GenMeshTorus(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("vertexCount", obj.vertexCount);
	out.Set("triangleCount", obj.triangleCount);
	out.Set("vertices", (int64_t)obj.vertices);
	out.Set("texcoords", (int64_t)obj.texcoords);
	out.Set("texcoords2", (int64_t)obj.texcoords2);
	out.Set("normals", (int64_t)obj.normals);
	out.Set("tangents", (int64_t)obj.tangents);
	out.Set("colors", (int64_t)obj.colors);
	out.Set("indices", (int64_t)obj.indices);
	out.Set("animVertices", (int64_t)obj.animVertices);
	out.Set("animNormals", (int64_t)obj.animNormals);
	out.Set("boneIds", (int64_t)obj.boneIds);
	out.Set("boneWeights", (int64_t)obj.boneWeights);
	out.Set("vaoId", obj.vaoId);
	out.Set("vboId", (int64_t)obj.vboId);
	return out;
}


Napi::Object BindGenMeshKnot(const Napi::CallbackInfo& info) {
	Mesh obj = GenMeshKnot(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("vertexCount", obj.vertexCount);
	out.Set("triangleCount", obj.triangleCount);
	out.Set("vertices", (int64_t)obj.vertices);
	out.Set("texcoords", (int64_t)obj.texcoords);
	out.Set("texcoords2", (int64_t)obj.texcoords2);
	out.Set("normals", (int64_t)obj.normals);
	out.Set("tangents", (int64_t)obj.tangents);
	out.Set("colors", (int64_t)obj.colors);
	out.Set("indices", (int64_t)obj.indices);
	out.Set("animVertices", (int64_t)obj.animVertices);
	out.Set("animNormals", (int64_t)obj.animNormals);
	out.Set("boneIds", (int64_t)obj.boneIds);
	out.Set("boneWeights", (int64_t)obj.boneWeights);
	out.Set("vaoId", obj.vaoId);
	out.Set("vboId", (int64_t)obj.vboId);
	return out;
}


Napi::Object BindGenMeshHeightmap(const Napi::CallbackInfo& info) {
	Mesh obj = GenMeshHeightmap(
		ImageFromNAPIObject(info[0].As<Napi::Object>()),
		Vector3FromNAPIObject(info[1].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("vertexCount", obj.vertexCount);
	out.Set("triangleCount", obj.triangleCount);
	out.Set("vertices", (int64_t)obj.vertices);
	out.Set("texcoords", (int64_t)obj.texcoords);
	out.Set("texcoords2", (int64_t)obj.texcoords2);
	out.Set("normals", (int64_t)obj.normals);
	out.Set("tangents", (int64_t)obj.tangents);
	out.Set("colors", (int64_t)obj.colors);
	out.Set("indices", (int64_t)obj.indices);
	out.Set("animVertices", (int64_t)obj.animVertices);
	out.Set("animNormals", (int64_t)obj.animNormals);
	out.Set("boneIds", (int64_t)obj.boneIds);
	out.Set("boneWeights", (int64_t)obj.boneWeights);
	out.Set("vaoId", obj.vaoId);
	out.Set("vboId", (int64_t)obj.vboId);
	return out;
}


Napi::Object BindGenMeshCubicmap(const Napi::CallbackInfo& info) {
	Mesh obj = GenMeshCubicmap(
		ImageFromNAPIObject(info[0].As<Napi::Object>()),
		Vector3FromNAPIObject(info[1].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("vertexCount", obj.vertexCount);
	out.Set("triangleCount", obj.triangleCount);
	out.Set("vertices", (int64_t)obj.vertices);
	out.Set("texcoords", (int64_t)obj.texcoords);
	out.Set("texcoords2", (int64_t)obj.texcoords2);
	out.Set("normals", (int64_t)obj.normals);
	out.Set("tangents", (int64_t)obj.tangents);
	out.Set("colors", (int64_t)obj.colors);
	out.Set("indices", (int64_t)obj.indices);
	out.Set("animVertices", (int64_t)obj.animVertices);
	out.Set("animNormals", (int64_t)obj.animNormals);
	out.Set("boneIds", (int64_t)obj.boneIds);
	out.Set("boneWeights", (int64_t)obj.boneWeights);
	out.Set("vaoId", obj.vaoId);
	out.Set("vboId", (int64_t)obj.vboId);
	return out;
}


Napi::Object BindLoadMaterialDefault(const Napi::CallbackInfo& info) {
	Material obj = LoadMaterialDefault(	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("shader", ShaderToNAPIObject(info.Env(), obj.shader));
	out.Set("maps", (int64_t)obj.maps);
	out.Set("params[4]", obj.params[4]);
	return out;
}


void BindUnloadMaterial(const Napi::CallbackInfo& info) {
	UnloadMaterial(
		MaterialFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindSetMaterialTexture(const Napi::CallbackInfo& info) {
	SetMaterialTexture(
		(Material *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>(),
		TextureFromNAPIObject(info[2].As<Napi::Object>())
	);
}

void BindSetModelMeshMaterial(const Napi::CallbackInfo& info) {
	SetModelMeshMaterial(
		(Model *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>()
	);
}

void BindUpdateModelAnimation(const Napi::CallbackInfo& info) {
	UpdateModelAnimation(
		ModelFromNAPIObject(info[0].As<Napi::Object>()),
		ModelAnimationFromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::Number>()
	);
}

void BindUnloadModelAnimation(const Napi::CallbackInfo& info) {
	UnloadModelAnimation(
		ModelAnimationFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindUnloadModelAnimations(const Napi::CallbackInfo& info) {
	UnloadModelAnimations(
		(ModelAnimation*)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>()
	);
}

Napi::Boolean BindIsModelAnimationValid(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsModelAnimationValid(
		ModelFromNAPIObject(info[0].As<Napi::Object>()),
		ModelAnimationFromNAPIObject(info[1].As<Napi::Object>())
	)
);
}

Napi::Boolean BindCheckCollisionSpheres(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		CheckCollisionSpheres(
		Vector3FromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		Vector3FromNAPIObject(info[2].As<Napi::Object>()),
		info[3].As<Napi::Number>()
	)
);
}

Napi::Boolean BindCheckCollisionBoxes(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		CheckCollisionBoxes(
		BoundingBoxFromNAPIObject(info[0].As<Napi::Object>()),
		BoundingBoxFromNAPIObject(info[1].As<Napi::Object>())
	)
);
}

Napi::Boolean BindCheckCollisionBoxSphere(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		CheckCollisionBoxSphere(
		BoundingBoxFromNAPIObject(info[0].As<Napi::Object>()),
		Vector3FromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::Number>()
	)
);
}

Napi::Object BindGetRayCollisionSphere(const Napi::CallbackInfo& info) {
	RayCollision obj = GetRayCollisionSphere(
		RayFromNAPIObject(info[0].As<Napi::Object>()),
		Vector3FromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("hit", obj.hit);
	out.Set("distance", obj.distance);
	out.Set("point", Vector3ToNAPIObject(info.Env(), obj.point));
	out.Set("normal", Vector3ToNAPIObject(info.Env(), obj.normal));
	return out;
}


Napi::Object BindGetRayCollisionBox(const Napi::CallbackInfo& info) {
	RayCollision obj = GetRayCollisionBox(
		RayFromNAPIObject(info[0].As<Napi::Object>()),
		BoundingBoxFromNAPIObject(info[1].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("hit", obj.hit);
	out.Set("distance", obj.distance);
	out.Set("point", Vector3ToNAPIObject(info.Env(), obj.point));
	out.Set("normal", Vector3ToNAPIObject(info.Env(), obj.normal));
	return out;
}


Napi::Object BindGetRayCollisionModel(const Napi::CallbackInfo& info) {
	RayCollision obj = GetRayCollisionModel(
		RayFromNAPIObject(info[0].As<Napi::Object>()),
		ModelFromNAPIObject(info[1].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("hit", obj.hit);
	out.Set("distance", obj.distance);
	out.Set("point", Vector3ToNAPIObject(info.Env(), obj.point));
	out.Set("normal", Vector3ToNAPIObject(info.Env(), obj.normal));
	return out;
}


Napi::Object BindGetRayCollisionMesh(const Napi::CallbackInfo& info) {
	RayCollision obj = GetRayCollisionMesh(
		RayFromNAPIObject(info[0].As<Napi::Object>()),
		MeshFromNAPIObject(info[1].As<Napi::Object>()),
		MatrixFromNAPIObject(info[2].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("hit", obj.hit);
	out.Set("distance", obj.distance);
	out.Set("point", Vector3ToNAPIObject(info.Env(), obj.point));
	out.Set("normal", Vector3ToNAPIObject(info.Env(), obj.normal));
	return out;
}


Napi::Object BindGetRayCollisionTriangle(const Napi::CallbackInfo& info) {
	RayCollision obj = GetRayCollisionTriangle(
		RayFromNAPIObject(info[0].As<Napi::Object>()),
		Vector3FromNAPIObject(info[1].As<Napi::Object>()),
		Vector3FromNAPIObject(info[2].As<Napi::Object>()),
		Vector3FromNAPIObject(info[3].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("hit", obj.hit);
	out.Set("distance", obj.distance);
	out.Set("point", Vector3ToNAPIObject(info.Env(), obj.point));
	out.Set("normal", Vector3ToNAPIObject(info.Env(), obj.normal));
	return out;
}


Napi::Object BindGetRayCollisionQuad(const Napi::CallbackInfo& info) {
	RayCollision obj = GetRayCollisionQuad(
		RayFromNAPIObject(info[0].As<Napi::Object>()),
		Vector3FromNAPIObject(info[1].As<Napi::Object>()),
		Vector3FromNAPIObject(info[2].As<Napi::Object>()),
		Vector3FromNAPIObject(info[3].As<Napi::Object>()),
		Vector3FromNAPIObject(info[4].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("hit", obj.hit);
	out.Set("distance", obj.distance);
	out.Set("point", Vector3ToNAPIObject(info.Env(), obj.point));
	out.Set("normal", Vector3ToNAPIObject(info.Env(), obj.normal));
	return out;
}


void BindInitAudioDevice(const Napi::CallbackInfo& info) {
	InitAudioDevice(	);
}

void BindCloseAudioDevice(const Napi::CallbackInfo& info) {
	CloseAudioDevice(	);
}

Napi::Boolean BindIsAudioDeviceReady(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsAudioDeviceReady(	)
);
}

void BindSetMasterVolume(const Napi::CallbackInfo& info) {
	SetMasterVolume(
		info[0].As<Napi::Number>()
	);
}

Napi::Object BindLoadWave(const Napi::CallbackInfo& info) {
	Wave obj = LoadWave(
		info[0].As<Napi::String>().Utf8Value().c_str()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("frameCount", obj.frameCount);
	out.Set("sampleRate", obj.sampleRate);
	out.Set("sampleSize", obj.sampleSize);
	out.Set("channels", obj.channels);
	out.Set("data", (int64_t)obj.data);
	return out;
}


Napi::Object BindLoadWaveFromMemory(const Napi::CallbackInfo& info) {
	Wave obj = LoadWaveFromMemory(
		info[0].As<Napi::String>().Utf8Value().c_str(),
		(const unsigned char *)info[1].As<Napi::Number>().Int64Value(),
		info[2].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("frameCount", obj.frameCount);
	out.Set("sampleRate", obj.sampleRate);
	out.Set("sampleSize", obj.sampleSize);
	out.Set("channels", obj.channels);
	out.Set("data", (int64_t)obj.data);
	return out;
}


Napi::Object BindLoadSound(const Napi::CallbackInfo& info) {
	Sound obj = LoadSound(
		info[0].As<Napi::String>().Utf8Value().c_str()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("stream", AudioStreamToNAPIObject(info.Env(), obj.stream));
	out.Set("frameCount", obj.frameCount);
	return out;
}


Napi::Object BindLoadSoundFromWave(const Napi::CallbackInfo& info) {
	Sound obj = LoadSoundFromWave(
		WaveFromNAPIObject(info[0].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("stream", AudioStreamToNAPIObject(info.Env(), obj.stream));
	out.Set("frameCount", obj.frameCount);
	return out;
}


void BindUpdateSound(const Napi::CallbackInfo& info) {
	UpdateSound(
		SoundFromNAPIObject(info[0].As<Napi::Object>()),
		(const void *)info[1].As<Napi::Number>().Int64Value(),
		info[2].As<Napi::Number>()
	);
}

void BindUnloadWave(const Napi::CallbackInfo& info) {
	UnloadWave(
		WaveFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindUnloadSound(const Napi::CallbackInfo& info) {
	UnloadSound(
		SoundFromNAPIObject(info[0].As<Napi::Object>())
	);
}

Napi::Boolean BindExportWave(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		ExportWave(
		WaveFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::String>().Utf8Value().c_str()
	)
);
}

Napi::Boolean BindExportWaveAsCode(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		ExportWaveAsCode(
		WaveFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::String>().Utf8Value().c_str()
	)
);
}

void BindPlaySound(const Napi::CallbackInfo& info) {
	PlaySound(
		SoundFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindStopSound(const Napi::CallbackInfo& info) {
	StopSound(
		SoundFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindPauseSound(const Napi::CallbackInfo& info) {
	PauseSound(
		SoundFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindResumeSound(const Napi::CallbackInfo& info) {
	ResumeSound(
		SoundFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindPlaySoundMulti(const Napi::CallbackInfo& info) {
	PlaySoundMulti(
		SoundFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindStopSoundMulti(const Napi::CallbackInfo& info) {
	StopSoundMulti(	);
}

Napi::Number BindGetSoundsPlaying(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetSoundsPlaying(	)
);
}

Napi::Boolean BindIsSoundPlaying(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsSoundPlaying(
		SoundFromNAPIObject(info[0].As<Napi::Object>())
	)
);
}

void BindSetSoundVolume(const Napi::CallbackInfo& info) {
	SetSoundVolume(
		SoundFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>()
	);
}

void BindSetSoundPitch(const Napi::CallbackInfo& info) {
	SetSoundPitch(
		SoundFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>()
	);
}

void BindWaveFormat(const Napi::CallbackInfo& info) {
	WaveFormat(
		(Wave *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>()
	);
}

Napi::Object BindWaveCopy(const Napi::CallbackInfo& info) {
	Wave obj = WaveCopy(
		WaveFromNAPIObject(info[0].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("frameCount", obj.frameCount);
	out.Set("sampleRate", obj.sampleRate);
	out.Set("sampleSize", obj.sampleSize);
	out.Set("channels", obj.channels);
	out.Set("data", (int64_t)obj.data);
	return out;
}


void BindWaveCrop(const Napi::CallbackInfo& info) {
	WaveCrop(
		(Wave *)info[0].As<Napi::Number>().Int64Value(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>()
	);
}

void BindUnloadWaveSamples(const Napi::CallbackInfo& info) {
	UnloadWaveSamples(
		(float *)info[0].As<Napi::Number>().Int64Value()
	);
}

Napi::Object BindLoadMusicStream(const Napi::CallbackInfo& info) {
	Music obj = LoadMusicStream(
		info[0].As<Napi::String>().Utf8Value().c_str()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("stream", AudioStreamToNAPIObject(info.Env(), obj.stream));
	out.Set("frameCount", obj.frameCount);
	out.Set("looping", obj.looping);
	out.Set("ctxType", obj.ctxType);
	out.Set("ctxData", (int64_t)obj.ctxData);
	return out;
}


Napi::Object BindLoadMusicStreamFromMemory(const Napi::CallbackInfo& info) {
	Music obj = LoadMusicStreamFromMemory(
		info[0].As<Napi::String>().Utf8Value().c_str(),
		(unsigned char *)info[1].As<Napi::Number>().Int64Value(),
		info[2].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("stream", AudioStreamToNAPIObject(info.Env(), obj.stream));
	out.Set("frameCount", obj.frameCount);
	out.Set("looping", obj.looping);
	out.Set("ctxType", obj.ctxType);
	out.Set("ctxData", (int64_t)obj.ctxData);
	return out;
}


void BindUnloadMusicStream(const Napi::CallbackInfo& info) {
	UnloadMusicStream(
		MusicFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindPlayMusicStream(const Napi::CallbackInfo& info) {
	PlayMusicStream(
		MusicFromNAPIObject(info[0].As<Napi::Object>())
	);
}

Napi::Boolean BindIsMusicStreamPlaying(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsMusicStreamPlaying(
		MusicFromNAPIObject(info[0].As<Napi::Object>())
	)
);
}

void BindUpdateMusicStream(const Napi::CallbackInfo& info) {
	UpdateMusicStream(
		MusicFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindStopMusicStream(const Napi::CallbackInfo& info) {
	StopMusicStream(
		MusicFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindPauseMusicStream(const Napi::CallbackInfo& info) {
	PauseMusicStream(
		MusicFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindResumeMusicStream(const Napi::CallbackInfo& info) {
	ResumeMusicStream(
		MusicFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindSeekMusicStream(const Napi::CallbackInfo& info) {
	SeekMusicStream(
		MusicFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>()
	);
}

void BindSetMusicVolume(const Napi::CallbackInfo& info) {
	SetMusicVolume(
		MusicFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>()
	);
}

void BindSetMusicPitch(const Napi::CallbackInfo& info) {
	SetMusicPitch(
		MusicFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>()
	);
}

Napi::Number BindGetMusicTimeLength(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetMusicTimeLength(
		MusicFromNAPIObject(info[0].As<Napi::Object>())
	)
);
}

Napi::Number BindGetMusicTimePlayed(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetMusicTimePlayed(
		MusicFromNAPIObject(info[0].As<Napi::Object>())
	)
);
}

Napi::Object BindLoadAudioStream(const Napi::CallbackInfo& info) {
	AudioStream obj = LoadAudioStream(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("buffer", (int64_t)obj.buffer);
	out.Set("sampleRate", obj.sampleRate);
	out.Set("sampleSize", obj.sampleSize);
	out.Set("channels", obj.channels);
	return out;
}


void BindUnloadAudioStream(const Napi::CallbackInfo& info) {
	UnloadAudioStream(
		AudioStreamFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindUpdateAudioStream(const Napi::CallbackInfo& info) {
	UpdateAudioStream(
		AudioStreamFromNAPIObject(info[0].As<Napi::Object>()),
		(const void *)info[1].As<Napi::Number>().Int64Value(),
		info[2].As<Napi::Number>()
	);
}

Napi::Boolean BindIsAudioStreamProcessed(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsAudioStreamProcessed(
		AudioStreamFromNAPIObject(info[0].As<Napi::Object>())
	)
);
}

void BindPlayAudioStream(const Napi::CallbackInfo& info) {
	PlayAudioStream(
		AudioStreamFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindPauseAudioStream(const Napi::CallbackInfo& info) {
	PauseAudioStream(
		AudioStreamFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindResumeAudioStream(const Napi::CallbackInfo& info) {
	ResumeAudioStream(
		AudioStreamFromNAPIObject(info[0].As<Napi::Object>())
	);
}

Napi::Boolean BindIsAudioStreamPlaying(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		IsAudioStreamPlaying(
		AudioStreamFromNAPIObject(info[0].As<Napi::Object>())
	)
);
}

void BindStopAudioStream(const Napi::CallbackInfo& info) {
	StopAudioStream(
		AudioStreamFromNAPIObject(info[0].As<Napi::Object>())
	);
}

void BindSetAudioStreamVolume(const Napi::CallbackInfo& info) {
	SetAudioStreamVolume(
		AudioStreamFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>()
	);
}

void BindSetAudioStreamPitch(const Napi::CallbackInfo& info) {
	SetAudioStreamPitch(
		AudioStreamFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>()
	);
}

void BindSetAudioStreamBufferSizeDefault(const Napi::CallbackInfo& info) {
	SetAudioStreamBufferSizeDefault(
		info[0].As<Napi::Number>()
	);
}

Napi::Object WrapImageFormat(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageFormat(
		&obj,
		info[1].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageToPOT(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageToPOT(
		&obj,
		ColorFromNAPIObject(info[1].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageCrop(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageCrop(
		&obj,
		RectangleFromNAPIObject(info[1].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageAlphaCrop(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageAlphaCrop(
		&obj,
		info[1].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageAlphaClear(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageAlphaClear(
		&obj,
		ColorFromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageAlphaMask(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageAlphaMask(
		&obj,
		ImageFromNAPIObject(info[1].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageAlphaPremultiply(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageAlphaPremultiply(
		&obj
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageResize(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageResize(
		&obj,
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageResizeNN(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageResizeNN(
		&obj,
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageResizeCanvas(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageResizeCanvas(
		&obj,
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>(),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageMipmaps(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageMipmaps(
		&obj
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageDither(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageDither(
		&obj,
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageFlipVertical(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageFlipVertical(
		&obj
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageFlipHorizontal(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageFlipHorizontal(
		&obj
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageRotateCW(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageRotateCW(
		&obj
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageRotateCCW(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageRotateCCW(
		&obj
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageColorTint(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageColorTint(
		&obj,
		ColorFromNAPIObject(info[1].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageColorInvert(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageColorInvert(
		&obj
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageColorGrayscale(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageColorGrayscale(
		&obj
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageColorContrast(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageColorContrast(
		&obj,
		info[1].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageColorBrightness(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageColorBrightness(
		&obj,
		info[1].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageColorReplace(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageColorReplace(
		&obj,
		ColorFromNAPIObject(info[1].As<Napi::Object>()),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageClearBackground(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageClearBackground(
		&obj,
		ColorFromNAPIObject(info[1].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageDrawPixel(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageDrawPixel(
		&obj,
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageDrawPixelV(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageDrawPixelV(
		&obj,
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageDrawLine(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageDrawLine(
		&obj,
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>(),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageDrawLineV(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageDrawLineV(
		&obj,
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		Vector2FromNAPIObject(info[2].As<Napi::Object>()),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageDrawCircle(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageDrawCircle(
		&obj,
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageDrawCircleV(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageDrawCircleV(
		&obj,
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::Number>(),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageDrawRectangle(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageDrawRectangle(
		&obj,
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>(),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageDrawRectangleV(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageDrawRectangleV(
		&obj,
		Vector2FromNAPIObject(info[1].As<Napi::Object>()),
		Vector2FromNAPIObject(info[2].As<Napi::Object>()),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageDrawRectangleRec(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageDrawRectangleRec(
		&obj,
		RectangleFromNAPIObject(info[1].As<Napi::Object>()),
		ColorFromNAPIObject(info[2].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageDrawRectangleLines(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageDrawRectangleLines(
		&obj,
		RectangleFromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::Number>(),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageDraw(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageDraw(
		&obj,
		ImageFromNAPIObject(info[1].As<Napi::Object>()),
		RectangleFromNAPIObject(info[2].As<Napi::Object>()),
		RectangleFromNAPIObject(info[3].As<Napi::Object>()),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageDrawText(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageDrawText(
		&obj,
		info[1].As<Napi::String>().Utf8Value().c_str(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		info[4].As<Napi::Number>(),
		ColorFromNAPIObject(info[5].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapImageDrawTextEx(const Napi::CallbackInfo& info) {
	Image obj = ImageFromNAPIObject(info[0].As<Napi::Object>());
	ImageDrawTextEx(
		&obj,
		FontFromNAPIObject(info[1].As<Napi::Object>()),
		info[2].As<Napi::String>().Utf8Value().c_str(),
		Vector2FromNAPIObject(info[3].As<Napi::Object>()),
		info[4].As<Napi::Number>(),
		info[5].As<Napi::Number>(),
		ColorFromNAPIObject(info[6].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("data", (int64_t)obj.data);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapGenTextureMipmaps(const Napi::CallbackInfo& info) {
	Texture obj = TextureFromNAPIObject(info[0].As<Napi::Object>());
	GenTextureMipmaps(
		&obj
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("id", obj.id);
	out.Set("width", obj.width);
	out.Set("height", obj.height);
	out.Set("mipmaps", obj.mipmaps);
	out.Set("format", obj.format);
	return out;
}

Napi::Object WrapUploadMesh(const Napi::CallbackInfo& info) {
	Mesh obj = MeshFromNAPIObject(info[0].As<Napi::Object>());
	UploadMesh(
		&obj,
		info[1].As<Napi::Boolean>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("vertexCount", obj.vertexCount);
	out.Set("triangleCount", obj.triangleCount);
	out.Set("vertices", (int64_t)obj.vertices);
	out.Set("texcoords", (int64_t)obj.texcoords);
	out.Set("texcoords2", (int64_t)obj.texcoords2);
	out.Set("normals", (int64_t)obj.normals);
	out.Set("tangents", (int64_t)obj.tangents);
	out.Set("colors", (int64_t)obj.colors);
	out.Set("indices", (int64_t)obj.indices);
	out.Set("animVertices", (int64_t)obj.animVertices);
	out.Set("animNormals", (int64_t)obj.animNormals);
	out.Set("boneIds", (int64_t)obj.boneIds);
	out.Set("boneWeights", (int64_t)obj.boneWeights);
	out.Set("vaoId", obj.vaoId);
	out.Set("vboId", (int64_t)obj.vboId);
	return out;
}

Napi::Object WrapGenMeshTangents(const Napi::CallbackInfo& info) {
	Mesh obj = MeshFromNAPIObject(info[0].As<Napi::Object>());
	GenMeshTangents(
		&obj
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("vertexCount", obj.vertexCount);
	out.Set("triangleCount", obj.triangleCount);
	out.Set("vertices", (int64_t)obj.vertices);
	out.Set("texcoords", (int64_t)obj.texcoords);
	out.Set("texcoords2", (int64_t)obj.texcoords2);
	out.Set("normals", (int64_t)obj.normals);
	out.Set("tangents", (int64_t)obj.tangents);
	out.Set("colors", (int64_t)obj.colors);
	out.Set("indices", (int64_t)obj.indices);
	out.Set("animVertices", (int64_t)obj.animVertices);
	out.Set("animNormals", (int64_t)obj.animNormals);
	out.Set("boneIds", (int64_t)obj.boneIds);
	out.Set("boneWeights", (int64_t)obj.boneWeights);
	out.Set("vaoId", obj.vaoId);
	out.Set("vboId", (int64_t)obj.vboId);
	return out;
}

Napi::Object WrapGenMeshBinormals(const Napi::CallbackInfo& info) {
	Mesh obj = MeshFromNAPIObject(info[0].As<Napi::Object>());
	GenMeshBinormals(
		&obj
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("vertexCount", obj.vertexCount);
	out.Set("triangleCount", obj.triangleCount);
	out.Set("vertices", (int64_t)obj.vertices);
	out.Set("texcoords", (int64_t)obj.texcoords);
	out.Set("texcoords2", (int64_t)obj.texcoords2);
	out.Set("normals", (int64_t)obj.normals);
	out.Set("tangents", (int64_t)obj.tangents);
	out.Set("colors", (int64_t)obj.colors);
	out.Set("indices", (int64_t)obj.indices);
	out.Set("animVertices", (int64_t)obj.animVertices);
	out.Set("animNormals", (int64_t)obj.animNormals);
	out.Set("boneIds", (int64_t)obj.boneIds);
	out.Set("boneWeights", (int64_t)obj.boneWeights);
	out.Set("vaoId", obj.vaoId);
	out.Set("vboId", (int64_t)obj.vboId);
	return out;
}

Napi::Object WrapSetMaterialTexture(const Napi::CallbackInfo& info) {
	Material obj = MaterialFromNAPIObject(info[0].As<Napi::Object>());
	SetMaterialTexture(
		&obj,
		info[1].As<Napi::Number>(),
		TextureFromNAPIObject(info[2].As<Napi::Object>())
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("shader", ShaderToNAPIObject(info.Env(), obj.shader));
	out.Set("maps", (int64_t)obj.maps);
	out.Set("params[4]", obj.params[4]);
	return out;
}

Napi::Object WrapSetModelMeshMaterial(const Napi::CallbackInfo& info) {
	Model obj = ModelFromNAPIObject(info[0].As<Napi::Object>());
	SetModelMeshMaterial(
		&obj,
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("transform", MatrixToNAPIObject(info.Env(), obj.transform));
	out.Set("meshCount", obj.meshCount);
	out.Set("materialCount", obj.materialCount);
	out.Set("meshes", (int64_t)obj.meshes);
	out.Set("materials", (int64_t)obj.materials);
	out.Set("meshMaterial", (int64_t)obj.meshMaterial);
	out.Set("boneCount", obj.boneCount);
	out.Set("bones", (int64_t)obj.bones);
	out.Set("bindPose", (int64_t)obj.bindPose);
	return out;
}

Napi::Object WrapWaveFormat(const Napi::CallbackInfo& info) {
	Wave obj = WaveFromNAPIObject(info[0].As<Napi::Object>());
	WaveFormat(
		&obj,
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("frameCount", obj.frameCount);
	out.Set("sampleRate", obj.sampleRate);
	out.Set("sampleSize", obj.sampleSize);
	out.Set("channels", obj.channels);
	out.Set("data", (int64_t)obj.data);
	return out;
}

Napi::Object WrapWaveCrop(const Napi::CallbackInfo& info) {
	Wave obj = WaveFromNAPIObject(info[0].As<Napi::Object>());
	WaveCrop(
		&obj,
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>()
	);
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("frameCount", obj.frameCount);
	out.Set("sampleRate", obj.sampleRate);
	out.Set("sampleSize", obj.sampleSize);
	out.Set("channels", obj.channels);
	out.Set("data", (int64_t)obj.data);
	return out;
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


Napi::Object Init(Napi::Env env, Napi::Object exports) {

	exports.Set(
		Napi::String::New(env, "Vector2"),
		Napi::Function::New(env, BindVector2)
	);

	exports.Set(
		Napi::String::New(env, "Vector3"),
		Napi::Function::New(env, BindVector3)
	);

	exports.Set(
		Napi::String::New(env, "Vector4"),
		Napi::Function::New(env, BindVector4)
	);

	exports.Set(
		Napi::String::New(env, "Matrix"),
		Napi::Function::New(env, BindMatrix)
	);

	exports.Set(
		Napi::String::New(env, "Color"),
		Napi::Function::New(env, BindColor)
	);

	exports.Set(
		Napi::String::New(env, "Rectangle"),
		Napi::Function::New(env, BindRectangle)
	);

	exports.Set(
		Napi::String::New(env, "NPatchInfo"),
		Napi::Function::New(env, BindNPatchInfo)
	);

	exports.Set(
		Napi::String::New(env, "Camera3D"),
		Napi::Function::New(env, BindCamera3D)
	);

	exports.Set(
		Napi::String::New(env, "Camera2D"),
		Napi::Function::New(env, BindCamera2D)
	);

	exports.Set(
		Napi::String::New(env, "Transform"),
		Napi::Function::New(env, BindTransform)
	);

	exports.Set(
		Napi::String::New(env, "Ray"),
		Napi::Function::New(env, BindRay)
	);

	exports.Set(
		Napi::String::New(env, "InitWindow"),
		Napi::Function::New(env, BindInitWindow)
	);

	exports.Set(
		Napi::String::New(env, "WindowShouldClose"),
		Napi::Function::New(env, BindWindowShouldClose)
	);

	exports.Set(
		Napi::String::New(env, "CloseWindow"),
		Napi::Function::New(env, BindCloseWindow)
	);

	exports.Set(
		Napi::String::New(env, "IsWindowReady"),
		Napi::Function::New(env, BindIsWindowReady)
	);

	exports.Set(
		Napi::String::New(env, "IsWindowFullscreen"),
		Napi::Function::New(env, BindIsWindowFullscreen)
	);

	exports.Set(
		Napi::String::New(env, "IsWindowHidden"),
		Napi::Function::New(env, BindIsWindowHidden)
	);

	exports.Set(
		Napi::String::New(env, "IsWindowMinimized"),
		Napi::Function::New(env, BindIsWindowMinimized)
	);

	exports.Set(
		Napi::String::New(env, "IsWindowMaximized"),
		Napi::Function::New(env, BindIsWindowMaximized)
	);

	exports.Set(
		Napi::String::New(env, "IsWindowFocused"),
		Napi::Function::New(env, BindIsWindowFocused)
	);

	exports.Set(
		Napi::String::New(env, "IsWindowResized"),
		Napi::Function::New(env, BindIsWindowResized)
	);

	exports.Set(
		Napi::String::New(env, "IsWindowState"),
		Napi::Function::New(env, BindIsWindowState)
	);

	exports.Set(
		Napi::String::New(env, "SetWindowState"),
		Napi::Function::New(env, BindSetWindowState)
	);

	exports.Set(
		Napi::String::New(env, "ClearWindowState"),
		Napi::Function::New(env, BindClearWindowState)
	);

	exports.Set(
		Napi::String::New(env, "ToggleFullscreen"),
		Napi::Function::New(env, BindToggleFullscreen)
	);

	exports.Set(
		Napi::String::New(env, "MaximizeWindow"),
		Napi::Function::New(env, BindMaximizeWindow)
	);

	exports.Set(
		Napi::String::New(env, "MinimizeWindow"),
		Napi::Function::New(env, BindMinimizeWindow)
	);

	exports.Set(
		Napi::String::New(env, "RestoreWindow"),
		Napi::Function::New(env, BindRestoreWindow)
	);

	exports.Set(
		Napi::String::New(env, "SetWindowIcon"),
		Napi::Function::New(env, BindSetWindowIcon)
	);

	exports.Set(
		Napi::String::New(env, "SetWindowTitle"),
		Napi::Function::New(env, BindSetWindowTitle)
	);

	exports.Set(
		Napi::String::New(env, "SetWindowPosition"),
		Napi::Function::New(env, BindSetWindowPosition)
	);

	exports.Set(
		Napi::String::New(env, "SetWindowMonitor"),
		Napi::Function::New(env, BindSetWindowMonitor)
	);

	exports.Set(
		Napi::String::New(env, "SetWindowMinSize"),
		Napi::Function::New(env, BindSetWindowMinSize)
	);

	exports.Set(
		Napi::String::New(env, "SetWindowSize"),
		Napi::Function::New(env, BindSetWindowSize)
	);

	exports.Set(
		Napi::String::New(env, "GetScreenWidth"),
		Napi::Function::New(env, BindGetScreenWidth)
	);

	exports.Set(
		Napi::String::New(env, "GetScreenHeight"),
		Napi::Function::New(env, BindGetScreenHeight)
	);

	exports.Set(
		Napi::String::New(env, "GetMonitorCount"),
		Napi::Function::New(env, BindGetMonitorCount)
	);

	exports.Set(
		Napi::String::New(env, "GetCurrentMonitor"),
		Napi::Function::New(env, BindGetCurrentMonitor)
	);

	exports.Set(
		Napi::String::New(env, "GetMonitorPosition"),
		Napi::Function::New(env, BindGetMonitorPosition)
	);

	exports.Set(
		Napi::String::New(env, "GetMonitorWidth"),
		Napi::Function::New(env, BindGetMonitorWidth)
	);

	exports.Set(
		Napi::String::New(env, "GetMonitorHeight"),
		Napi::Function::New(env, BindGetMonitorHeight)
	);

	exports.Set(
		Napi::String::New(env, "GetMonitorPhysicalWidth"),
		Napi::Function::New(env, BindGetMonitorPhysicalWidth)
	);

	exports.Set(
		Napi::String::New(env, "GetMonitorPhysicalHeight"),
		Napi::Function::New(env, BindGetMonitorPhysicalHeight)
	);

	exports.Set(
		Napi::String::New(env, "GetMonitorRefreshRate"),
		Napi::Function::New(env, BindGetMonitorRefreshRate)
	);

	exports.Set(
		Napi::String::New(env, "GetWindowPosition"),
		Napi::Function::New(env, BindGetWindowPosition)
	);

	exports.Set(
		Napi::String::New(env, "GetWindowScaleDPI"),
		Napi::Function::New(env, BindGetWindowScaleDPI)
	);

	exports.Set(
		Napi::String::New(env, "GetMonitorName"),
		Napi::Function::New(env, BindGetMonitorName)
	);

	exports.Set(
		Napi::String::New(env, "SetClipboardText"),
		Napi::Function::New(env, BindSetClipboardText)
	);

	exports.Set(
		Napi::String::New(env, "GetClipboardText"),
		Napi::Function::New(env, BindGetClipboardText)
	);

	exports.Set(
		Napi::String::New(env, "SwapScreenBuffer"),
		Napi::Function::New(env, BindSwapScreenBuffer)
	);

	exports.Set(
		Napi::String::New(env, "PollInputEvents"),
		Napi::Function::New(env, BindPollInputEvents)
	);

	exports.Set(
		Napi::String::New(env, "WaitTime"),
		Napi::Function::New(env, BindWaitTime)
	);

	exports.Set(
		Napi::String::New(env, "ShowCursor"),
		Napi::Function::New(env, BindShowCursor)
	);

	exports.Set(
		Napi::String::New(env, "HideCursor"),
		Napi::Function::New(env, BindHideCursor)
	);

	exports.Set(
		Napi::String::New(env, "IsCursorHidden"),
		Napi::Function::New(env, BindIsCursorHidden)
	);

	exports.Set(
		Napi::String::New(env, "EnableCursor"),
		Napi::Function::New(env, BindEnableCursor)
	);

	exports.Set(
		Napi::String::New(env, "DisableCursor"),
		Napi::Function::New(env, BindDisableCursor)
	);

	exports.Set(
		Napi::String::New(env, "IsCursorOnScreen"),
		Napi::Function::New(env, BindIsCursorOnScreen)
	);

	exports.Set(
		Napi::String::New(env, "ClearBackground"),
		Napi::Function::New(env, BindClearBackground)
	);

	exports.Set(
		Napi::String::New(env, "BeginDrawing"),
		Napi::Function::New(env, BindBeginDrawing)
	);

	exports.Set(
		Napi::String::New(env, "EndDrawing"),
		Napi::Function::New(env, BindEndDrawing)
	);

	exports.Set(
		Napi::String::New(env, "BeginMode2D"),
		Napi::Function::New(env, BindBeginMode2D)
	);

	exports.Set(
		Napi::String::New(env, "EndMode2D"),
		Napi::Function::New(env, BindEndMode2D)
	);

	exports.Set(
		Napi::String::New(env, "BeginMode3D"),
		Napi::Function::New(env, BindBeginMode3D)
	);

	exports.Set(
		Napi::String::New(env, "EndMode3D"),
		Napi::Function::New(env, BindEndMode3D)
	);

	exports.Set(
		Napi::String::New(env, "BeginTextureMode"),
		Napi::Function::New(env, BindBeginTextureMode)
	);

	exports.Set(
		Napi::String::New(env, "EndTextureMode"),
		Napi::Function::New(env, BindEndTextureMode)
	);

	exports.Set(
		Napi::String::New(env, "BeginShaderMode"),
		Napi::Function::New(env, BindBeginShaderMode)
	);

	exports.Set(
		Napi::String::New(env, "EndShaderMode"),
		Napi::Function::New(env, BindEndShaderMode)
	);

	exports.Set(
		Napi::String::New(env, "BeginBlendMode"),
		Napi::Function::New(env, BindBeginBlendMode)
	);

	exports.Set(
		Napi::String::New(env, "EndBlendMode"),
		Napi::Function::New(env, BindEndBlendMode)
	);

	exports.Set(
		Napi::String::New(env, "BeginScissorMode"),
		Napi::Function::New(env, BindBeginScissorMode)
	);

	exports.Set(
		Napi::String::New(env, "EndScissorMode"),
		Napi::Function::New(env, BindEndScissorMode)
	);

	exports.Set(
		Napi::String::New(env, "BeginVrStereoMode"),
		Napi::Function::New(env, BindBeginVrStereoMode)
	);

	exports.Set(
		Napi::String::New(env, "EndVrStereoMode"),
		Napi::Function::New(env, BindEndVrStereoMode)
	);

	exports.Set(
		Napi::String::New(env, "LoadVrStereoConfig"),
		Napi::Function::New(env, BindLoadVrStereoConfig)
	);

	exports.Set(
		Napi::String::New(env, "UnloadVrStereoConfig"),
		Napi::Function::New(env, BindUnloadVrStereoConfig)
	);

	exports.Set(
		Napi::String::New(env, "LoadShader"),
		Napi::Function::New(env, BindLoadShader)
	);

	exports.Set(
		Napi::String::New(env, "LoadShaderFromMemory"),
		Napi::Function::New(env, BindLoadShaderFromMemory)
	);

	exports.Set(
		Napi::String::New(env, "GetShaderLocation"),
		Napi::Function::New(env, BindGetShaderLocation)
	);

	exports.Set(
		Napi::String::New(env, "GetShaderLocationAttrib"),
		Napi::Function::New(env, BindGetShaderLocationAttrib)
	);

	exports.Set(
		Napi::String::New(env, "SetShaderValue"),
		Napi::Function::New(env, BindSetShaderValue)
	);

	exports.Set(
		Napi::String::New(env, "SetShaderValueV"),
		Napi::Function::New(env, BindSetShaderValueV)
	);

	exports.Set(
		Napi::String::New(env, "SetShaderValueMatrix"),
		Napi::Function::New(env, BindSetShaderValueMatrix)
	);

	exports.Set(
		Napi::String::New(env, "SetShaderValueTexture"),
		Napi::Function::New(env, BindSetShaderValueTexture)
	);

	exports.Set(
		Napi::String::New(env, "UnloadShader"),
		Napi::Function::New(env, BindUnloadShader)
	);

	exports.Set(
		Napi::String::New(env, "GetMouseRay"),
		Napi::Function::New(env, BindGetMouseRay)
	);

	exports.Set(
		Napi::String::New(env, "GetCameraMatrix"),
		Napi::Function::New(env, BindGetCameraMatrix)
	);

	exports.Set(
		Napi::String::New(env, "GetCameraMatrix2D"),
		Napi::Function::New(env, BindGetCameraMatrix2D)
	);

	exports.Set(
		Napi::String::New(env, "GetWorldToScreen"),
		Napi::Function::New(env, BindGetWorldToScreen)
	);

	exports.Set(
		Napi::String::New(env, "GetWorldToScreenEx"),
		Napi::Function::New(env, BindGetWorldToScreenEx)
	);

	exports.Set(
		Napi::String::New(env, "GetWorldToScreen2D"),
		Napi::Function::New(env, BindGetWorldToScreen2D)
	);

	exports.Set(
		Napi::String::New(env, "GetScreenToWorld2D"),
		Napi::Function::New(env, BindGetScreenToWorld2D)
	);

	exports.Set(
		Napi::String::New(env, "SetTargetFPS"),
		Napi::Function::New(env, BindSetTargetFPS)
	);

	exports.Set(
		Napi::String::New(env, "GetFPS"),
		Napi::Function::New(env, BindGetFPS)
	);

	exports.Set(
		Napi::String::New(env, "GetFrameTime"),
		Napi::Function::New(env, BindGetFrameTime)
	);

	exports.Set(
		Napi::String::New(env, "GetTime"),
		Napi::Function::New(env, BindGetTime)
	);

	exports.Set(
		Napi::String::New(env, "GetRandomValue"),
		Napi::Function::New(env, BindGetRandomValue)
	);

	exports.Set(
		Napi::String::New(env, "SetRandomSeed"),
		Napi::Function::New(env, BindSetRandomSeed)
	);

	exports.Set(
		Napi::String::New(env, "TakeScreenshot"),
		Napi::Function::New(env, BindTakeScreenshot)
	);

	exports.Set(
		Napi::String::New(env, "SetConfigFlags"),
		Napi::Function::New(env, BindSetConfigFlags)
	);

	exports.Set(
		Napi::String::New(env, "TraceLog"),
		Napi::Function::New(env, BindTraceLog)
	);

	exports.Set(
		Napi::String::New(env, "SetTraceLogLevel"),
		Napi::Function::New(env, BindSetTraceLogLevel)
	);

	exports.Set(
		Napi::String::New(env, "MemFree"),
		Napi::Function::New(env, BindMemFree)
	);

	exports.Set(
		Napi::String::New(env, "UnloadFileData"),
		Napi::Function::New(env, BindUnloadFileData)
	);

	exports.Set(
		Napi::String::New(env, "SaveFileData"),
		Napi::Function::New(env, BindSaveFileData)
	);

	exports.Set(
		Napi::String::New(env, "LoadFileText"),
		Napi::Function::New(env, BindLoadFileText)
	);

	exports.Set(
		Napi::String::New(env, "UnloadFileText"),
		Napi::Function::New(env, BindUnloadFileText)
	);

	exports.Set(
		Napi::String::New(env, "SaveFileText"),
		Napi::Function::New(env, BindSaveFileText)
	);

	exports.Set(
		Napi::String::New(env, "FileExists"),
		Napi::Function::New(env, BindFileExists)
	);

	exports.Set(
		Napi::String::New(env, "DirectoryExists"),
		Napi::Function::New(env, BindDirectoryExists)
	);

	exports.Set(
		Napi::String::New(env, "IsFileExtension"),
		Napi::Function::New(env, BindIsFileExtension)
	);

	exports.Set(
		Napi::String::New(env, "GetFileExtension"),
		Napi::Function::New(env, BindGetFileExtension)
	);

	exports.Set(
		Napi::String::New(env, "GetFileName"),
		Napi::Function::New(env, BindGetFileName)
	);

	exports.Set(
		Napi::String::New(env, "GetFileNameWithoutExt"),
		Napi::Function::New(env, BindGetFileNameWithoutExt)
	);

	exports.Set(
		Napi::String::New(env, "GetDirectoryPath"),
		Napi::Function::New(env, BindGetDirectoryPath)
	);

	exports.Set(
		Napi::String::New(env, "GetPrevDirectoryPath"),
		Napi::Function::New(env, BindGetPrevDirectoryPath)
	);

	exports.Set(
		Napi::String::New(env, "GetWorkingDirectory"),
		Napi::Function::New(env, BindGetWorkingDirectory)
	);

	exports.Set(
		Napi::String::New(env, "ClearDirectoryFiles"),
		Napi::Function::New(env, BindClearDirectoryFiles)
	);

	exports.Set(
		Napi::String::New(env, "ChangeDirectory"),
		Napi::Function::New(env, BindChangeDirectory)
	);

	exports.Set(
		Napi::String::New(env, "IsFileDropped"),
		Napi::Function::New(env, BindIsFileDropped)
	);

	exports.Set(
		Napi::String::New(env, "ClearDroppedFiles"),
		Napi::Function::New(env, BindClearDroppedFiles)
	);

	exports.Set(
		Napi::String::New(env, "GetFileModTime"),
		Napi::Function::New(env, BindGetFileModTime)
	);

	exports.Set(
		Napi::String::New(env, "EncodeDataBase64"),
		Napi::Function::New(env, BindEncodeDataBase64)
	);

	exports.Set(
		Napi::String::New(env, "SaveStorageValue"),
		Napi::Function::New(env, BindSaveStorageValue)
	);

	exports.Set(
		Napi::String::New(env, "LoadStorageValue"),
		Napi::Function::New(env, BindLoadStorageValue)
	);

	exports.Set(
		Napi::String::New(env, "OpenURL"),
		Napi::Function::New(env, BindOpenURL)
	);

	exports.Set(
		Napi::String::New(env, "IsKeyPressed"),
		Napi::Function::New(env, BindIsKeyPressed)
	);

	exports.Set(
		Napi::String::New(env, "IsKeyDown"),
		Napi::Function::New(env, BindIsKeyDown)
	);

	exports.Set(
		Napi::String::New(env, "IsKeyReleased"),
		Napi::Function::New(env, BindIsKeyReleased)
	);

	exports.Set(
		Napi::String::New(env, "IsKeyUp"),
		Napi::Function::New(env, BindIsKeyUp)
	);

	exports.Set(
		Napi::String::New(env, "SetExitKey"),
		Napi::Function::New(env, BindSetExitKey)
	);

	exports.Set(
		Napi::String::New(env, "GetKeyPressed"),
		Napi::Function::New(env, BindGetKeyPressed)
	);

	exports.Set(
		Napi::String::New(env, "GetCharPressed"),
		Napi::Function::New(env, BindGetCharPressed)
	);

	exports.Set(
		Napi::String::New(env, "IsGamepadAvailable"),
		Napi::Function::New(env, BindIsGamepadAvailable)
	);

	exports.Set(
		Napi::String::New(env, "GetGamepadName"),
		Napi::Function::New(env, BindGetGamepadName)
	);

	exports.Set(
		Napi::String::New(env, "IsGamepadButtonPressed"),
		Napi::Function::New(env, BindIsGamepadButtonPressed)
	);

	exports.Set(
		Napi::String::New(env, "IsGamepadButtonDown"),
		Napi::Function::New(env, BindIsGamepadButtonDown)
	);

	exports.Set(
		Napi::String::New(env, "IsGamepadButtonReleased"),
		Napi::Function::New(env, BindIsGamepadButtonReleased)
	);

	exports.Set(
		Napi::String::New(env, "IsGamepadButtonUp"),
		Napi::Function::New(env, BindIsGamepadButtonUp)
	);

	exports.Set(
		Napi::String::New(env, "GetGamepadButtonPressed"),
		Napi::Function::New(env, BindGetGamepadButtonPressed)
	);

	exports.Set(
		Napi::String::New(env, "GetGamepadAxisCount"),
		Napi::Function::New(env, BindGetGamepadAxisCount)
	);

	exports.Set(
		Napi::String::New(env, "GetGamepadAxisMovement"),
		Napi::Function::New(env, BindGetGamepadAxisMovement)
	);

	exports.Set(
		Napi::String::New(env, "SetGamepadMappings"),
		Napi::Function::New(env, BindSetGamepadMappings)
	);

	exports.Set(
		Napi::String::New(env, "IsMouseButtonPressed"),
		Napi::Function::New(env, BindIsMouseButtonPressed)
	);

	exports.Set(
		Napi::String::New(env, "IsMouseButtonDown"),
		Napi::Function::New(env, BindIsMouseButtonDown)
	);

	exports.Set(
		Napi::String::New(env, "IsMouseButtonReleased"),
		Napi::Function::New(env, BindIsMouseButtonReleased)
	);

	exports.Set(
		Napi::String::New(env, "IsMouseButtonUp"),
		Napi::Function::New(env, BindIsMouseButtonUp)
	);

	exports.Set(
		Napi::String::New(env, "GetMouseX"),
		Napi::Function::New(env, BindGetMouseX)
	);

	exports.Set(
		Napi::String::New(env, "GetMouseY"),
		Napi::Function::New(env, BindGetMouseY)
	);

	exports.Set(
		Napi::String::New(env, "GetMousePosition"),
		Napi::Function::New(env, BindGetMousePosition)
	);

	exports.Set(
		Napi::String::New(env, "GetMouseDelta"),
		Napi::Function::New(env, BindGetMouseDelta)
	);

	exports.Set(
		Napi::String::New(env, "SetMousePosition"),
		Napi::Function::New(env, BindSetMousePosition)
	);

	exports.Set(
		Napi::String::New(env, "SetMouseOffset"),
		Napi::Function::New(env, BindSetMouseOffset)
	);

	exports.Set(
		Napi::String::New(env, "SetMouseScale"),
		Napi::Function::New(env, BindSetMouseScale)
	);

	exports.Set(
		Napi::String::New(env, "GetMouseWheelMove"),
		Napi::Function::New(env, BindGetMouseWheelMove)
	);

	exports.Set(
		Napi::String::New(env, "SetMouseCursor"),
		Napi::Function::New(env, BindSetMouseCursor)
	);

	exports.Set(
		Napi::String::New(env, "GetTouchX"),
		Napi::Function::New(env, BindGetTouchX)
	);

	exports.Set(
		Napi::String::New(env, "GetTouchY"),
		Napi::Function::New(env, BindGetTouchY)
	);

	exports.Set(
		Napi::String::New(env, "GetTouchPosition"),
		Napi::Function::New(env, BindGetTouchPosition)
	);

	exports.Set(
		Napi::String::New(env, "GetTouchPointId"),
		Napi::Function::New(env, BindGetTouchPointId)
	);

	exports.Set(
		Napi::String::New(env, "GetTouchPointCount"),
		Napi::Function::New(env, BindGetTouchPointCount)
	);

	exports.Set(
		Napi::String::New(env, "SetGesturesEnabled"),
		Napi::Function::New(env, BindSetGesturesEnabled)
	);

	exports.Set(
		Napi::String::New(env, "IsGestureDetected"),
		Napi::Function::New(env, BindIsGestureDetected)
	);

	exports.Set(
		Napi::String::New(env, "GetGestureDetected"),
		Napi::Function::New(env, BindGetGestureDetected)
	);

	exports.Set(
		Napi::String::New(env, "GetGestureHoldDuration"),
		Napi::Function::New(env, BindGetGestureHoldDuration)
	);

	exports.Set(
		Napi::String::New(env, "GetGestureDragVector"),
		Napi::Function::New(env, BindGetGestureDragVector)
	);

	exports.Set(
		Napi::String::New(env, "GetGestureDragAngle"),
		Napi::Function::New(env, BindGetGestureDragAngle)
	);

	exports.Set(
		Napi::String::New(env, "GetGesturePinchVector"),
		Napi::Function::New(env, BindGetGesturePinchVector)
	);

	exports.Set(
		Napi::String::New(env, "GetGesturePinchAngle"),
		Napi::Function::New(env, BindGetGesturePinchAngle)
	);

	exports.Set(
		Napi::String::New(env, "SetCameraMode"),
		Napi::Function::New(env, BindSetCameraMode)
	);

	exports.Set(
		Napi::String::New(env, "UpdateCamera"),
		Napi::Function::New(env, BindUpdateCamera)
	);

	exports.Set(
		Napi::String::New(env, "SetCameraPanControl"),
		Napi::Function::New(env, BindSetCameraPanControl)
	);

	exports.Set(
		Napi::String::New(env, "SetCameraAltControl"),
		Napi::Function::New(env, BindSetCameraAltControl)
	);

	exports.Set(
		Napi::String::New(env, "SetCameraSmoothZoomControl"),
		Napi::Function::New(env, BindSetCameraSmoothZoomControl)
	);

	exports.Set(
		Napi::String::New(env, "SetCameraMoveControls"),
		Napi::Function::New(env, BindSetCameraMoveControls)
	);

	exports.Set(
		Napi::String::New(env, "SetShapesTexture"),
		Napi::Function::New(env, BindSetShapesTexture)
	);

	exports.Set(
		Napi::String::New(env, "DrawPixel"),
		Napi::Function::New(env, BindDrawPixel)
	);

	exports.Set(
		Napi::String::New(env, "DrawPixelV"),
		Napi::Function::New(env, BindDrawPixelV)
	);

	exports.Set(
		Napi::String::New(env, "DrawLine"),
		Napi::Function::New(env, BindDrawLine)
	);

	exports.Set(
		Napi::String::New(env, "DrawLineV"),
		Napi::Function::New(env, BindDrawLineV)
	);

	exports.Set(
		Napi::String::New(env, "DrawLineEx"),
		Napi::Function::New(env, BindDrawLineEx)
	);

	exports.Set(
		Napi::String::New(env, "DrawLineBezier"),
		Napi::Function::New(env, BindDrawLineBezier)
	);

	exports.Set(
		Napi::String::New(env, "DrawLineBezierQuad"),
		Napi::Function::New(env, BindDrawLineBezierQuad)
	);

	exports.Set(
		Napi::String::New(env, "DrawLineBezierCubic"),
		Napi::Function::New(env, BindDrawLineBezierCubic)
	);

	exports.Set(
		Napi::String::New(env, "DrawLineStrip"),
		Napi::Function::New(env, BindDrawLineStrip)
	);

	exports.Set(
		Napi::String::New(env, "DrawCircle"),
		Napi::Function::New(env, BindDrawCircle)
	);

	exports.Set(
		Napi::String::New(env, "DrawCircleSector"),
		Napi::Function::New(env, BindDrawCircleSector)
	);

	exports.Set(
		Napi::String::New(env, "DrawCircleSectorLines"),
		Napi::Function::New(env, BindDrawCircleSectorLines)
	);

	exports.Set(
		Napi::String::New(env, "DrawCircleGradient"),
		Napi::Function::New(env, BindDrawCircleGradient)
	);

	exports.Set(
		Napi::String::New(env, "DrawCircleV"),
		Napi::Function::New(env, BindDrawCircleV)
	);

	exports.Set(
		Napi::String::New(env, "DrawCircleLines"),
		Napi::Function::New(env, BindDrawCircleLines)
	);

	exports.Set(
		Napi::String::New(env, "DrawEllipse"),
		Napi::Function::New(env, BindDrawEllipse)
	);

	exports.Set(
		Napi::String::New(env, "DrawEllipseLines"),
		Napi::Function::New(env, BindDrawEllipseLines)
	);

	exports.Set(
		Napi::String::New(env, "DrawRing"),
		Napi::Function::New(env, BindDrawRing)
	);

	exports.Set(
		Napi::String::New(env, "DrawRingLines"),
		Napi::Function::New(env, BindDrawRingLines)
	);

	exports.Set(
		Napi::String::New(env, "DrawRectangle"),
		Napi::Function::New(env, BindDrawRectangle)
	);

	exports.Set(
		Napi::String::New(env, "DrawRectangleV"),
		Napi::Function::New(env, BindDrawRectangleV)
	);

	exports.Set(
		Napi::String::New(env, "DrawRectangleRec"),
		Napi::Function::New(env, BindDrawRectangleRec)
	);

	exports.Set(
		Napi::String::New(env, "DrawRectanglePro"),
		Napi::Function::New(env, BindDrawRectanglePro)
	);

	exports.Set(
		Napi::String::New(env, "DrawRectangleGradientV"),
		Napi::Function::New(env, BindDrawRectangleGradientV)
	);

	exports.Set(
		Napi::String::New(env, "DrawRectangleGradientH"),
		Napi::Function::New(env, BindDrawRectangleGradientH)
	);

	exports.Set(
		Napi::String::New(env, "DrawRectangleGradientEx"),
		Napi::Function::New(env, BindDrawRectangleGradientEx)
	);

	exports.Set(
		Napi::String::New(env, "DrawRectangleLines"),
		Napi::Function::New(env, BindDrawRectangleLines)
	);

	exports.Set(
		Napi::String::New(env, "DrawRectangleLinesEx"),
		Napi::Function::New(env, BindDrawRectangleLinesEx)
	);

	exports.Set(
		Napi::String::New(env, "DrawRectangleRounded"),
		Napi::Function::New(env, BindDrawRectangleRounded)
	);

	exports.Set(
		Napi::String::New(env, "DrawRectangleRoundedLines"),
		Napi::Function::New(env, BindDrawRectangleRoundedLines)
	);

	exports.Set(
		Napi::String::New(env, "DrawTriangle"),
		Napi::Function::New(env, BindDrawTriangle)
	);

	exports.Set(
		Napi::String::New(env, "DrawTriangleLines"),
		Napi::Function::New(env, BindDrawTriangleLines)
	);

	exports.Set(
		Napi::String::New(env, "DrawTriangleFan"),
		Napi::Function::New(env, BindDrawTriangleFan)
	);

	exports.Set(
		Napi::String::New(env, "DrawTriangleStrip"),
		Napi::Function::New(env, BindDrawTriangleStrip)
	);

	exports.Set(
		Napi::String::New(env, "DrawPoly"),
		Napi::Function::New(env, BindDrawPoly)
	);

	exports.Set(
		Napi::String::New(env, "DrawPolyLines"),
		Napi::Function::New(env, BindDrawPolyLines)
	);

	exports.Set(
		Napi::String::New(env, "DrawPolyLinesEx"),
		Napi::Function::New(env, BindDrawPolyLinesEx)
	);

	exports.Set(
		Napi::String::New(env, "CheckCollisionRecs"),
		Napi::Function::New(env, BindCheckCollisionRecs)
	);

	exports.Set(
		Napi::String::New(env, "CheckCollisionCircles"),
		Napi::Function::New(env, BindCheckCollisionCircles)
	);

	exports.Set(
		Napi::String::New(env, "CheckCollisionCircleRec"),
		Napi::Function::New(env, BindCheckCollisionCircleRec)
	);

	exports.Set(
		Napi::String::New(env, "CheckCollisionPointRec"),
		Napi::Function::New(env, BindCheckCollisionPointRec)
	);

	exports.Set(
		Napi::String::New(env, "CheckCollisionPointCircle"),
		Napi::Function::New(env, BindCheckCollisionPointCircle)
	);

	exports.Set(
		Napi::String::New(env, "CheckCollisionPointTriangle"),
		Napi::Function::New(env, BindCheckCollisionPointTriangle)
	);

	exports.Set(
		Napi::String::New(env, "CheckCollisionLines"),
		Napi::Function::New(env, BindCheckCollisionLines)
	);

	exports.Set(
		Napi::String::New(env, "CheckCollisionPointLine"),
		Napi::Function::New(env, BindCheckCollisionPointLine)
	);

	exports.Set(
		Napi::String::New(env, "GetCollisionRec"),
		Napi::Function::New(env, BindGetCollisionRec)
	);

	exports.Set(
		Napi::String::New(env, "LoadImage"),
		Napi::Function::New(env, BindLoadImage)
	);

	exports.Set(
		Napi::String::New(env, "LoadImageRaw"),
		Napi::Function::New(env, BindLoadImageRaw)
	);

	exports.Set(
		Napi::String::New(env, "LoadImageAnim"),
		Napi::Function::New(env, BindLoadImageAnim)
	);

	exports.Set(
		Napi::String::New(env, "LoadImageFromMemory"),
		Napi::Function::New(env, BindLoadImageFromMemory)
	);

	exports.Set(
		Napi::String::New(env, "LoadImageFromTexture"),
		Napi::Function::New(env, BindLoadImageFromTexture)
	);

	exports.Set(
		Napi::String::New(env, "LoadImageFromScreen"),
		Napi::Function::New(env, BindLoadImageFromScreen)
	);

	exports.Set(
		Napi::String::New(env, "UnloadImage"),
		Napi::Function::New(env, BindUnloadImage)
	);

	exports.Set(
		Napi::String::New(env, "ExportImage"),
		Napi::Function::New(env, BindExportImage)
	);

	exports.Set(
		Napi::String::New(env, "ExportImageAsCode"),
		Napi::Function::New(env, BindExportImageAsCode)
	);

	exports.Set(
		Napi::String::New(env, "GenImageColor"),
		Napi::Function::New(env, BindGenImageColor)
	);

	exports.Set(
		Napi::String::New(env, "GenImageGradientV"),
		Napi::Function::New(env, BindGenImageGradientV)
	);

	exports.Set(
		Napi::String::New(env, "GenImageGradientH"),
		Napi::Function::New(env, BindGenImageGradientH)
	);

	exports.Set(
		Napi::String::New(env, "GenImageGradientRadial"),
		Napi::Function::New(env, BindGenImageGradientRadial)
	);

	exports.Set(
		Napi::String::New(env, "GenImageChecked"),
		Napi::Function::New(env, BindGenImageChecked)
	);

	exports.Set(
		Napi::String::New(env, "GenImageWhiteNoise"),
		Napi::Function::New(env, BindGenImageWhiteNoise)
	);

	exports.Set(
		Napi::String::New(env, "GenImageCellular"),
		Napi::Function::New(env, BindGenImageCellular)
	);

	exports.Set(
		Napi::String::New(env, "ImageCopy"),
		Napi::Function::New(env, BindImageCopy)
	);

	exports.Set(
		Napi::String::New(env, "ImageFromImage"),
		Napi::Function::New(env, BindImageFromImage)
	);

	exports.Set(
		Napi::String::New(env, "ImageText"),
		Napi::Function::New(env, BindImageText)
	);

	exports.Set(
		Napi::String::New(env, "ImageTextEx"),
		Napi::Function::New(env, BindImageTextEx)
	);

	exports.Set(
		Napi::String::New(env, "ImageFormat"),
		Napi::Function::New(env, BindImageFormat)
	);

	exports.Set(
		Napi::String::New(env, "ImageToPOT"),
		Napi::Function::New(env, BindImageToPOT)
	);

	exports.Set(
		Napi::String::New(env, "ImageCrop"),
		Napi::Function::New(env, BindImageCrop)
	);

	exports.Set(
		Napi::String::New(env, "ImageAlphaCrop"),
		Napi::Function::New(env, BindImageAlphaCrop)
	);

	exports.Set(
		Napi::String::New(env, "ImageAlphaClear"),
		Napi::Function::New(env, BindImageAlphaClear)
	);

	exports.Set(
		Napi::String::New(env, "ImageAlphaMask"),
		Napi::Function::New(env, BindImageAlphaMask)
	);

	exports.Set(
		Napi::String::New(env, "ImageAlphaPremultiply"),
		Napi::Function::New(env, BindImageAlphaPremultiply)
	);

	exports.Set(
		Napi::String::New(env, "ImageResize"),
		Napi::Function::New(env, BindImageResize)
	);

	exports.Set(
		Napi::String::New(env, "ImageResizeNN"),
		Napi::Function::New(env, BindImageResizeNN)
	);

	exports.Set(
		Napi::String::New(env, "ImageResizeCanvas"),
		Napi::Function::New(env, BindImageResizeCanvas)
	);

	exports.Set(
		Napi::String::New(env, "ImageMipmaps"),
		Napi::Function::New(env, BindImageMipmaps)
	);

	exports.Set(
		Napi::String::New(env, "ImageDither"),
		Napi::Function::New(env, BindImageDither)
	);

	exports.Set(
		Napi::String::New(env, "ImageFlipVertical"),
		Napi::Function::New(env, BindImageFlipVertical)
	);

	exports.Set(
		Napi::String::New(env, "ImageFlipHorizontal"),
		Napi::Function::New(env, BindImageFlipHorizontal)
	);

	exports.Set(
		Napi::String::New(env, "ImageRotateCW"),
		Napi::Function::New(env, BindImageRotateCW)
	);

	exports.Set(
		Napi::String::New(env, "ImageRotateCCW"),
		Napi::Function::New(env, BindImageRotateCCW)
	);

	exports.Set(
		Napi::String::New(env, "ImageColorTint"),
		Napi::Function::New(env, BindImageColorTint)
	);

	exports.Set(
		Napi::String::New(env, "ImageColorInvert"),
		Napi::Function::New(env, BindImageColorInvert)
	);

	exports.Set(
		Napi::String::New(env, "ImageColorGrayscale"),
		Napi::Function::New(env, BindImageColorGrayscale)
	);

	exports.Set(
		Napi::String::New(env, "ImageColorContrast"),
		Napi::Function::New(env, BindImageColorContrast)
	);

	exports.Set(
		Napi::String::New(env, "ImageColorBrightness"),
		Napi::Function::New(env, BindImageColorBrightness)
	);

	exports.Set(
		Napi::String::New(env, "ImageColorReplace"),
		Napi::Function::New(env, BindImageColorReplace)
	);

	exports.Set(
		Napi::String::New(env, "UnloadImageColors"),
		Napi::Function::New(env, BindUnloadImageColors)
	);

	exports.Set(
		Napi::String::New(env, "UnloadImagePalette"),
		Napi::Function::New(env, BindUnloadImagePalette)
	);

	exports.Set(
		Napi::String::New(env, "GetImageAlphaBorder"),
		Napi::Function::New(env, BindGetImageAlphaBorder)
	);

	exports.Set(
		Napi::String::New(env, "GetImageColor"),
		Napi::Function::New(env, BindGetImageColor)
	);

	exports.Set(
		Napi::String::New(env, "ImageClearBackground"),
		Napi::Function::New(env, BindImageClearBackground)
	);

	exports.Set(
		Napi::String::New(env, "ImageDrawPixel"),
		Napi::Function::New(env, BindImageDrawPixel)
	);

	exports.Set(
		Napi::String::New(env, "ImageDrawPixelV"),
		Napi::Function::New(env, BindImageDrawPixelV)
	);

	exports.Set(
		Napi::String::New(env, "ImageDrawLine"),
		Napi::Function::New(env, BindImageDrawLine)
	);

	exports.Set(
		Napi::String::New(env, "ImageDrawLineV"),
		Napi::Function::New(env, BindImageDrawLineV)
	);

	exports.Set(
		Napi::String::New(env, "ImageDrawCircle"),
		Napi::Function::New(env, BindImageDrawCircle)
	);

	exports.Set(
		Napi::String::New(env, "ImageDrawCircleV"),
		Napi::Function::New(env, BindImageDrawCircleV)
	);

	exports.Set(
		Napi::String::New(env, "ImageDrawRectangle"),
		Napi::Function::New(env, BindImageDrawRectangle)
	);

	exports.Set(
		Napi::String::New(env, "ImageDrawRectangleV"),
		Napi::Function::New(env, BindImageDrawRectangleV)
	);

	exports.Set(
		Napi::String::New(env, "ImageDrawRectangleRec"),
		Napi::Function::New(env, BindImageDrawRectangleRec)
	);

	exports.Set(
		Napi::String::New(env, "ImageDrawRectangleLines"),
		Napi::Function::New(env, BindImageDrawRectangleLines)
	);

	exports.Set(
		Napi::String::New(env, "ImageDraw"),
		Napi::Function::New(env, BindImageDraw)
	);

	exports.Set(
		Napi::String::New(env, "ImageDrawText"),
		Napi::Function::New(env, BindImageDrawText)
	);

	exports.Set(
		Napi::String::New(env, "ImageDrawTextEx"),
		Napi::Function::New(env, BindImageDrawTextEx)
	);

	exports.Set(
		Napi::String::New(env, "LoadTexture"),
		Napi::Function::New(env, BindLoadTexture)
	);

	exports.Set(
		Napi::String::New(env, "LoadTextureFromImage"),
		Napi::Function::New(env, BindLoadTextureFromImage)
	);

	exports.Set(
		Napi::String::New(env, "LoadTextureCubemap"),
		Napi::Function::New(env, BindLoadTextureCubemap)
	);

	exports.Set(
		Napi::String::New(env, "LoadRenderTexture"),
		Napi::Function::New(env, BindLoadRenderTexture)
	);

	exports.Set(
		Napi::String::New(env, "UnloadTexture"),
		Napi::Function::New(env, BindUnloadTexture)
	);

	exports.Set(
		Napi::String::New(env, "UnloadRenderTexture"),
		Napi::Function::New(env, BindUnloadRenderTexture)
	);

	exports.Set(
		Napi::String::New(env, "UpdateTexture"),
		Napi::Function::New(env, BindUpdateTexture)
	);

	exports.Set(
		Napi::String::New(env, "UpdateTextureRec"),
		Napi::Function::New(env, BindUpdateTextureRec)
	);

	exports.Set(
		Napi::String::New(env, "GenTextureMipmaps"),
		Napi::Function::New(env, BindGenTextureMipmaps)
	);

	exports.Set(
		Napi::String::New(env, "SetTextureFilter"),
		Napi::Function::New(env, BindSetTextureFilter)
	);

	exports.Set(
		Napi::String::New(env, "SetTextureWrap"),
		Napi::Function::New(env, BindSetTextureWrap)
	);

	exports.Set(
		Napi::String::New(env, "DrawTexture"),
		Napi::Function::New(env, BindDrawTexture)
	);

	exports.Set(
		Napi::String::New(env, "DrawTextureV"),
		Napi::Function::New(env, BindDrawTextureV)
	);

	exports.Set(
		Napi::String::New(env, "DrawTextureEx"),
		Napi::Function::New(env, BindDrawTextureEx)
	);

	exports.Set(
		Napi::String::New(env, "DrawTextureRec"),
		Napi::Function::New(env, BindDrawTextureRec)
	);

	exports.Set(
		Napi::String::New(env, "DrawTextureQuad"),
		Napi::Function::New(env, BindDrawTextureQuad)
	);

	exports.Set(
		Napi::String::New(env, "DrawTextureTiled"),
		Napi::Function::New(env, BindDrawTextureTiled)
	);

	exports.Set(
		Napi::String::New(env, "DrawTexturePro"),
		Napi::Function::New(env, BindDrawTexturePro)
	);

	exports.Set(
		Napi::String::New(env, "DrawTextureNPatch"),
		Napi::Function::New(env, BindDrawTextureNPatch)
	);

	exports.Set(
		Napi::String::New(env, "DrawTexturePoly"),
		Napi::Function::New(env, BindDrawTexturePoly)
	);

	exports.Set(
		Napi::String::New(env, "Fade"),
		Napi::Function::New(env, BindFade)
	);

	exports.Set(
		Napi::String::New(env, "ColorToInt"),
		Napi::Function::New(env, BindColorToInt)
	);

	exports.Set(
		Napi::String::New(env, "ColorNormalize"),
		Napi::Function::New(env, BindColorNormalize)
	);

	exports.Set(
		Napi::String::New(env, "ColorFromNormalized"),
		Napi::Function::New(env, BindColorFromNormalized)
	);

	exports.Set(
		Napi::String::New(env, "ColorToHSV"),
		Napi::Function::New(env, BindColorToHSV)
	);

	exports.Set(
		Napi::String::New(env, "ColorFromHSV"),
		Napi::Function::New(env, BindColorFromHSV)
	);

	exports.Set(
		Napi::String::New(env, "ColorAlpha"),
		Napi::Function::New(env, BindColorAlpha)
	);

	exports.Set(
		Napi::String::New(env, "ColorAlphaBlend"),
		Napi::Function::New(env, BindColorAlphaBlend)
	);

	exports.Set(
		Napi::String::New(env, "GetColor"),
		Napi::Function::New(env, BindGetColor)
	);

	exports.Set(
		Napi::String::New(env, "GetPixelColor"),
		Napi::Function::New(env, BindGetPixelColor)
	);

	exports.Set(
		Napi::String::New(env, "SetPixelColor"),
		Napi::Function::New(env, BindSetPixelColor)
	);

	exports.Set(
		Napi::String::New(env, "GetPixelDataSize"),
		Napi::Function::New(env, BindGetPixelDataSize)
	);

	exports.Set(
		Napi::String::New(env, "GetFontDefault"),
		Napi::Function::New(env, BindGetFontDefault)
	);

	exports.Set(
		Napi::String::New(env, "LoadFont"),
		Napi::Function::New(env, BindLoadFont)
	);

	exports.Set(
		Napi::String::New(env, "LoadFontEx"),
		Napi::Function::New(env, BindLoadFontEx)
	);

	exports.Set(
		Napi::String::New(env, "LoadFontFromImage"),
		Napi::Function::New(env, BindLoadFontFromImage)
	);

	exports.Set(
		Napi::String::New(env, "LoadFontFromMemory"),
		Napi::Function::New(env, BindLoadFontFromMemory)
	);

	exports.Set(
		Napi::String::New(env, "GenImageFontAtlas"),
		Napi::Function::New(env, BindGenImageFontAtlas)
	);

	exports.Set(
		Napi::String::New(env, "UnloadFontData"),
		Napi::Function::New(env, BindUnloadFontData)
	);

	exports.Set(
		Napi::String::New(env, "UnloadFont"),
		Napi::Function::New(env, BindUnloadFont)
	);

	exports.Set(
		Napi::String::New(env, "DrawFPS"),
		Napi::Function::New(env, BindDrawFPS)
	);

	exports.Set(
		Napi::String::New(env, "DrawText"),
		Napi::Function::New(env, BindDrawText)
	);

	exports.Set(
		Napi::String::New(env, "DrawTextEx"),
		Napi::Function::New(env, BindDrawTextEx)
	);

	exports.Set(
		Napi::String::New(env, "DrawTextPro"),
		Napi::Function::New(env, BindDrawTextPro)
	);

	exports.Set(
		Napi::String::New(env, "DrawTextCodepoint"),
		Napi::Function::New(env, BindDrawTextCodepoint)
	);

	exports.Set(
		Napi::String::New(env, "MeasureText"),
		Napi::Function::New(env, BindMeasureText)
	);

	exports.Set(
		Napi::String::New(env, "MeasureTextEx"),
		Napi::Function::New(env, BindMeasureTextEx)
	);

	exports.Set(
		Napi::String::New(env, "GetGlyphIndex"),
		Napi::Function::New(env, BindGetGlyphIndex)
	);

	exports.Set(
		Napi::String::New(env, "GetGlyphInfo"),
		Napi::Function::New(env, BindGetGlyphInfo)
	);

	exports.Set(
		Napi::String::New(env, "GetGlyphAtlasRec"),
		Napi::Function::New(env, BindGetGlyphAtlasRec)
	);

	exports.Set(
		Napi::String::New(env, "UnloadCodepoints"),
		Napi::Function::New(env, BindUnloadCodepoints)
	);

	exports.Set(
		Napi::String::New(env, "GetCodepointCount"),
		Napi::Function::New(env, BindGetCodepointCount)
	);

	exports.Set(
		Napi::String::New(env, "GetCodepoint"),
		Napi::Function::New(env, BindGetCodepoint)
	);

	exports.Set(
		Napi::String::New(env, "CodepointToUTF8"),
		Napi::Function::New(env, BindCodepointToUTF8)
	);

	exports.Set(
		Napi::String::New(env, "TextCodepointsToUTF8"),
		Napi::Function::New(env, BindTextCodepointsToUTF8)
	);

	exports.Set(
		Napi::String::New(env, "TextCopy"),
		Napi::Function::New(env, BindTextCopy)
	);

	exports.Set(
		Napi::String::New(env, "TextIsEqual"),
		Napi::Function::New(env, BindTextIsEqual)
	);

	exports.Set(
		Napi::String::New(env, "TextLength"),
		Napi::Function::New(env, BindTextLength)
	);

	exports.Set(
		Napi::String::New(env, "TextFormat"),
		Napi::Function::New(env, BindTextFormat)
	);

	exports.Set(
		Napi::String::New(env, "TextSubtext"),
		Napi::Function::New(env, BindTextSubtext)
	);

	exports.Set(
		Napi::String::New(env, "TextReplace"),
		Napi::Function::New(env, BindTextReplace)
	);

	exports.Set(
		Napi::String::New(env, "TextInsert"),
		Napi::Function::New(env, BindTextInsert)
	);

	exports.Set(
		Napi::String::New(env, "TextJoin"),
		Napi::Function::New(env, BindTextJoin)
	);

	exports.Set(
		Napi::String::New(env, "TextAppend"),
		Napi::Function::New(env, BindTextAppend)
	);

	exports.Set(
		Napi::String::New(env, "TextFindIndex"),
		Napi::Function::New(env, BindTextFindIndex)
	);

	exports.Set(
		Napi::String::New(env, "TextToUpper"),
		Napi::Function::New(env, BindTextToUpper)
	);

	exports.Set(
		Napi::String::New(env, "TextToLower"),
		Napi::Function::New(env, BindTextToLower)
	);

	exports.Set(
		Napi::String::New(env, "TextToPascal"),
		Napi::Function::New(env, BindTextToPascal)
	);

	exports.Set(
		Napi::String::New(env, "TextToInteger"),
		Napi::Function::New(env, BindTextToInteger)
	);

	exports.Set(
		Napi::String::New(env, "DrawLine3D"),
		Napi::Function::New(env, BindDrawLine3D)
	);

	exports.Set(
		Napi::String::New(env, "DrawPoint3D"),
		Napi::Function::New(env, BindDrawPoint3D)
	);

	exports.Set(
		Napi::String::New(env, "DrawCircle3D"),
		Napi::Function::New(env, BindDrawCircle3D)
	);

	exports.Set(
		Napi::String::New(env, "DrawTriangle3D"),
		Napi::Function::New(env, BindDrawTriangle3D)
	);

	exports.Set(
		Napi::String::New(env, "DrawTriangleStrip3D"),
		Napi::Function::New(env, BindDrawTriangleStrip3D)
	);

	exports.Set(
		Napi::String::New(env, "DrawCube"),
		Napi::Function::New(env, BindDrawCube)
	);

	exports.Set(
		Napi::String::New(env, "DrawCubeV"),
		Napi::Function::New(env, BindDrawCubeV)
	);

	exports.Set(
		Napi::String::New(env, "DrawCubeWires"),
		Napi::Function::New(env, BindDrawCubeWires)
	);

	exports.Set(
		Napi::String::New(env, "DrawCubeWiresV"),
		Napi::Function::New(env, BindDrawCubeWiresV)
	);

	exports.Set(
		Napi::String::New(env, "DrawCubeTexture"),
		Napi::Function::New(env, BindDrawCubeTexture)
	);

	exports.Set(
		Napi::String::New(env, "DrawCubeTextureRec"),
		Napi::Function::New(env, BindDrawCubeTextureRec)
	);

	exports.Set(
		Napi::String::New(env, "DrawSphere"),
		Napi::Function::New(env, BindDrawSphere)
	);

	exports.Set(
		Napi::String::New(env, "DrawSphereEx"),
		Napi::Function::New(env, BindDrawSphereEx)
	);

	exports.Set(
		Napi::String::New(env, "DrawSphereWires"),
		Napi::Function::New(env, BindDrawSphereWires)
	);

	exports.Set(
		Napi::String::New(env, "DrawCylinder"),
		Napi::Function::New(env, BindDrawCylinder)
	);

	exports.Set(
		Napi::String::New(env, "DrawCylinderEx"),
		Napi::Function::New(env, BindDrawCylinderEx)
	);

	exports.Set(
		Napi::String::New(env, "DrawCylinderWires"),
		Napi::Function::New(env, BindDrawCylinderWires)
	);

	exports.Set(
		Napi::String::New(env, "DrawCylinderWiresEx"),
		Napi::Function::New(env, BindDrawCylinderWiresEx)
	);

	exports.Set(
		Napi::String::New(env, "DrawPlane"),
		Napi::Function::New(env, BindDrawPlane)
	);

	exports.Set(
		Napi::String::New(env, "DrawRay"),
		Napi::Function::New(env, BindDrawRay)
	);

	exports.Set(
		Napi::String::New(env, "DrawGrid"),
		Napi::Function::New(env, BindDrawGrid)
	);

	exports.Set(
		Napi::String::New(env, "LoadModel"),
		Napi::Function::New(env, BindLoadModel)
	);

	exports.Set(
		Napi::String::New(env, "LoadModelFromMesh"),
		Napi::Function::New(env, BindLoadModelFromMesh)
	);

	exports.Set(
		Napi::String::New(env, "UnloadModel"),
		Napi::Function::New(env, BindUnloadModel)
	);

	exports.Set(
		Napi::String::New(env, "UnloadModelKeepMeshes"),
		Napi::Function::New(env, BindUnloadModelKeepMeshes)
	);

	exports.Set(
		Napi::String::New(env, "GetModelBoundingBox"),
		Napi::Function::New(env, BindGetModelBoundingBox)
	);

	exports.Set(
		Napi::String::New(env, "DrawModel"),
		Napi::Function::New(env, BindDrawModel)
	);

	exports.Set(
		Napi::String::New(env, "DrawModelEx"),
		Napi::Function::New(env, BindDrawModelEx)
	);

	exports.Set(
		Napi::String::New(env, "DrawModelWires"),
		Napi::Function::New(env, BindDrawModelWires)
	);

	exports.Set(
		Napi::String::New(env, "DrawModelWiresEx"),
		Napi::Function::New(env, BindDrawModelWiresEx)
	);

	exports.Set(
		Napi::String::New(env, "DrawBoundingBox"),
		Napi::Function::New(env, BindDrawBoundingBox)
	);

	exports.Set(
		Napi::String::New(env, "DrawBillboard"),
		Napi::Function::New(env, BindDrawBillboard)
	);

	exports.Set(
		Napi::String::New(env, "DrawBillboardRec"),
		Napi::Function::New(env, BindDrawBillboardRec)
	);

	exports.Set(
		Napi::String::New(env, "DrawBillboardPro"),
		Napi::Function::New(env, BindDrawBillboardPro)
	);

	exports.Set(
		Napi::String::New(env, "UploadMesh"),
		Napi::Function::New(env, BindUploadMesh)
	);

	exports.Set(
		Napi::String::New(env, "UpdateMeshBuffer"),
		Napi::Function::New(env, BindUpdateMeshBuffer)
	);

	exports.Set(
		Napi::String::New(env, "UnloadMesh"),
		Napi::Function::New(env, BindUnloadMesh)
	);

	exports.Set(
		Napi::String::New(env, "DrawMesh"),
		Napi::Function::New(env, BindDrawMesh)
	);

	exports.Set(
		Napi::String::New(env, "DrawMeshInstanced"),
		Napi::Function::New(env, BindDrawMeshInstanced)
	);

	exports.Set(
		Napi::String::New(env, "ExportMesh"),
		Napi::Function::New(env, BindExportMesh)
	);

	exports.Set(
		Napi::String::New(env, "GetMeshBoundingBox"),
		Napi::Function::New(env, BindGetMeshBoundingBox)
	);

	exports.Set(
		Napi::String::New(env, "GenMeshTangents"),
		Napi::Function::New(env, BindGenMeshTangents)
	);

	exports.Set(
		Napi::String::New(env, "GenMeshBinormals"),
		Napi::Function::New(env, BindGenMeshBinormals)
	);

	exports.Set(
		Napi::String::New(env, "GenMeshPoly"),
		Napi::Function::New(env, BindGenMeshPoly)
	);

	exports.Set(
		Napi::String::New(env, "GenMeshPlane"),
		Napi::Function::New(env, BindGenMeshPlane)
	);

	exports.Set(
		Napi::String::New(env, "GenMeshCube"),
		Napi::Function::New(env, BindGenMeshCube)
	);

	exports.Set(
		Napi::String::New(env, "GenMeshSphere"),
		Napi::Function::New(env, BindGenMeshSphere)
	);

	exports.Set(
		Napi::String::New(env, "GenMeshHemiSphere"),
		Napi::Function::New(env, BindGenMeshHemiSphere)
	);

	exports.Set(
		Napi::String::New(env, "GenMeshCylinder"),
		Napi::Function::New(env, BindGenMeshCylinder)
	);

	exports.Set(
		Napi::String::New(env, "GenMeshCone"),
		Napi::Function::New(env, BindGenMeshCone)
	);

	exports.Set(
		Napi::String::New(env, "GenMeshTorus"),
		Napi::Function::New(env, BindGenMeshTorus)
	);

	exports.Set(
		Napi::String::New(env, "GenMeshKnot"),
		Napi::Function::New(env, BindGenMeshKnot)
	);

	exports.Set(
		Napi::String::New(env, "GenMeshHeightmap"),
		Napi::Function::New(env, BindGenMeshHeightmap)
	);

	exports.Set(
		Napi::String::New(env, "GenMeshCubicmap"),
		Napi::Function::New(env, BindGenMeshCubicmap)
	);

	exports.Set(
		Napi::String::New(env, "LoadMaterialDefault"),
		Napi::Function::New(env, BindLoadMaterialDefault)
	);

	exports.Set(
		Napi::String::New(env, "UnloadMaterial"),
		Napi::Function::New(env, BindUnloadMaterial)
	);

	exports.Set(
		Napi::String::New(env, "SetMaterialTexture"),
		Napi::Function::New(env, BindSetMaterialTexture)
	);

	exports.Set(
		Napi::String::New(env, "SetModelMeshMaterial"),
		Napi::Function::New(env, BindSetModelMeshMaterial)
	);

	exports.Set(
		Napi::String::New(env, "UpdateModelAnimation"),
		Napi::Function::New(env, BindUpdateModelAnimation)
	);

	exports.Set(
		Napi::String::New(env, "UnloadModelAnimation"),
		Napi::Function::New(env, BindUnloadModelAnimation)
	);

	exports.Set(
		Napi::String::New(env, "UnloadModelAnimations"),
		Napi::Function::New(env, BindUnloadModelAnimations)
	);

	exports.Set(
		Napi::String::New(env, "IsModelAnimationValid"),
		Napi::Function::New(env, BindIsModelAnimationValid)
	);

	exports.Set(
		Napi::String::New(env, "CheckCollisionSpheres"),
		Napi::Function::New(env, BindCheckCollisionSpheres)
	);

	exports.Set(
		Napi::String::New(env, "CheckCollisionBoxes"),
		Napi::Function::New(env, BindCheckCollisionBoxes)
	);

	exports.Set(
		Napi::String::New(env, "CheckCollisionBoxSphere"),
		Napi::Function::New(env, BindCheckCollisionBoxSphere)
	);

	exports.Set(
		Napi::String::New(env, "GetRayCollisionSphere"),
		Napi::Function::New(env, BindGetRayCollisionSphere)
	);

	exports.Set(
		Napi::String::New(env, "GetRayCollisionBox"),
		Napi::Function::New(env, BindGetRayCollisionBox)
	);

	exports.Set(
		Napi::String::New(env, "GetRayCollisionModel"),
		Napi::Function::New(env, BindGetRayCollisionModel)
	);

	exports.Set(
		Napi::String::New(env, "GetRayCollisionMesh"),
		Napi::Function::New(env, BindGetRayCollisionMesh)
	);

	exports.Set(
		Napi::String::New(env, "GetRayCollisionTriangle"),
		Napi::Function::New(env, BindGetRayCollisionTriangle)
	);

	exports.Set(
		Napi::String::New(env, "GetRayCollisionQuad"),
		Napi::Function::New(env, BindGetRayCollisionQuad)
	);

	exports.Set(
		Napi::String::New(env, "InitAudioDevice"),
		Napi::Function::New(env, BindInitAudioDevice)
	);

	exports.Set(
		Napi::String::New(env, "CloseAudioDevice"),
		Napi::Function::New(env, BindCloseAudioDevice)
	);

	exports.Set(
		Napi::String::New(env, "IsAudioDeviceReady"),
		Napi::Function::New(env, BindIsAudioDeviceReady)
	);

	exports.Set(
		Napi::String::New(env, "SetMasterVolume"),
		Napi::Function::New(env, BindSetMasterVolume)
	);

	exports.Set(
		Napi::String::New(env, "LoadWave"),
		Napi::Function::New(env, BindLoadWave)
	);

	exports.Set(
		Napi::String::New(env, "LoadWaveFromMemory"),
		Napi::Function::New(env, BindLoadWaveFromMemory)
	);

	exports.Set(
		Napi::String::New(env, "LoadSound"),
		Napi::Function::New(env, BindLoadSound)
	);

	exports.Set(
		Napi::String::New(env, "LoadSoundFromWave"),
		Napi::Function::New(env, BindLoadSoundFromWave)
	);

	exports.Set(
		Napi::String::New(env, "UpdateSound"),
		Napi::Function::New(env, BindUpdateSound)
	);

	exports.Set(
		Napi::String::New(env, "UnloadWave"),
		Napi::Function::New(env, BindUnloadWave)
	);

	exports.Set(
		Napi::String::New(env, "UnloadSound"),
		Napi::Function::New(env, BindUnloadSound)
	);

	exports.Set(
		Napi::String::New(env, "ExportWave"),
		Napi::Function::New(env, BindExportWave)
	);

	exports.Set(
		Napi::String::New(env, "ExportWaveAsCode"),
		Napi::Function::New(env, BindExportWaveAsCode)
	);

	exports.Set(
		Napi::String::New(env, "PlaySound"),
		Napi::Function::New(env, BindPlaySound)
	);

	exports.Set(
		Napi::String::New(env, "StopSound"),
		Napi::Function::New(env, BindStopSound)
	);

	exports.Set(
		Napi::String::New(env, "PauseSound"),
		Napi::Function::New(env, BindPauseSound)
	);

	exports.Set(
		Napi::String::New(env, "ResumeSound"),
		Napi::Function::New(env, BindResumeSound)
	);

	exports.Set(
		Napi::String::New(env, "PlaySoundMulti"),
		Napi::Function::New(env, BindPlaySoundMulti)
	);

	exports.Set(
		Napi::String::New(env, "StopSoundMulti"),
		Napi::Function::New(env, BindStopSoundMulti)
	);

	exports.Set(
		Napi::String::New(env, "GetSoundsPlaying"),
		Napi::Function::New(env, BindGetSoundsPlaying)
	);

	exports.Set(
		Napi::String::New(env, "IsSoundPlaying"),
		Napi::Function::New(env, BindIsSoundPlaying)
	);

	exports.Set(
		Napi::String::New(env, "SetSoundVolume"),
		Napi::Function::New(env, BindSetSoundVolume)
	);

	exports.Set(
		Napi::String::New(env, "SetSoundPitch"),
		Napi::Function::New(env, BindSetSoundPitch)
	);

	exports.Set(
		Napi::String::New(env, "WaveFormat"),
		Napi::Function::New(env, BindWaveFormat)
	);

	exports.Set(
		Napi::String::New(env, "WaveCopy"),
		Napi::Function::New(env, BindWaveCopy)
	);

	exports.Set(
		Napi::String::New(env, "WaveCrop"),
		Napi::Function::New(env, BindWaveCrop)
	);

	exports.Set(
		Napi::String::New(env, "UnloadWaveSamples"),
		Napi::Function::New(env, BindUnloadWaveSamples)
	);

	exports.Set(
		Napi::String::New(env, "LoadMusicStream"),
		Napi::Function::New(env, BindLoadMusicStream)
	);

	exports.Set(
		Napi::String::New(env, "LoadMusicStreamFromMemory"),
		Napi::Function::New(env, BindLoadMusicStreamFromMemory)
	);

	exports.Set(
		Napi::String::New(env, "UnloadMusicStream"),
		Napi::Function::New(env, BindUnloadMusicStream)
	);

	exports.Set(
		Napi::String::New(env, "PlayMusicStream"),
		Napi::Function::New(env, BindPlayMusicStream)
	);

	exports.Set(
		Napi::String::New(env, "IsMusicStreamPlaying"),
		Napi::Function::New(env, BindIsMusicStreamPlaying)
	);

	exports.Set(
		Napi::String::New(env, "UpdateMusicStream"),
		Napi::Function::New(env, BindUpdateMusicStream)
	);

	exports.Set(
		Napi::String::New(env, "StopMusicStream"),
		Napi::Function::New(env, BindStopMusicStream)
	);

	exports.Set(
		Napi::String::New(env, "PauseMusicStream"),
		Napi::Function::New(env, BindPauseMusicStream)
	);

	exports.Set(
		Napi::String::New(env, "ResumeMusicStream"),
		Napi::Function::New(env, BindResumeMusicStream)
	);

	exports.Set(
		Napi::String::New(env, "SeekMusicStream"),
		Napi::Function::New(env, BindSeekMusicStream)
	);

	exports.Set(
		Napi::String::New(env, "SetMusicVolume"),
		Napi::Function::New(env, BindSetMusicVolume)
	);

	exports.Set(
		Napi::String::New(env, "SetMusicPitch"),
		Napi::Function::New(env, BindSetMusicPitch)
	);

	exports.Set(
		Napi::String::New(env, "GetMusicTimeLength"),
		Napi::Function::New(env, BindGetMusicTimeLength)
	);

	exports.Set(
		Napi::String::New(env, "GetMusicTimePlayed"),
		Napi::Function::New(env, BindGetMusicTimePlayed)
	);

	exports.Set(
		Napi::String::New(env, "LoadAudioStream"),
		Napi::Function::New(env, BindLoadAudioStream)
	);

	exports.Set(
		Napi::String::New(env, "UnloadAudioStream"),
		Napi::Function::New(env, BindUnloadAudioStream)
	);

	exports.Set(
		Napi::String::New(env, "UpdateAudioStream"),
		Napi::Function::New(env, BindUpdateAudioStream)
	);

	exports.Set(
		Napi::String::New(env, "IsAudioStreamProcessed"),
		Napi::Function::New(env, BindIsAudioStreamProcessed)
	);

	exports.Set(
		Napi::String::New(env, "PlayAudioStream"),
		Napi::Function::New(env, BindPlayAudioStream)
	);

	exports.Set(
		Napi::String::New(env, "PauseAudioStream"),
		Napi::Function::New(env, BindPauseAudioStream)
	);

	exports.Set(
		Napi::String::New(env, "ResumeAudioStream"),
		Napi::Function::New(env, BindResumeAudioStream)
	);

	exports.Set(
		Napi::String::New(env, "IsAudioStreamPlaying"),
		Napi::Function::New(env, BindIsAudioStreamPlaying)
	);

	exports.Set(
		Napi::String::New(env, "StopAudioStream"),
		Napi::Function::New(env, BindStopAudioStream)
	);

	exports.Set(
		Napi::String::New(env, "SetAudioStreamVolume"),
		Napi::Function::New(env, BindSetAudioStreamVolume)
	);

	exports.Set(
		Napi::String::New(env, "SetAudioStreamPitch"),
		Napi::Function::New(env, BindSetAudioStreamPitch)
	);

	exports.Set(
		Napi::String::New(env, "SetAudioStreamBufferSizeDefault"),
		Napi::Function::New(env, BindSetAudioStreamBufferSizeDefault)
	);

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
		Napi::String::New(env, "WrapImageFormat"),
		Napi::Function::New(env, WrapImageFormat)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageToPOT"),
		Napi::Function::New(env, WrapImageToPOT)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageCrop"),
		Napi::Function::New(env, WrapImageCrop)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageAlphaCrop"),
		Napi::Function::New(env, WrapImageAlphaCrop)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageAlphaClear"),
		Napi::Function::New(env, WrapImageAlphaClear)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageAlphaMask"),
		Napi::Function::New(env, WrapImageAlphaMask)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageAlphaPremultiply"),
		Napi::Function::New(env, WrapImageAlphaPremultiply)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageResize"),
		Napi::Function::New(env, WrapImageResize)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageResizeNN"),
		Napi::Function::New(env, WrapImageResizeNN)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageResizeCanvas"),
		Napi::Function::New(env, WrapImageResizeCanvas)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageMipmaps"),
		Napi::Function::New(env, WrapImageMipmaps)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageDither"),
		Napi::Function::New(env, WrapImageDither)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageFlipVertical"),
		Napi::Function::New(env, WrapImageFlipVertical)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageFlipHorizontal"),
		Napi::Function::New(env, WrapImageFlipHorizontal)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageRotateCW"),
		Napi::Function::New(env, WrapImageRotateCW)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageRotateCCW"),
		Napi::Function::New(env, WrapImageRotateCCW)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageColorTint"),
		Napi::Function::New(env, WrapImageColorTint)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageColorInvert"),
		Napi::Function::New(env, WrapImageColorInvert)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageColorGrayscale"),
		Napi::Function::New(env, WrapImageColorGrayscale)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageColorContrast"),
		Napi::Function::New(env, WrapImageColorContrast)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageColorBrightness"),
		Napi::Function::New(env, WrapImageColorBrightness)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageColorReplace"),
		Napi::Function::New(env, WrapImageColorReplace)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageClearBackground"),
		Napi::Function::New(env, WrapImageClearBackground)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageDrawPixel"),
		Napi::Function::New(env, WrapImageDrawPixel)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageDrawPixelV"),
		Napi::Function::New(env, WrapImageDrawPixelV)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageDrawLine"),
		Napi::Function::New(env, WrapImageDrawLine)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageDrawLineV"),
		Napi::Function::New(env, WrapImageDrawLineV)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageDrawCircle"),
		Napi::Function::New(env, WrapImageDrawCircle)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageDrawCircleV"),
		Napi::Function::New(env, WrapImageDrawCircleV)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageDrawRectangle"),
		Napi::Function::New(env, WrapImageDrawRectangle)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageDrawRectangleV"),
		Napi::Function::New(env, WrapImageDrawRectangleV)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageDrawRectangleRec"),
		Napi::Function::New(env, WrapImageDrawRectangleRec)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageDrawRectangleLines"),
		Napi::Function::New(env, WrapImageDrawRectangleLines)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageDraw"),
		Napi::Function::New(env, WrapImageDraw)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageDrawText"),
		Napi::Function::New(env, WrapImageDrawText)
	);

	exports.Set(
		Napi::String::New(env, "WrapImageDrawTextEx"),
		Napi::Function::New(env, WrapImageDrawTextEx)
	);

	exports.Set(
		Napi::String::New(env, "WrapGenTextureMipmaps"),
		Napi::Function::New(env, WrapGenTextureMipmaps)
	);

	exports.Set(
		Napi::String::New(env, "WrapUploadMesh"),
		Napi::Function::New(env, WrapUploadMesh)
	);

	exports.Set(
		Napi::String::New(env, "WrapGenMeshTangents"),
		Napi::Function::New(env, WrapGenMeshTangents)
	);

	exports.Set(
		Napi::String::New(env, "WrapGenMeshBinormals"),
		Napi::Function::New(env, WrapGenMeshBinormals)
	);

	exports.Set(
		Napi::String::New(env, "WrapSetMaterialTexture"),
		Napi::Function::New(env, WrapSetMaterialTexture)
	);

	exports.Set(
		Napi::String::New(env, "WrapSetModelMeshMaterial"),
		Napi::Function::New(env, WrapSetModelMeshMaterial)
	);

	exports.Set(
		Napi::String::New(env, "WrapWaveFormat"),
		Napi::Function::New(env, WrapWaveFormat)
	);

	exports.Set(
		Napi::String::New(env, "WrapWaveCrop"),
		Napi::Function::New(env, WrapWaveCrop)
	);

	return exports;
}

NODE_API_MODULE(addon, Init);