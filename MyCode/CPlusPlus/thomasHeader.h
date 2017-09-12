#pragma once
#include <iostream>
#include <math.h>
#define PI 3.14159265358979323846
using namespace std;


//Swap to integers


//Swap two integers
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

//Bubble Sort Array
void bubbleSort(int array_contents[], int array_size)
{
	for (int x = array_size; x > 1; x--)
		for (int i = 0; i < x; i++)
			if (array_contents[i] < array_contents[i + 1])
				swapInts(&array_contents[i], &array_contents[i + 1]);
}

//Print out array in a box
void printArray(int arrayContents[], int arraySize, int rowWidth, int endLines)
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

//Binary Search - Doesn't work
/*int binarySearch(int arrayContents[], int arraySize, int target)
{
	int top = arraySize-1;
	int bottom = 0;
	int middle = 0;
	int midVal = 0;
	while (top != bottom)
	{
		int middle = floor((top + bottom) / 2);
		int midVal = arrayContents[middle];

		if (target > midVal)
			top = middle + 1;
		else if (target < midVal)
			bottom = middle-1;
		else
			return middle;
	}
	return -1;
}*/

int findInArray(int arrayContents[], int arraySize, int target)
{
	for (int i = 0; i < arraySize; i++)
		if (arrayContents[i] == target)
			return i;
	return -1;
}

//Advanced math function
class AdvMathHelper
{
public:

	int H(int val)
	{
		return (int)(val > 0);
	}
};

//
AdvMathHelper AdvMath;