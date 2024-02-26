/*Practicing using the ifstream and the ofstream

NOTES:
It seems like ofstream and ifstream are used as data types.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	/*This will open the file that is listed in the parameters.*/
	//ofstream outputTest("testfile.txt");

	/*This will write to the file.*/
	//outputTest << "This should write to the txt file.";

	/*This closes the file that is currently opened.*/
	//outputTest.close();

	/*Delcared the variables myText and inputTest.*/
	//string myText;
	//ifstream inputTest("testfile.txt");

	/*This is a while loop that should read each line and then print it out to the screen.*/
	//while (getline(inputTest, myText)) {
	//	cout << myText;
	//}
	
	string firstName, lastName;

	cout << "Please enter your first name, then hit the return key: " << endl;
	cin >> firstName;
	cout << "Please enter your last name, then hit the return key: " << endl;
	cin >> lastName;

	ofstream userInfo("user.txt");
	userInfo << firstName << endl;
	userInfo << lastName << endl;

	return 0;
}