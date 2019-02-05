#include <iostream>
#include <iomanip>

using namespace std;

void runthrough(string arg1, string arg2);

int main(int argc, char** argv) {
	string sub_out = argv[1];		//string you want to replace
	string sub_for = argv[2];	//string you want to do the replacing
	runthrough(sub_out, sub_for);
	return 0;
}
