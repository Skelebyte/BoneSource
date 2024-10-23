#pragma once
#include <iostream>
#include <chrono>
#include <string>

using namespace std;

class Time {

public:
	// Gets the current time in HH:MM:SS format.
	static string getTime();

	// Gets the current date in YYYY-MM-DD format.
	static string getDate();
};