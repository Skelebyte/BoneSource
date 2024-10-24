#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <math.h>
#include "BoneSource/Window/Window.h"
#include "BoneSource/Debug/Debug.h"
#include "BoneSource/Time/Time.h"

int main() {
	//glfwInit();

	//glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	//glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	//glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	Core::init();

	Debug::log("hi mum!", Debug::logType::LOG);


	// GLFWwindow* window = glfwCreateWindow(1000, 600, "Hi, mum!", NULL, NULL);

	Window::createWindow("Hi, mum!", 1000, 600);

	if (Window::window == NULL) {
		printf("Failed to create window\n");
		glfwTerminate();
		return 1;
	}

	// jusat means we can interact with it
	glfwMakeContextCurrent(Window::window);

	gladLoadGL();



	glViewport(0, 0, 1000, 600);






	while (!glfwWindowShouldClose(Window::window)) {
		// handles resizing etc (GLFW events)
		glfwPollEvents();

		// backbuffer - the next frame
		glClearColor(0.09f, 0.13f, 0.17f, 1.0f);
		// clear front buffer - current frame
		glClear(GL_COLOR_BUFFER_BIT);



		// swap the back and front buffers
		glfwSwapBuffers(Window::window);

	}


	glfwDestroyWindow(Window::window);
	glfwTerminate();
	return 0;
}