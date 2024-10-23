#include "File.h"

using namespace std;

void File::writeFile(string path, string name, string data) {
	ofstream file;

	file.open(path + name, ios::app);

	file << data << endl;

	file.close();
}