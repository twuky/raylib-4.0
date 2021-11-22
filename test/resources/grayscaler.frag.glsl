#version 330

// Input vertex attributes (from vertex shader)
in vec2 fragTexCoord;
in vec4 fragColor;

// Input uniform values
uniform sampler2D texture0;

// lets test the uniform I/O to manipulate the ramp
uniform float dt;
uniform vec3 weights;
uniform float timedt;

// Output fragment color
out vec4 finalColor;

void main()
{
    // Texel color fetching from texture sampler
    vec2 sample = vec2(fragTexCoord.x + sin(fragTexCoord.y * 10 + timedt*4) * 0.2, fragTexCoord.y);
    vec4 texelColor = texture(texture0, sample)*fragColor;

    // Convert texel color to grayscale using NTSC conversion weights
    //float gray = dot(texelColor.rgb, vec3(0.299, 0.587, 0.114));
    float gray = dot(texelColor.rgb, weights);
    
    // Calculate final fragment color
    finalColor = vec4(gray, gray, gray, texelColor.a);
}

