/* 
 * File:   myGL.cpp
 * Author: Xboxplayer<xboxplayer9889@gmail.com>
 *
 * Created on 2025. december 2., 19:51
 */

#include "myGL.h"

myGL::myGL(){

}

myGL::~myGL(){

}

const GLchar* myGL_VS = R"glsl(
#version 150 core
attribute vec3 aVpos;

void main() {
    gl_Position = aVpos;
}
)glsl";

const GLchar* myGL_FS = R"glsl(
#version 150 core
void main() {
    gl_FragColor = vec4(1.0, 0.0, 0.0, 1.0);
}
)glsl";

void myGL::Create(){
    //setup shader
        //createshader vertshader (compile)
    vert_sh = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource( vert_sh, 1, &myGL_VS, nullptr );
    glCompileShader( vert_sh );
        //createshader fragshader (compile)
    frag_sh = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource( frag_sh, 1, &myGL_FS, nullptr );
    glCompileShader( frag_sh );
        //create shaderprogram
    sprog = glCreateProgram();
        //attach shaders (vert,frag)
    glAttachShader(sprog,vert_sh);
    glAttachShader(sprog,frag_sh);
    glLinkProgram(sprog);
    
    //genbuffers
        //gen vertexes
        //gen indexes
    
    //setup attribs
        //setup vertex attrib
    /*
     * gwen/include/GL renamed because g++ cannot compile these opengl commands if in bad include order, and gwen works with the new gl
     * (https://registry.khronos.org/OpenGL-Refpages/gl4/)
     * glVertexAttribFormat(aVpos_id,3,GL_FLOAT,false,0);
     * glVertexAttribBinding(aVpos_id,0);
     */
        //setup color attrib

    //use program
    glUseProgram(sprog);
}
void myGL::Draw(){
    //glclear
    glClearColor(1.0f,0.2f,0.2f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    //glbindbuffer
    //glsetuniforms
    //gldrawelements
}
