#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	cerr << "argc:" << argc << endl;

	if (argc != 4 || string(argv[2]) != "-t") {
		cout << "Invalid arguments!" << endl;
		return -1;
	}
	string message = argv[1];
	string timesAsString = argv[3];

	auto times = stoi(timesAsString);

	for (int i=0; i<times; i++) {
		cout << message << endl;
	}

	for(int i=0; i<argc; i++) {
		string argvAsString = argv[i];
		cerr << "argv[" << i << "]:" << argvAsString << endl;
	}
	return 1;
}

// write your classes here!

