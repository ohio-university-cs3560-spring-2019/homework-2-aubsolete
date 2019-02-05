#include "proj1.h"
#include <iostream>
#include <string>

using namespace std;

void runthrough(string arg1, string arg2) {
	string from_file = "";
	cin >> from_file;
	while(!cin.eof()) {
		if(from_file.find(arg1) != std::string::npos) {
			from_file.replace(from_file.find(arg1), arg1.length(), arg2);
			cout << from_file << " ";
		} else {
			cout << from_file << " ";
		}
		cin >> from_file;
	}
}
