#include <stdio.h>
#include <stdlib.h>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main(int argc, char const* argv[] )
{
    if( !glfwInit() ){
        fprintf( stderr, "failed\n" );
    }

    return 0;
}