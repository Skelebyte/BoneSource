#include <iostream>
#include <ctime>
#include "Debug.h"
#include "../Time/Time.h"

using namespace std;

string Debug::logDirectory = "BoneSource/saved/logs/";



void Debug::log(string message, Debug::logType type) {
	ofstream log;

	string filename = Time::getDate() + ".log";

	string time = Time::getTime();

	string line = time + " - ";

	switch (type) {
		case logType::LOG:
			line.append("log: ");
			break;
		case logType::WARN:
			line.append("warning: ");
			break;
		case logType::ERR:
			line.append("error: ");
			break;
	}

	line.append(message);

	log.open(logDirectory + filename, ios::app);
	log << line << endl;

	log.close();
}