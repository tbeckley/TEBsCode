//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 04  Assignment: 01
//
//  Filename: lab0401.cpp
//  Date submitted: 2017 - 10 - 04
//
//  I hereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of my own efforts.  This coded solution has
//  not been plagiarized from other sources and
//  has not been knowingly plagiarized by others.
//*********************************************

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h> 
#include <iomanip>
using namespace std;

int main(void)
{
	int size = 0;

	cout << "What is the size of the square: ";
	cin >> size;
	cout << "The size of the square is: " << size << endl;
	
	//Input Verification
	while (6 > size || size > 20 || size%2 != 0)
	{
		cout << "Error. Size must be even and between 6 and 20. What is the size of the square: ";
		cin >> size;
		cout << "The size of the square is: " << size << endl;
	}	

	//Outermost loop - rows
	int x = 0, y = 0;
	while (y < size)
	{
		x = 0;
		//Innermost loop - columns
		while (x < size)
		{
			if (x == 0 || x == size - 1 || y == 0 || y == size - 1)
				cout << "*";
			else
				cout << " ";

			x++;
		}
		cout << endl;
		y++;
	}
	
	system("pause");
	return 0;
	
}


