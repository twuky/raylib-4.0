

# Currently Unsupported/Buggy functions:

Most of these functions have issues due to working with C pointers between NodeJS and the C node addon.
Some may be able to be implemented by writing custom wrappers in C that can convert arrays or other types to pointers
before calling the underlying raylib function.

`DrawLineStrip()`, `DrawTriangleFan()`, `DrawTriangleStrip()`
These functions expect the first argument to be a pointer to an array of Vector2 points that make up the shape to draw.
They will need to be wrapped to handle parsing a Javascript array to the raylib binding and freeing the memory after the function finishes.

`CheckCollisionLines()`
This function only partially works. The last argument - collisionPoint is meant to be passed by reference to update to the point at which the
two lines intersect. Currently the function only returns true or false. A seperate function would need to be made to return the collision point.

`UpdateTexture()`, `UpdateTextureRec()`
These expect to be passed a C pointer location to image pixel data. It may be possible to pass in the value of an Image.data field for this.

`DrawTexturePoly()`
This function has a similar isuue to DrawLineStrip() and similar - requiring a pointer to an array of points to draw a polygon around.

`GetPixelColor()`, `SetPixelColor()`
These expect the pixel to get or set be passed as a pointer to the index of the image data. These values may be difficult
to acquire from javascript.

`LoadFontFromMemory()`

`UpdateMeshBuffer()`
`DrawMeshInstanced()`

`LoadMaterials()`

`LoadModelAnimations()`

`UpdateSound()`

`LoadWaveSamples()`