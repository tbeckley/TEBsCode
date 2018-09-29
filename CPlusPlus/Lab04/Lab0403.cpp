//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 04  Assignment: 03
//
//  Filename: lab0403.cpp
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

int main()
{	
	//Seed random number generator
	srand(time(NULL));
	int studentInput = 0;
	int correct = 0, questions = 0;
	
	do
	{
		int num1 = rand() % 10;
		int num2 = rand() % 10;

		//Flag to say if user gets on first try
		bool perfect = true;

		//Keep taking input until it is either right or they exit
		do
		{
			cout << "How much is " << num1 << " times " << num2 << "?" << endl;
			cin >> studentInput;

			if (studentInput == num1*num2)
				cout << "Correct!" << endl;
			else
			{
				cout << "Incorrect." << endl;
				perfect = false;
			}	
		} while (studentInput != num1*num2 && studentInput != -1);

		//Marj if question is right
		if (perfect)
			correct++;

		questions++;

	} while (studentInput != -1);
	questions--;

	cout << correct << " questions were answered correctly on the first time out of " << 
		questions << " qustions total." << endl;
}
