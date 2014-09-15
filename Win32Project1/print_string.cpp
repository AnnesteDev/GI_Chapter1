//=================================================================================================
// print_string.cpp By Frank Luna
// typed by Steven Grobler
//=================================================================================================

#include <iostream>
#include <string>

using namespace std;

#define PRINTHELLO cout << "Hello" << endl;

int main()
{
	/*string firstname = "";
	cout << "Enter your first name and press Enter: ";
	cin >> firstname;
	cout << std::endl;
	cout << "Hello, " << firstname << std::endl << std::endl;*/

	//// Declare variables and define them to some default value
	//char letter = 'A';
	//int integer = 0;
	//float dec = 0.0f;

	//cout << "Enter a letter: ";
	//cin >> letter;

	//cout << "Enter an integer: ";
	//cin >> integer;

	//cout << "Enter a float number: ";
	//cin >> dec;

	//cout << endl;

	//// Now output back the values the user entered
	//cout << "Letter: " << letter << endl;
	//cout << "Integer: " << integer << endl;
	//cout << "Float: " << dec<< endl;

	//// Program outputs the size of various types
	//cout << "sizeof(bool)	= " << sizeof(bool) << endl;
	//cout << "sizeof(char)	= " << sizeof(char) << endl;
	//cout << "sizeof(short)	= " << sizeof(short) << endl;
	//cout << "sizeof(int)	= " << sizeof(int) << endl;
	//cout << "sizeof(long)	= " << sizeof(long) << endl;
	//cout << "sizeof(float)	= " << sizeof(float) << endl;
	//cout << "sizeof(double)  = " << sizeof(double) << endl;

	//// Demonstrates some type conversion
	//// Case 1: Convert from a less precise type to a more precise type
	//char c = 10;
	//short s = c;
	//cout << "char to short: " << s << endl;
	//
	//// Case 2: Convert from a more precise integer to a less precise integer
	//unsigned char uc = 260;
	//cout << "int to uchar: " << (int)uc << endl;

	//// Case 3: Convert from a float to an int, assuming the int can store the float's value
	//int i = 496512.5456f;
	//cout << "float to int: " << i << endl;

	//// Case 4: Convert from a float to a short, this time the int can't store the float
	//s = 496512.987123f;
	//cout << "float to short: " << s << endl;

	//PRINTHELLO
	//PRINTHELLO
	//PRINTHELLO
	//PRINTHELLO

	int k = 7;
	cout << k << endl;

	cout << "++k = " << ++k << endl;
	cout << "k++ = " << k++ << endl;

	cout << k << endl;
}
