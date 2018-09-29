//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 05  Assignment: 01
//
//  Filename: Lab0501.cpp
//  Date submitted: 2017 - 10 - 13
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
#include <time.h>


using namespace std;

int main(void)
{
	int size = 0;

	//Take the user input until it is valid
	do
	{
		cout << "Enter the size of a triangle, an odd number less than 20: ";
		cin >> size;
	} while (!(size > 0 && size < 20 && size % 2 == 1));
	
	//Iterate through the loop. Inner loop across a row, outer loop down a column
	for (int i = 1; i <= size; i++)
	{	
		//Calculate the number of asteriscks to display
		int todisplay = size - 2 * abs((size / 2 + 1) - i);

		for (int j = 1; j <= size; j++)
		{			
			int distanceFromMiddleColumn = abs((size / 2 + 1) - j);
			
			//Decide whetther to print an asterisk or not
			if (distanceFromMiddleColumn * 2 >= todisplay)
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
}

