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

void arrayAction();

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
	cout << AdvMath.H(4) << endl;


	srand((unsigned int)time(NULL)); //SEED RANDOM NUMBER GEN

	arrayAction();

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
	bubbleSort(array_contents, array_size);
	printArrayVert(array_contents, array_size);

	int target = 0;

	while (target != -1)
	{
		cout << "What to find: ";
		cin >> target;

		if (target == -1)
			break;

		int loc = findInArray(array_contents, array_size, target);
		if (loc != -1)
			cout << "Location: " << loc << endl;
		else
			cout << "Not found" << endl;
	}

	//PRINT
	cout << "SORTED" << endl;
	printArray(array_contents, array_size, row_width, 2);
}
