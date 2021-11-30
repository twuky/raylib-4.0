#include <napi.h>
#include <raylib.h>

using namespace Napi;

// Function Binding Comparison
// The functions commented out are the same functions as they appear in the aut0-generated raylib_4.0.cc
// The uncommented functions come from src/simple_example_binding.cc
//
// Mainly the function in question would be BindDrawTexture, called potentially 1000s of times/frame,
// which calls ColorFromNAPIObject and TextureFromNAPIObject

// type conversions

/**
Color ColorFromNAPIObject(Napi::Object obj) {
	Color out = Color();
	out.r = obj.Get("r").As<Napi::Number>().Uint32Value();
	out.g = obj.Get("g").As<Napi::Number>().Uint32Value();
	out.b = obj.Get("b").As<Napi::Number>().Uint32Value();
	out.a = obj.Get("a").As<Napi::Number>().Uint32Value();
	return out;
}
 */
Color ColorFromNAPIObject(Napi::Object obj) {
  Color c = Color();
  c.r = obj.Get("r").As<Napi::Number>().Uint32Value();
  c.g = obj.Get("g").As<Napi::Number>().Uint32Value();
  c.b = obj.Get("b").As<Napi::Number>().Uint32Value();
  c.a = obj.Get("a").As<Napi::Number>().Uint32Value();
  return c;
}

/*
Napi::Object BindColor(const Napi::CallbackInfo& info) {
	Napi::Object out = Napi::Object::New(info.Env());
	out.Set("r", info[0].As<Napi::Object>());
	out.Set("g", info[1].As<Napi::Object>());
	out.Set("b", info[2].As<Napi::Object>());
	out.Set("a", info[3].As<Napi::Object>());
	return out;
}
*/
Napi::Object BindColor(const Napi::CallbackInfo& info) {
  Color c = Color();
  c.r = info[0].As<Napi::Number>().Uint32Value();
  c.g = info[1].As<Napi::Number>().Uint32Value();
  c.b = info[2].As<Napi::Number>().Uint32Value();
  c.a = info[3].As<Napi::Number>().Uint32Value();
  Napi::Object out = Napi::Object::New(info.Env());
  out.Set("r", c.r);
  out.Set("g", c.g);
  out.Set("b", c.b);
  out.Set("a", c.a);
  return out;
}

/*
Texture TextureFromNAPIObject(Napi::Object obj) {
	Texture out = Texture();
	out.id = obj.Get("id").As<Napi::Number>();
	out.width = obj.Get("width").As<Napi::Number>();
	out.height = obj.Get("height").As<Napi::Number>();
	out.mipmaps = obj.Get("mipmaps").As<Napi::Number>();
	out.format = obj.Get("format").As<Napi::Number>();
	return out;
}
*/
Texture TextureFromNAPIObject(Napi::Object obj) {
	Texture out = Texture();
	out.id = obj.Get("id").As<Napi::Number>();
	out.width = obj.Get("width").As<Napi::Number>();
	out.height = obj.Get("height").As<Napi::Number>();
	out.mipmaps = obj.Get("mipmaps").As<Napi::Number>();
	out.format = obj.Get("format").As<Napi::Number>();
	return out;
}

/*
Napi::Object TextureToNAPIObject(napi_env env, Texture object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("id", object.id);
	out.Set("width", object.width);
	out.Set("height", object.height);
	out.Set("mipmaps", object.mipmaps);
	out.Set("format", object.format);
	return out;
}
*/
Napi::Object TextureToNAPIObject(napi_env env, Texture object) {
	Napi::Object out = Napi::Object::New(env);
	out.Set("id", object.id);
	out.Set("width", object.width);
	out.Set("height", object.height);
	out.Set("mipmaps", object.mipmaps);
	out.Set("format", object.format);
	return out;
}

// function binding wrappers

/*
void BindInitWindow(const Napi::CallbackInfo& info) {
	InitWindow(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::String>().Utf8Value().c_str()
	);
}
*/
void BindInitWindow(const Napi::CallbackInfo& info) {
  return InitWindow(
    info[0].As<Napi::Number>(),
    info[1].As<Napi::Number>(),
    info[2].As<Napi::String>().Utf8Value().c_str()
  );
}

/*
void BindSetTargetFPS(const Napi::CallbackInfo& info) {
	SetTargetFPS(
		info[0].As<Napi::Number>()
	);
}
*/
void BindSetTargetFPS(const Napi::CallbackInfo& info) {
  return SetTargetFPS(
    info[0].As<Napi::Number>()
  );
}

/*
Napi::Boolean BindWindowShouldClose(const Napi::CallbackInfo& info) {
	return Napi::Boolean::New(info.Env(), 
		WindowShouldClose(	)
);
}
*/
Napi::Boolean BindWindowShouldClose(const Napi::CallbackInfo& info) {
  return Napi::Boolean::New(info.Env(), WindowShouldClose());
}

/*
void BindBeginDrawing(const Napi::CallbackInfo& info) {
	BeginDrawing(	);
}
*/
void BindBeginDrawing(const Napi::CallbackInfo& info) {
  BeginDrawing();
}

/*
void BindEndDrawing(const Napi::CallbackInfo& info) {
	EndDrawing(	);
}
*/
void BindEndDrawing(const Napi::CallbackInfo& info) {
  EndDrawing();
}

/*
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
*/
// function is only called once during benchmark
Napi::Object BindLoadTexture(const Napi::CallbackInfo& info) {
  return TextureToNAPIObject(info.Env(), LoadTexture(info[0].As<Napi::String>().Utf8Value().c_str()));
}

/*
void BindClearBackground(const Napi::CallbackInfo& info) {
	ClearBackground(
		ColorFromNAPIObject(info[0].As<Napi::Object>())
	);
}
*/
void BindClearBackground(const Napi::CallbackInfo& info) {
  ClearBackground(ColorFromNAPIObject(info[0].As<Napi::Object>()));
}

/*
void BindDrawText(const Napi::CallbackInfo& info) {
	DrawText(
		info[0].As<Napi::String>().Utf8Value().c_str(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}
*/
void BindDrawText(const Napi::CallbackInfo& info) {
  DrawText(
    info[0].As<Napi::String>().Utf8Value().c_str(),
    info[1].As<Napi::Number>(),
    info[2].As<Napi::Number>(),
    info[3].As<Napi::Number>(),
    ColorFromNAPIObject(info[4].As<Napi::Object>())
  );
}

/*
void BindDrawFPS(const Napi::CallbackInfo& info) {
	DrawFPS(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>()
	);
}
*/
void BindDrawFPS(const Napi::CallbackInfo& info) {
  DrawFPS(
    info[0].As<Napi::Number>(),
    info[1].As<Napi::Number>()
  );
}

/*
Napi::Number BindGetFPS(const Napi::CallbackInfo& info) {
	return Napi::Number::New(info.Env(), 
		GetFPS(	)
);
}
*/
Napi::Number BindGetFPS(const Napi::CallbackInfo& info) {
  return Napi::Number::New(info.Env(), GetFPS());
}

/*
void BindDrawRectangle(const Napi::CallbackInfo& info) {
	DrawRectangle(
		info[0].As<Napi::Number>(),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		info[3].As<Napi::Number>(),
		ColorFromNAPIObject(info[4].As<Napi::Object>())
	);
}
*/
void BindDrawRectangle(const Napi::CallbackInfo& info) {
  DrawRectangle(
    info[0].As<Napi::Number>(),
    info[1].As<Napi::Number>(),
    info[2].As<Napi::Number>(),
    info[3].As<Napi::Number>(),
    ColorFromNAPIObject(info[4].As<Napi::Object>())
  );
}

/*
void BindDrawTexture(const Napi::CallbackInfo& info) {
	DrawTexture(
		TextureFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
}
*/
// called the most each frame
void BindDrawTexture(const Napi::CallbackInfo& info) {
	DrawTexture(
		TextureFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
}