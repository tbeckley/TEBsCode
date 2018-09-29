//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 05  Assignment: 03
//
//  Filename: Lab0503.cpp
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
	cout << setprecision(12);
	
	double tolerance = 0.0;

	//Input
	do
	{
		cout << "What is the tolerance (0 <= e <= 0.1): ";
		cin >> tolerance;
	} while (!(tolerance >= 0 && tolerance <= 0.1));

	
	//Calculation / output
	int i = 0;
	double val = 0;

	double prev = 4;

	do
	{
		prev = val;
		double temp = 4.0 / ((2*i)+1);

		if (i % 2 == 0)
			val = val + temp;
		else
			val = val - temp;
		
		cout << "n = " << i+1 << "		an = " << val << endl;
		i++;
	} 
	while (fabs(val-prev) >= tolerance);
	
	system("pause");
	return 0;
}

