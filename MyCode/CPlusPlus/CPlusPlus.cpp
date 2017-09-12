// CPlusPlus.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h> 
#include <iomanip>


#include "thomasHeader.h"
using namespace std;

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

double squareMe(double x)
{
	return x*x;
}

double getIRC(double(*ptr)(double), int x)
{
	double width = .001;
	double low = ptr(x - (width / 2));
	double high = ptr(x + (width / 2));
	double irc = (high - low) / width;
	return irc;
}

int main()
{
	srand((unsigned int)time(NULL)); //SEED RANDOM NUMBER GEN

	cout << getIRC(squareMe, 4) << endl;
	system("pause");
	return 0;
}
void arrayAction()
{
	//CONSTANTS
	const int array_size = 16;
	const int row_width = 4;
	const int max_val = 100;

	int array_contents[array_size];

	//FILL
	for (int i = 0; i < array_size; i++)
		array_contents[i] = rand() % max_val;

	//PRINT
	cout << "PRE SORT" << endl;
	printArray(array_contents, array_size, row_width, 1);

	//SORT
	bubbleSort(array_contents, array_size);

	//PRINT
	cout << "SORTED" << endl;
	printArray(array_contents, array_size, row_width, 2);
}

