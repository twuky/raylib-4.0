#include <napi.h>
#include "../raylib/include/raylib.h"

using namespace Napi;

// type conversions
Color ColorFromNAPIObject(Napi::Object obj) {
  Color c = Color();
  c.r = obj.Get("r").As<Napi::Number>().Uint32Value();
  c.g = obj.Get("g").As<Napi::Number>().Uint32Value();
  c.b = obj.Get("b").As<Napi::Number>().Uint32Value();
  c.a = obj.Get("a").As<Napi::Number>().Uint32Value();
  return c;
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

// function to create a "color". JS users can simply define an object with rgba properties
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
void BindInitWindow(const Napi::CallbackInfo& info) {
  return InitWindow(
    info[0].As<Napi::Number>(),
    info[1].As<Napi::Number>(),
    info[2].As<Napi::String>().Utf8Value().c_str()
  );
}

void BindSetTargetFPS(const Napi::CallbackInfo& info) {
  return SetTargetFPS(
    info[0].As<Napi::Number>()
  );
}

Napi::Boolean BindWindowShouldClose(const Napi::CallbackInfo& info) {
  return Napi::Boolean::New(info.Env(), WindowShouldClose());
}

void BindBeginDrawing(const Napi::CallbackInfo& info) {
  return BeginDrawing();
}

void BindEndDrawing(const Napi::CallbackInfo& info) {
  return EndDrawing();
}

Napi::Object BindLoadTexture(const Napi::CallbackInfo& info) {
  return TextureToNAPIObject(info.Env(), LoadTexture(info[0].As<Napi::String>().Utf8Value().c_str()));
}

void BindClearBackground(const Napi::CallbackInfo& info) {
  ClearBackground(ColorFromNAPIObject(info[0].As<Napi::Object>()));
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

void BindDrawFPS(const Napi::CallbackInfo& info) {
  DrawFPS(
    info[0].As<Napi::Number>(),
    info[1].As<Napi::Number>()
  );
}

Napi::Number BindGetFPS(const Napi::CallbackInfo& info) {
  return Napi::Number::New(info.Env(), GetFPS());
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

void BindDrawTexture(const Napi::CallbackInfo& info) {
	DrawTexture(
		TextureFromNAPIObject(info[0].As<Napi::Object>()),
		info[1].As<Napi::Number>(),
		info[2].As<Napi::Number>(),
		ColorFromNAPIObject(info[3].As<Napi::Object>())
	);
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {

  exports.Set(
    Napi::String::New(env, "InitWindow"),
    Napi::Function::New(env, BindInitWindow)
  );

  exports.Set(
    Napi::String::New(env, "SetTargetFPS"),
    Napi::Function::New(env, BindSetTargetFPS)
  );

  exports.Set(
    Napi::String::New(env, "WindowShouldClose"),
    Napi::Function::New(env, BindWindowShouldClose)
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
    Napi::String::New(env, "Color"),
    Napi::Function::New(env, BindColor)
  );

  exports.Set(
    Napi::String::New(env, "ClearBackground"),
    Napi::Function::New(env, BindClearBackground)
  );

  exports.Set(
    Napi::String::New(env, "DrawText"),
    Napi::Function::New(env, BindDrawText)
  );

  exports.Set(
    Napi::String::New(env, "DrawFPS"),
    Napi::Function::New(env, BindDrawFPS)
  );

  exports.Set(
    Napi::String::New(env, "LoadTexture"),
    Napi::Function::New(env, BindLoadTexture)
  );

  exports.Set(
    Napi::String::New(env, "GetFPS"),
    Napi::Function::New(env, BindGetFPS)
  );

  exports.Set(
    Napi::String::New(env, "DrawRectangle"),
    Napi::Function::New(env, BindDrawRectangle)
  );

  exports.Set(
    Napi::String::New(env, "DrawTexture"),
    Napi::Function::New(env, BindDrawTexture)
  );

  exports.Set(
    Napi::String::New(env, "DrawTexture"),
    Napi::Function::New(env, BindDrawTexture)
  );

  return exports;
}

NODE_API_MODULE(addon, Init);
