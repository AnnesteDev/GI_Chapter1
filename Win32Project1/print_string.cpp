//=================================================================================================
// print_string.cpp By Frank Luna
// typed by Steven Grobler
//=================================================================================================

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string firstname = "";
	cout << "Enter your first name and press Enter: ";
	cin >> firstname;
	cout << std::endl;
	cout << "Hello, " << firstname << std::endl << std::endl;
}
