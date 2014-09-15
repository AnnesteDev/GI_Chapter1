//=================================================================================================
// print_string.cpp By Frank Luna
// typed by Steven Grobler
//=================================================================================================

#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*string firstname = "";
	cout << "Enter your first name and press Enter: ";
	cin >> firstname;
	cout << std::endl;
	cout << "Hello, " << firstname << std::endl << std::endl;*/

	// Declare variables and define them to some default value
	char letter = 'A';
	int integer = 0;
	float dec = 0.0f;

	cout << "Enter a letter: ";
	cin >> letter;

	cout << "Enter an integer: ";
	cin >> integer;

	cout << "Enter a float number: ";
	cin >> dec;

	cout << endl;

	// Now output back the values the user entered
	cout << "Letter: " << letter << endl;
	cout << "Integer: " << integer << endl;
	cout << "Float: " << dec<< endl;
}
