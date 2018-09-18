#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

 int main()
{
     GLFWwindow* window;

     if (!glfwInit())
         return -1;

     window = glfwCreateWindow(1280, 720, "GLFWWindow", nullptr, nullptr);
     if (!window) {
         glfwTerminate();
         return -1;
     }

     glfwMakeContextCurrent(window);

     GLenum err = glewInit();
     if (GLEW_OK != err) {
         std::cout << glewGetErrorString(err) << std::endl;
         return -1;
     }

     std::cout << "OpenGL Version: " << glGetString(GL_VERSION);

     while(!glfwWindowShouldClose(window)) {
         glClear(GL_COLOR_BUFFER_BIT);
         glfwSwapBuffers(window);
         glfwPollEvents();
     }

     return 0;
}
