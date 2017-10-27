

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h> 
#include <iomanip>
#include <time.h>

using namespace std;

void l6part1();
void l6part2();
void l6part3();
void l6part4();

int factorial(int n)
{
	cout << "Start of factorial function with n = " << n << endl;

	int x;
	if (n == 1)
		x = 1;
	else
		x = n * factorial(n - 1);

	cout << "End of factorial function with n = " << n << endl;
	return x;
}

int main(void)
{
	cout << factorial(5);
	system("pause");
	return 0;
}

void printRoot(double real, double imaginary)
{
	cout << "X = ";

	if (real == 0 && imaginary == 0)
		cout << "0";
	else if (real != 0)
		cout << real;
	else if (imaginary != 0)
	{
		if (imaginary == -1)
			cout << "-";
		else if (imaginary != 1)
			cout << imaginary;

		cout << "i";
	}

	cout << endl;
}
void l6part1()
{
	double a, b, c;
	cout << "What is A: "; cin >> a;
	cout << "What is B: "; cin >> b;
	cout << "What is C: "; cin >> c;

	double d = (b*b) - (4 * a*c);

	if (d > 0)
	{
		printRoot((-1 * b + sqrt(d)) / (2 * a), 0);
		printRoot((-1 * b - sqrt(d)) / (2 * a), 0);
	}
	else if (d == 0)
	{
		printRoot((-1 * b) / (2 * a), 0);
	}
	else
	{
		printRoot((-1 * b / (2 * a)), sqrt(abs(d)) / (2 * a));
		printRoot((-1 * b / (2 * a)), -1 * sqrt(abs(d)) / (2 * a));
	}

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
void l6part2()
{
	//is triangle valid
	double a = 0, b = 0, c = 0;
	getSides(a, b, c);

	if (isTriangle(a, b, c))
	{

		double angle = getAngle(a, b, c);
		cout << angle << "pi rad" << endl;
	}
	else
		cout << "Invalid triangle" << endl;


	//if so calculatte
}

double degToRad(double x)
{
	return  x * asin(1) / 180;
}
double f(double x)
{
	return tan(degToRad(x)) - sin(degToRad(x));
}
void l6part3()
{
	double threshold = .01;
	double target = 1 / 12;

	double top = 89;
	double bottom = 0;
	double middle = (top + bottom) / 2;

	while (abs(f(middle) - target) > threshold)
		if (f(middle) > target)
			top = (top + middle) / 2;
		else
			bottom = (bottom + middle) / 2;

	middle = top + bottom / 2;
	cout << middle << ": " << f(middle) << endl;
}

int fibonacciRecursive(int input)
{
	if (input <= 2)
		return 1;
	else
		return fibonacciRecursive(input - 1) + fibonacciRecursive(input - 2);
}
int fibonacci(int input)
{
	int n1 = 0, n2 = 1, n3 = 1;

	for (int i = 0; i < input - 1; i++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}

	return n3;

}
void l6part4()
{
	int n = 0;

	do
	{
		cout << "Enter a number greater than zero: ";
		cin >> n;
		cout << "You entered " << n << endl;
	} while (n <= 0);

	cout << "Non recursive: " << fibonacci(n) << endl;
	cout << "Recursive: " << fibonacci(n) << endl;
}
/*Answers to question 4
1) The recursive method is easier to write, as it makes much more sense 
mathematically considering the fibonacci sequence is inherantly recursive

2) The non recursive method is significantly quicker to run, as for the recursive method it has to 
calculate every previous term in order to calculate one, then recalculate everything to calculate the next one
*/