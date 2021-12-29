
const {DrawTexture, DrawRectangle, InitWindow, Color, LoadTexture, BeginDrawing, EndDrawing, ClearBackground, DrawFPS, DrawText, WindowShouldClose, GetFPS} = require("../index.js")
const r = require("../index.js")

const {
    performance
  } = require('perf_hooks');
// 13 functions: 9932 bunnies
// 475 functions: 8184

const screenWidth = 1280
const screenHeight = 720

class Bunny {

    constructor() {
        this.pos = {
            x: Math.random() * screenWidth,
            y: Math.random() * screenHeight
        }

        this.speed = {
            x: (-250+Math.random() * 500)/60,
            y: (-250+Math.random() * 500)/60
        }

        this.color = Color(
            80 + Math.random() * 170,
            80 + Math.random() * 170,
            80 + Math.random() * 170,
            255
        )
    }

    update() {
        this.pos.x += this.speed.x
        this.pos.y += this.speed.y

        if (this.pos.x > screenWidth || this.pos.x < 0)
            this.speed.x = -this.speed.x

        if (this.pos.y > screenHeight || this.pos.y < 0)
            this.speed.y = -this.speed.y
    }

}

let bunnies = []

InitWindow(screenWidth, screenHeight, "Hello World")



//raylib.SetTargetFPS(60)

let white = Color(255, 255, 255, 255)

let lightgray = Color(128, 128, 128, 255)

let black = Color(0, 0, 0, 255)

let green = Color(0, 255, 0, 255)

let bunny_texture = LoadTexture('./test/resources/sprite.png')

while (!WindowShouldClose()) {
    BeginDrawing()
    ClearBackground(white)

    if (GetFPS() > 60) {
        bunnies.push(new Bunny())
        bunnies.push(new Bunny())
        bunnies.push(new Bunny())
        bunnies.push(new Bunny())
    }

    for (let bunny of bunnies) {
        bunny.update()
        
        r.DrawTexture(bunny_texture, bunny.pos.x-32, bunny.pos.y, bunny.color)
    }
    
    DrawRectangle(0, 0, screenWidth, 40, black)
    DrawText("bunnies: "+ bunnies.length, 120, 10, 20, green);
    DrawFPS(10, 10)

    EndDrawing()
}