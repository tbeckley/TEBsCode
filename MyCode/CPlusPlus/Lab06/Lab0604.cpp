//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 06  Assignment: 04
//
//  Filename: Lab0604.cpp
//  Date submitted: 2017 - 10 - 19
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

int fibonacciRecursive(int);
int fibonacci(int);

int main(void)
{
	int n = 0;
	
	do
	{
		cout << "Enter a number greater than or equal to 0: ";
		cin >> n;
		cout << "You entered " << n << endl;
	} while (n < 0);
	
	int q = fibonacci(n);
	cout << "Non recursive: " << q << endl;
	
	int y = fibonacciRecursive(n);
	cout << "Recursive: " << y << endl;
}

int fibonacciRecursive(int input)
{
	if(input == 0)
		return 0;
	else if (input == 1)
		return 1;
	else
		return fibonacciRecursive(input - 1) + fibonacciRecursive(input - 2);
}
int fibonacci(int input)
{
	int prev1 = -1;
	int prev2 = 1;
	double sum = 0;
	
	for(int i = 0; i <= input; i++)
	{
		sum = prev1 + prev2;
		prev1 = prev2;
		prev2 = sum;
	}
	
	return sum;

}

