/*Practicing using the ifstream and the ofstream

NOTES:
It seems like ofstream and ifstream are used as data types.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	//Declaring a variable of type ofstream and calling it outputTest.
	ofstream outputTest;

	outputTest.open("testfile.txt");

	if (outputTest.is_open()) {
		outputTest << 100;
		outputTest.close();
	}
	else {
		cout << "Error, could not open/create file." << endl;
	}

	return 0;
}