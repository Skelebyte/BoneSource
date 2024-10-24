#include <iostream>

#include "Core.h"
#include "../Debug/Debug.h"

using namespace std;

string Core::version = "0.0.0";
bool Core::hasInit = false;

int Core::init() {

	if (hasInit) return 0;

	glfwInit();

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	hasInit = true;
	return 0;
}

int Core::kill() {
	glfwTerminate();
	return 0;
}