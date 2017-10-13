

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h> 
#include <iomanip>
#include <time.h>

using namespace std;

void l5part1();
void l5part2();
void l5part3();

int main(void)
{
	l5part3();
	system("pause");
	return 0;
}

void l5part1()
{
	int size = 0;

	do
	{
		cout << "Enter the size of a triangle, an odd number less than 20: ";
		cin >> size;
	} while (!(size > 0 && size < 20 && size % 2 == 1));

	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= size; j++)
		{
			int todisplay = size - 2 * abs((size / 2 + 1) - i);

			int distanceFromMiddleColumn = abs((size / 2 + 1) - j);
			if (distanceFromMiddleColumn * 2 >= todisplay)
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}
}

void l5part2()
{

}

void l5part3()
{
	cout << setprecision(12);
	double PI = 3.14159265358979323846;

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

		/*if (i % 2 == 0)
			val = val + temp;
		else
			val = val - temp;*/

		val = (i % 2) ? val - temp : val + temp;
		
		cout << "n = " << i+1 << "		an = " << val << endl;
		i++;
	} 
	while (fabs(val-prev) >= tolerance);
}