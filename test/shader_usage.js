/*******************************************************************************************
*
*   raylib [shaders] example - Drawing textures with an effective shader
*
********************************************************************************************/
const { readFileSync } = require('fs')
const { resolve } = require('path')
const r = require("../index.js")

// Initialization
//--------------------------------------------------------------------------------------
const screenWidth = 800
const screenHeight = 450

r.InitWindow(screenWidth, screenHeight, "raylib [textures] example - texture loading and drawing")

// NOTE: Textures MUST be loaded after Window initialization (OpenGL context is required)
const texture = r.LoadTexture(__dirname + "/resources/raylib_logo.png")        // Texture loading
//---------------------------------------------------------------------------------------

const GLSL_Grayscaler = {
    vert: readFileSync(resolve(__dirname, 'resources', 'generic.vert.glsl'), 'utf-8'),
    frag: readFileSync(resolve(__dirname, 'resources', `grayscaler.frag.glsl`), 'utf-8'),
}

const SH_Grayscaler = r.LoadShaderFromMemory(GLSL_Grayscaler.vert, GLSL_Grayscaler.frag)
const ntsc_weights = r.Vector3(0.299, 0.587, 0.114)

if (! SH_Grayscaler) {
    console.error('[!] Failed to load shader!')
    process.exit(1)
} else {
    SH_Grayscaler.dt = r.GetShaderLocation(SH_Grayscaler, "dt")
		SH_Grayscaler.time = r.GetShaderLocation(SH_Grayscaler, "timedt")
    const u_weights = r.GetShaderLocation(SH_Grayscaler, "weights")
		console.log(SH_Grayscaler)
    if (! SH_Grayscaler.dt || ! u_weights) { 
        console.error('[!] Failed to find ID for uniforms!')
        //process.exit(1)
    }

    // this won't change during rendering
    r.SetShaderVector3(SH_Grayscaler, u_weights, ntsc_weights)
}

// Main game loop
let dt = 0.0
while (!r.WindowShouldClose())    // Detect window close button or ESC key
{
    // Update
    //----------------------------------------------------------------------------------
    // TODO: Update your variables here
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    r.BeginDrawing()

        // calculate a new uniform value using a basic sine wave over time
        dt += r.GetFrameTime();
        const new_uv = (Math.sin(dt) + 1) / 2;

        r.SetShaderFloat(SH_Grayscaler, SH_Grayscaler.dt, new_uv)
				r.SetShaderFloat(SH_Grayscaler, SH_Grayscaler.time, dt)

        r.ClearBackground({r: 255, g: 255, b: 255, a: 255})

        r.BeginShaderMode(SH_Grayscaler)
        r.DrawTexture(texture, screenWidth / 2 - texture.width / 2, screenHeight / 2 - texture.height / 2, {r: 255, g: 255, b: 255, a: 255})
        r.EndShaderMode();

        r.DrawText("this IS a texture!", 360, 370, 10, {r: 128, g: 128, b: 128, a: 255})

    r.EndDrawing()
    //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------
r.UnloadTexture(texture)       // Texture unloading
r.UnloadShader(SH_Grayscaler);

r.CloseWindow()                // Close window and OpenGL context
//--------------------------------------------------------------------------------------