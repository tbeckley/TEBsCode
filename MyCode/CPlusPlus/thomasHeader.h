#pragma once
#include <iostream>
#include <math.h>
#define PI 3.14159265358979323846
using namespace std;


//Swap to integers
void swapInts(int* x, int* y)
{
	int valX;
	int valY;

	valX = *x;
	valY = *y;

	int newX = valY;
	int newY = valX;

	*x = newX;
	*y = newY;
}

//BUBBLE SORT ARRAY
void bubbleSort(int array_contents[], int array_size)
{
	for (int x = array_size; x > 1; x--)
	{
		for (int i = 0; i < x; i++)
		{
			if (array_contents[i] < array_contents[i + 1])
			{
				swapInts(array_contents + 1, array_contents + 1 + i);
			}
		}
	}
}

//MATH
double DegToRad(double deg)
{
	return deg * PI / 180;
}
double RadToDeg(double rad)
{
	return rad * 180 / PI;
}

