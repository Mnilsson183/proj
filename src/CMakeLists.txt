PROJECT(test C)
find_package(OpenGL)
find_package(GLFW)
ADD_DEFINITIONS(
    -std=c99
    -lGL
    -lGLU
    -lGLEW
    -lglfw
)
SET(SRC test)
ADD_EXECUTABLE(exe ${SRC})