/* 
 * File:   myGL.h
 * Author: Xboxplayer<xboxplayer9889@gmail.com>
 *
 * Created on 2025. december 2., 19:51
 */

/*
 *  just a fast opengl shading something
 */
#define GLEW_STATIC
#include <GL/glew.h>

class myGL {
public:
    myGL();
    ~myGL();
    void Create();
    void Draw();
private:
    GLuint vert_sh;
    GLuint frag_sh;
    GLuint sprog;
    
    GLuint aVpos_id;
    
    GLuint attribs_id;
    GLuint vbuffer_id;
    GLuint ibuffer_id;
};
