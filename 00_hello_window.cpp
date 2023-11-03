#include<iostream>
#include "program.h"

class HelloWindow : public Program {
public:

    HelloWindow() {

    }
	
	int run() {
        GLFWwindow* window = glfwCreateWindow(800, 600, "Hello Window", NULL, NULL);
        if (window == nullptr) {
            std::cout << "Unable to create window\n";
            glfwTerminate();
            return -1;
        }
        glfwMakeContextCurrent(window);

        if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
        {
            std::cout << "Failed to initialize GLAD" << std::endl;
            return -1;
        }

        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);

        while (!glfwWindowShouldClose(window)) {
            glfwPollEvents();
        }

        glfwDestroyWindow(window);
        return 0;
	}
};
