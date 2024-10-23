#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "time.h"

class Core {
public:
	// Has the engine been initialised?
	static bool hasInit;

	// Start the engine
	static int init();

	// Terminate the GLFW lib
	static int kill();
};