/*Practicing using the ifstream and the ofstream*/

#include <iostream>
#include <fstream>
using namespace std;


int main() {

	//This will create and open the file.
	ofstream myFile("testFile.txt");

	//This will write to the file.
	myFile << "This is should write to the txt file.";

	//This will close the file.
	myFile.close();

	return 0;
}