raylib-4.0
node-addon-api test with binding https://github.com/raysan5/raylib


NPM Scripts:

`generate`: Reads raylib API JSON and generates Cpp bindings and TS Definitions

`install`: Builds bindings using CMake-js. Run this after making any changes to the generator.

`test`: Runs an example "Bunnymark" test. Compatible with both handwritten and generated bindings.


To switch between handwritten simple bindings and the full library generated bindings, comment/uncomment lines 59/60 in CMakeLists.txt