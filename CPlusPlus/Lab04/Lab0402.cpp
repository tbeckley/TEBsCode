//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 04  Assignment: 02
//
//  Filename: lab0402.cpp
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
	int numberToFactorial = 0;
	
	//Take input from user
	do
	{
		//Exit on bad input
		if(cin.fail())
		{
			cout << "Error taking input, exiting";
			exit(1);
		}
			
		cout << "Enter a number greater than or equal to zero: ";
		cin >> numberToFactorial;
		cout << "You entered " << numberToFactorial << endl;
	}
	while(cin.fail() || numberToFactorial < 0);

	unsigned int result = 1;
	//Calculate the factorial by multiplying down to one
	for(int i = numberToFactorial; i > 0; i--)
		result *= i;

	cout << numberToFactorial << "! = "<< result << endl;
}


