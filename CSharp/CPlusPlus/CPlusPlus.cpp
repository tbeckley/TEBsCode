// CPlusPlus.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h> 
#include <iomanip>

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

int main()
{
	srand((unsigned int)time(NULL)); //SEED RANDOM NUMBER GEN

	//CONSTANTS
	const int array_size = 16;
	const int row_width = 4;
	const int max_val = 100;

	int array_contents[array_size];


	//FILL AND PRINT
	cout << "PRE SORT" << endl;
	for (int i = 0; i < array_size; i++)
		array_contents[i] = rand() % max_val;


	printArray(array_contents, array_size, row_width,1);

	cout << "SORTED" << endl;

	//X = WHERE TO GO TO
	for (int x = array_size; x > 1; x--)
	{
		for (int i = 0; i < x; i++)
		{
			if (array_contents[i] < array_contents[i + 1])
			{
				int tmp = array_contents[i];
				array_contents[i] = array_contents[i + 1];
				array_contents[i + 1] = tmp;
			}
		}
	}
	printArray(array_contents, array_size, row_width,1);
	cout << endl;

	system("pause");
	return 0;
}
