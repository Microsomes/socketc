#include <iostream>

#include "adder.h"


#include "glfw3.h"
#include "glfw3native.h"

#include "SOCKET.h"

int main() {

    std::cout << "version Major:" << SOCKET_VERSION_MAJOR <<std::endl;
    std::cout << "version Minor:" << SOCKET_VERSION_MINOR <<std::endl;

    GLFWwindow *window;


    //open window
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
    window = glfwCreateWindow(800, 600, "Slave Ship Coins", nullptr, nullptr);
    if (window == nullptr) {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    

    glfwMakeContextCurrent(window);
    
    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
        glfwSwapBuffers(window);
    }
    
    glfwTerminate();
    //wait
    std::cin.get();    

    std::cout << "hello world"  << std::endl;

    std::cout << "Adding 10+30=" << addTogether(10,30) <<std::endl;

    // Terza t1= Terza {1};
    // Terza t2= Terza {10};

    // t1 + t2;

    // std::cout << "Terza t1=" << t1.num <<std::endl;

    return 0;
}