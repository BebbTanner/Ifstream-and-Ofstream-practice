/*Practicing using the ifstream and the ofstream*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
	//Creates a new string that will get the text from the file.
	string myText;

	//This should read the text from the file that is specified.
	ifstream MyReadFile("testFile.txt");

	//While loop that will use the getline function to output all of the text stored in that file.
	while (getline(MyReadFile, myText)) {
		cout << myText;
	}

	MyReadFile.close();
	////This will create and open the file.
	//ofstream myFile("testFile.txt");

	////This will write to the file.
	//myFile << "This is should write to the txt file.";

	////This will close the file.
	//myFile.close();

	return 0;
}