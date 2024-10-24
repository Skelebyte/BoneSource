#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "time.h"

using namespace std;

class Core {
public:

	// Version of the engine (semantic versioning)
	static string version;


	// Has the engine been initialised?
	static bool hasInit;

	// Start the engine
	static int init();

	// Terminate the GLFW lib
	static int kill();
};