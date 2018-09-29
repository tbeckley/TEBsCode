///////////////////////////////////////////////////////////////////////
// Project: EnterData
// File:    EnterData.cpp
//
// Sys Des 121
// Lab #1: Exercise 1
//
// This program is designed to let users see some effects
// of invalid input.
///////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main()
{
	// Initializers make it easy to tell when input statements have no
	// effects on variables.
	int the_int = 4444;
	double the_double = 1.111111;

	cout << "Initial value of the_int: " << the_int << endl;
	cout << "Initial value of the_double: " << the_double << endl;

	cout << "\nPlease enter a new value for the_int: ";
	cin >> the_int;

	cout << "\nPlease enter a new value for the_double: ";
	cin >> the_double;

	cout << "\n\nFinal value of the_int: " << the_int << endl;
	cout << "Final value of the_double: " << the_double << endl << endl;
	
	system("pause");
	return 0;
}
