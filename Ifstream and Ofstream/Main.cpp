/*Practicing using the ifstream and the ofstream

NOTES:
	It seems like ofstream and ifstream are used as data types.
	Finally figured out how to allow the user to write the text to a txt file.

TODO:
	Allow the user to give a name to the outputfile - FINISHED
	Get user's first name. - FINISHED
	Get user's last name. - FINISHED
	Get user's middle name. - FINISHED
	Get user's birth month. - FINISHED
	Print all of that information to the screen. - FINISHED
	Add a feature that deletes the file after the program has closed. 
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
using namespace std;

void deleteFile(const string& fileName);

int main() {
	
	string firstName, lastName, birthMonth, middleName, fileName;

	/*This will allow the user to input the name of the file.*/
	cout << "Please enter the name of the file, then press the return key: " << endl;
	cin >> fileName;

	/*This is going to give a user a promot that will ask them to fill in their information.
	Then that information will get stored into the declared variables.*/
	cout << "Please enter your first name, then hit the return key: " << endl;
	cin >> firstName;
	cout << "Please enter your last name, then hit the return key: " << endl;
	cin >> lastName;
	cout << "Please enter your middle name, then hit the return key: " << endl;
	cin >> middleName;
	cout << "Please enter the month your were born in, then hit the return key: " << endl;
	cin >> birthMonth;

	/*This is going to declare the file that will store the user information.
	The information is stored using the variables from above.*/
	ofstream userInfo(fileName + ".txt");
	userInfo << firstName << endl;
	userInfo << middleName << endl;
	userInfo << lastName << endl;
	userInfo << birthMonth << endl;

	/*Declare a variable of type ifstream called getuserinfo.
	Declared a variable of type string called mytext.*/
	ifstream getUserInfo(fileName + ".txt");
	string myText;

	/*While loop that will use the get line command to read through
	each line in the text file and then print it out to the screen.*/
	while (getline(getUserInfo, myText)) {
		cout << myText << endl;
	}

	return 0;
}

void deleteFile(const string& fileName) {

}