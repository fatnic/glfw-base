#include <GLFW/glfw3.h>

 int main()
{
     GLFWwindow* window;

     if (!glfwInit())
         return -1;

     window = glfwCreateWindow(640, 360, "SFML", nullptr, nullptr);
     if (!window) {
         glfwTerminate();
         return -1;
     }

     glfwMakeContextCurrent(window);

     while(!glfwWindowShouldClose(window)) {
         glClear(GL_COLOR_BUFFER_BIT);
         glfwSwapBuffers(window);
         glfwPollEvents();
     }

     return 0;
}
