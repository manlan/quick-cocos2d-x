"#ifdef GL_ES\n\
precision mediump float;\n\
#endif\n\
varying mediump vec2 v_texCoord;\n\
\n\
uniform sampler2D CC_Texture0;\n\
uniform mediump float u_brightness;\n\
\n\
void main()\n\
{\n\
 vec4 textureColor = texture2D(CC_Texture0, v_texCoord);\n\
 gl_FragColor = vec4((textureColor.rgb + vec3(u_brightness)), textureColor.w);\n\
}";