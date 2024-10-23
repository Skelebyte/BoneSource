#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class File {
public:
	static void writeFile(string path, string name, string data);
};