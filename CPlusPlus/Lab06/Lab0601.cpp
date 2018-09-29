//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 06  Assignment: 01
//
//  Filename: Lab0601.cpp
//  Date submitted: 2017 - 10 - 19
//
//  I hereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of my own efforts.  This coded solution has
//  not been plagiarized from other sources and
//  has not been knowingly plagiarized by others.
//*********************************************
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>

using namespace std;

void printRoot(double re, double im);
void getInput(double& a, double& b, double& c);
void computeResults(double a, double b, double c, double& real1, double& real2, double& im1, double& im2);

int main(void)
{
	double a, b, c;
	getInput(a,b,c);
	
	double real1 = 0, imaginary1 = 0;
	double real2 = 0, imaginary2 = 0;
	computeResults(a,b,c, real1, real2, imaginary1, imaginary2);
	
	printRoot(real1, imaginary1);
	if(!(real2 == 0 && imaginary2 == 0))
		printRoot(real2, imaginary2);
}

void getInput (double &a, double &b, double &c)
{
	cout << "What is A: "; cin >> a;
	cout << "What is B: "; cin >> b;
	cout << "What is C: "; cin >> c;
}

void computeResults(double a, double b, double c, double& real1, double& real2, double& im1, double& im2)
{
	double d = (b*b) - (4 * a*c);
	
	if (d > 0)
	{
		real1 = (-1 * b + sqrt(d)) / (2 * a); im1 = 0;
		real2 = (-1 * b - sqrt(d)) / (2 * a); im2 = 0;
	}
	else if (d == 0)
	{
		real1 = (-1 * b) / (2 * a);
	}
	else
	{
		real1 = -1 * b / (2 * a); im1 = sqrt(abs(d)) / (2 * a);
		real2 = -1 * b / (2 * a); im2 = -1 * sqrt(abs(d)) / (2 * a);
	}
}

void printRoot(double real, double imaginary)
{
	cout << "X = ";

	if (real == 0 && imaginary == 0)
		cout << "0";
	else if(real == 0)
		cout << imaginary << "i";
	else if(imaginary == 0)
		cout << real;
	else
	{
		if(imaginary < 0)
			cout << real << " - " << abs(imaginary) << "i";
		else
			cout << real << " + " << imaginary << "i";	
	}
	
	cout << endl;
}

