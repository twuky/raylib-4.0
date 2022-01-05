# raylib-4.0
node-addon-api test with binding https://github.com/raysan5/raylib


## Usage

### Import Module:
```javascript 
import * as raylib from 'raylib-4.0'
```
### Import CommonJS:
```javascript 
const raylib = require('raylib-4.0')
```

### Your First Window
```javascript
let screenWidth = 800
let screenHeight = 450 

raylib.InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window")

raylib.SetTargetFPS(60)

while(!raylib.WindowShouldClose()) {
	raylib.BeginDrawing()
		raylib.ClearBackground(raylib.RAYWHITE)
		raylib.DrawText("Congrats! You created your first window!", 190, 200, 20, raylib.LIGHTGRAY)
	raylib.EndDrawing()
}

raylib.CloseWindow()
```
### Other Usage Details

Not all raylib functions are currently working or enabled. Read on [unsupported_functions.md](unsupported_functions.md)
for more details.

## Installing

While in development this package is not available on NPM
You can currently install the library through github:

`npm i https://github.com/twuky/raylib-4.0`

## Development

### NPM Scripts:

`generate`: Reads raylib API JSON and generates Cpp bindings and TS Definitions.

`test`: Runs tests for the package.

`benchmark`: Runs an example "Bunnymark" benchmark.
