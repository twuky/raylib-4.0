#include <napi.h>
#include "../raylib/include/raylib.h"

using namespace Napi;


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
  Napi::Env env = info.Env();
  return Napi::Boolean::New(env, WindowShouldClose());
}

void BindBeginDrawing(const Napi::CallbackInfo& info) {
  return BeginDrawing();
}

void BindEndDrawing(const Napi::CallbackInfo& info) {
  return EndDrawing();
}

Color ColorFromNAPIObject(Napi::Object obj) {
  Color c = Color();
  c.r = obj.Get("r").As<Napi::Number>().Uint32Value();
  c.g = obj.Get("g").As<Napi::Number>().Uint32Value();
  c.b = obj.Get("b").As<Napi::Number>().Uint32Value();
  c.a = obj.Get("a").As<Napi::Number>().Uint32Value();
  return c;
}

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

Napi::Object BindLoadTexture(const Napi::CallbackInfo& info) {
  Texture2D texture = LoadTexture(info[0].As<Napi::String>().Utf8Value().c_str());
  Napi::Object out = Napi::Object::New(info.Env());
  out.Set("id", texture.id);
  out.Set("width", texture.width);
  out.Set("height", texture.height);
  out.Set("mipmaps", texture.mipmaps);
  out.Set("format", texture.format);
  return out;
}

Texture Texture2DFromNAPIObject(Napi::Object obj) {
  Texture texture = Texture();
  texture.id = obj.Get("id").As<Napi::Number>();
  texture.width = obj.Get("width").As<Napi::Number>();
  texture.height = obj.Get("height").As<Napi::Number>();
  texture.mipmaps = obj.Get("mipmaps").As<Napi::Number>();
  texture.format = obj.Get("format").As<Napi::Number>();
  return texture;
}

void BindClearBackground(const Napi::CallbackInfo& info) {
  Color c = ColorFromNAPIObject(info[0].As<Napi::Object>());
  return ClearBackground(c);
}

void BindDrawText(const Napi::CallbackInfo& info) {
  // some types need to be converted from generic JS objects
  Color c = ColorFromNAPIObject(info[4].As<Napi::Object>());
  // "bound function simply defers to raylib function"
  return DrawText(
    info[0].As<Napi::String>().Utf8Value().c_str(),
    info[1].As<Napi::Number>(),
    info[2].As<Napi::Number>(),
    info[3].As<Napi::Number>(),
    c
  );
}

void BindDrawFPS(const Napi::CallbackInfo& info) {
  return DrawFPS(
    info[0].As<Napi::Number>(),
    info[1].As<Napi::Number>()
  );
}

Napi::Number BindGetFPS(const Napi::CallbackInfo& info) {
  return Napi::Number::New(info.Env(), GetFPS());
}

void BindDrawRectangle(const Napi::CallbackInfo& info) {
  Color c = ColorFromNAPIObject(info[4].As<Napi::Object>());
  return DrawRectangle(
    info[0].As<Napi::Number>(),
    info[1].As<Napi::Number>(),
    info[2].As<Napi::Number>(),
    info[3].As<Napi::Number>(),
    c
  );
}

void BindDrawTexture(const Napi::CallbackInfo& info) {
	DrawTexture(
		Texture2DFromNAPIObject(info[0].As<Napi::Object>()),
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
