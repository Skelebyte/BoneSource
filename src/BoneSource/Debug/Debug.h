#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Debug {
public:
	// What type of log
	enum logType {
		LOG,
		WARN,
		ERR
	};

	// Directory to the where log files should be stored e.g. BoneSource/saved/logs/
	// Do not include the log file name in the directory.
	static string logDirectory;



	// Writes a new entry to the .log file (directory of the .log file is specified in logDirectory)
	static void log(string message, logType type);
};

