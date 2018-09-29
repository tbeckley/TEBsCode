//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 06  Assignment: 02
//
//  Filename: Lab0602.cpp
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

void getSides(double&,double&,double&);
bool isTriangle(double,double,double);
double getAngle(double,double,double);

int main(void)
{
	double a = 0, b = 0, c = 0;
	
	getSides(a, b, c);

	if (isTriangle(a, b, c))
		cout << getAngle(a, b, c) << "pi rad" << endl;
	else
		cout << "Invalid triangle" << endl;

	system("pause");
	return 0;
}
void getSides(double &a, double &b, double &c)
{
	cout << "What is A: "; cin >> a;
	cout << "What is B: "; cin >> b;
	cout << "What is C: "; cin >> c;
	return;
}
bool isTriangle(double a, double b, double c)
{
	return (a < b + c && b < a + c && c < a + b && a > 0 && b > 0 && c > 0);
}
double getAngle(double a, double b, double c)
{
	double theta = (c*c - a*a - b*b) / (-2 * a*b);
	return acos(theta) / asin(1);
} 


