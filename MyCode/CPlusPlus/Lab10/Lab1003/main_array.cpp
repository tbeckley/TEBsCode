#include <iostream>
using namespace std;
#include <fstream>
#include "array.h"

int main()
{
	ofstream outfile("out.txt");
	if ( outfile.fail() )
	{
		cout << "Output file could not be opened.  Exitting." << endl;
		exit(1);
	}	

	// create two arrays and print Array count
	Array integers1( 7 );
	Array integers2;

	// print integers1 size and contents
	outfile << "Size of array integers1 is "
        << integers1.get_size()
        << "\nArray after initialization:" << endl
        << integers1 << endl;

	// print integers2 size and contents
	outfile << "Size of array integers2 is "
        << integers2.get_size()
        << "\nArray after initialization:" << endl
        << integers2 << endl;

	// input and print integers1 and integers2
	cout << "Input 7 integers into 'integers1':" << endl;
	cin >> integers1;
	cout << "Input 10 integers into 'integers2':" << endl;
	cin >> integers2;
	outfile << "After input, the arrays contain:" << endl
		<< "integers1:" << endl << integers1
		<< "integers2:" << endl << integers2 << endl;

	// create array integers3 using integers1 as an
	// initializer; print size and contents
	Array integers3( integers1 );

	outfile << endl << "Size of array integers3 is "
		<< integers3.get_size()
		<< "\nArray after initialization: " << endl
		<< integers3 << endl;

	// use overloaded assignment (=) operator
	outfile << "Assigning integers2 to integers1:" << endl;
	integers1 = integers2;
	outfile << "integers1:" << endl << integers1
		<< "integers2:" << endl << integers2 << endl;

	// use overloaded equality (==) operator
	outfile << "Evaluating: integers1 == integers2" << endl;
	if ( integers1 == integers2 )
		outfile << "They are equal" << endl << endl;

	// use overloaded subscript operator to create rvalue
	outfile << "integers1[5] is " << integers1[5] << '\n';

	// use overloaded subscript operator to create lvalue
	outfile << "Assigning 1000 to integers1[5]" << endl;
	integers1[5] = 1000;
	outfile << "integers1:\n" << integers1 << endl;

	// attempt to use outfile of range subscript
	outfile << "Attempt to assign 1000 to integers1[15]" << endl;
	//integers1[15] = 1000;

	outfile.close();

    cout << "All Done!" << endl;
	system("pause");
    return 0;
}

