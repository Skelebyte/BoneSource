#include <iostream>
#include <chrono>
#include <iomanip>
#include <ctime>

#include "Time.h"

using namespace std;

string Time::getTime() {

	auto now = chrono::system_clock::now();
	time_t currentTime = chrono::system_clock::to_time_t(now);

	tm timeInfo;
#ifdef _WIN32
	gmtime_s(&timeInfo, &currentTime);
#else
	gmtime_r(&currentTime, &timeInfo);
#endif

	int hrs = timeInfo.tm_hour;
	int min = timeInfo.tm_min;
	int sec = timeInfo.tm_sec;

	string finalTime = to_string(hrs) + ":" + to_string(min) + ":" + to_string(sec);

	return finalTime;

}

string Time::getDate() {
	auto now = chrono::system_clock::now();
	time_t currentTime = chrono::system_clock::to_time_t(now);

	tm timeInfo;
#ifdef _WIN32
	gmtime_s(&timeInfo, &currentTime);
#else
	gmtime_r(&currentTime, &timeInfo);
#endif

	int year = timeInfo.tm_year + 1900;
	int month = timeInfo.tm_mon + 1;
	int day = timeInfo.tm_mday;

	string finalTime = to_string(year) + "-" + to_string(month) + "-" + to_string(day);

	return finalTime;
}