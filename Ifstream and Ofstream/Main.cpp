/*Practicing using the ifstream and the ofstream

NOTES:
	It seems like ofstream and ifstream are used as data types.
	Finally figured out how to allow the user to write the text to a txt file.

TODO:
	Allow the user to give a name to the outputfile
	Get user's first name. - FINISHED
	Get user's last name. - FINISHED
	Get user's middle name.
	Get user's birth month.
	Print all of that information to the screen.
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
	
	string firstName, lastName, birthMonth, middleName;

	/*This is going to give a user a promot that will ask them to fill in their information.
	Then that information will get stored in the declared variables.*/
	cout << "Please enter your first name, then hit the return key: " << endl;
	cin >> firstName;
	cout << "Please enter your last name, then hit the return key: " << endl;
	cin >> lastName;

	/*This is going to declare the file that will store the user information.
	The information is stored using the variables from above.*/
	ofstream userInfo("user.txt");
	userInfo << firstName << endl;
	userInfo << lastName << endl;

	/*Declare a variable of type ifstream called getuserinfo.
	Declared a variable of type string called mytext.*/
	ifstream getUserInfo("user.txt");
	string myText;

	/*While loop that will use the get line command to read through
	each line in the text file and then print it out to the screen.*/
	while (getline(getUserInfo, myText)) {
		cout << myText << endl;
	}

	return 0;
}