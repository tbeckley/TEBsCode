#pragma once
#include "stdafx.h"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h> 
#include <iomanip>
#define PI 3.14159265358979323846
using namespace std;

//Swap two integers
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h> 
#include <iomanip>
#include <time.h>

/*void swapInts(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

//Bubble Sort Array
void bubbleSort(int array_contents[], int array_size)
{
	for (int x = array_size; x > 1; x--)
		for (int i = 0; i < x; i++)
			if (array_contents[i] < array_contents[i + 1])
				swapInts(&array_contents[i], &array_contents[i + 1]);
}*/

//Print out array in a box
void printArrayBox(int arrayContents[], int arraySize, int rowWidth, int endLines)
{
	for (int i = 0; i < ceil(arraySize / rowWidth); i++)
	{
		for (int c = 0; c < rowWidth; c++)
		{
			int arrayLocation = i*rowWidth + c;
			cout << setfill('0') << setw(2) << arrayContents[arrayLocation];
			if (rowWidth - c > 1)
				cout << ' ';
		}
		cout << endl;
	}
	for (int i = 0; i < endLines; i++)
		cout << endl;
}
void printArrayVert(int arrayContents[], int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << setfill('0') << setw(2) << i << ": ";
		cout << setfill('0') << setw(2) << arrayContents[i] << endl;
	}
}

//Find in array
int findInArray(int arrayContents[], int arraySize, int target)
{
	for (int i = 0; i < arraySize; i++)
		if (arrayContents[i] == target)
			return i;

	return -1;
}

//Get the length of an integer
int intLength(int x)
{
	return (int)floor(log10(abs(x))) + 1;
}

//Advanced math functions
class AdvMath
{
public:
	//HEAVISIDE
	static int H(int val)
	{
		return (int)(val > 0);
	}

	//INSTANT RATE OF CHANGE - VERY EXPERIMENTAL
	static double getIRC(double(*ptr)(double), int x)
	{
		double width = .001;
		double low = ptr(x - (width / 2));
		double high = ptr(x + (width / 2));
		double irc = (high - low) / width;
		return irc;
	}

	//HERON'S FORMULA FOR AREA OF A TRIANGLE
	static double heronFormula(double a, double b, double c)
	{
		double s = (a + b + c) / 2;
		return sqrt(s*(s - a)*(s - b)*(s - c));
	}

};

//PADS NUMBER WITH COMMAS
void printComma(int x)
{
	int digits = intLength(x);

	for (int i = digits - 1; i >= 0; i--)
	{
		int val = (int)(x / pow(10, i));
		val = val % 10;
		cout << val;
		if (i % 3 == 0 && i != 0)
			cout << ",";
	}
	cout << endl;
}
