#version 410

layout(location = 0) in vec2 position;

uniform vec4 color;
out vec4 colour;
out vec2 coords;

void main() {
    colour = color;
    coords = position;
    gl_Position = vec4(position, 0.0, 1.0);
}
