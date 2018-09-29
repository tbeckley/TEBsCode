//
// driver for rational.cpp
//
#include <iostream>
using namespace std;
#include "rational.h"

int main()
{
	// define numerators and denominators for a pair of rational numbers
	int num1 = 7;
	int den1 = 4;
	int num2 = 3;
	int den2 = 7;

	// create rational numbers
	Rational c( num1, den1 );
	Rational d( num2, den2 );	
	// store result of calculation in object x
	Rational x;

	// print default object
	cout << "By default, x is: ";
    x.printRational();
    cout << endl << endl;

	c.printRational();
	cout << " + ";
	d.printRational();
	x = c.addition( d );
	cout << " = ";
	x.printRational();
	cout << '\n';
	x.printRational();
	cout << " = ";
	x.printRationalAsFloating();
	cout << "\nExplicit addition result: "
		<< ( ( double(num1)/den1 ) + ( double(num2)/den2 ) )
        << endl << endl;

	c.printRational();
	cout << " - ";
	d.printRational();
	x = c.subtraction( d );
	cout << " = ";
	x.printRational();
	cout << '\n';
	x.printRational();
	cout << " = ";
	x.printRationalAsFloating();
	cout << "\nExplicit subtraction result: "
        << ( ( double(num1)/den1 ) - ( double(num2)/den2 ) )
        << endl << endl;

	c.printRational();
	cout << " x ";
	d.printRational();
	x = c.multiplication( d );
	cout << " = ";
	x.printRational();
	cout << '\n';
	x.printRational();
	cout << " = ";
	x.printRationalAsFloating();
	cout << "\nExplicit multiplication result: "
        << ( ( double(num1)/den1 ) * ( double(num2)/den2 ) )
        << endl << endl;

	c.printRational();
	cout << " / ";
	d.printRational();
	x = c.division( d );
	cout << " = ";
	x.printRational();
	cout << '\n';
	x.printRational();
	cout << " = ";
	x.printRationalAsFloating();
	cout << "\nExplicit division result: "
        << ( ( double(num1)/den1 ) / ( double(num2)/den2 ) )
        << endl << endl;

   system("pause");
   return 0;
}


