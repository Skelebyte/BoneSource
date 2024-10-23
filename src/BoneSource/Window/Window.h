#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "../Core/Core.h"

class Window {
public:
	// GLFW window
	static GLFWwindow* window;

	// Creates a GLFW window, assigns window to this new GLFW window. You can only call this function once.
	static int createWindow(const char* name, int width, int height);
};
