#include <iostream>
#include <math.h>

#include "Window.h"

GLFWwindow* Window::window = nullptr;

int Window::createWindow(const char* name, int width, int height) {

	if (!Core::hasInit) {
		Core::init();
	}

	if (window != nullptr) {
		// debug.log go away it already exists.
	}

	window = glfwCreateWindow(width, height, name, NULL, NULL);

	return 0;
}