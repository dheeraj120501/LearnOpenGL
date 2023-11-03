#ifndef PROGRAM_H
#define PROGRAM_H

#include<iostream>
#include<string>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

class Program {
public:
	Program() {
		glfwInit();
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	}

	~Program() {
		glfwTerminate();
	}

	virtual int run() {
		return 0;
	}
};

#endif