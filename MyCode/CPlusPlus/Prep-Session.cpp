#include "stdafx.h"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h> 
#include <iomanip>
#include <time.h>
#include "thomasHeader.h"

using namespace std;

int oldmain()
{
	const int size = 100;
	//srand(time((unsigned int)NULL));
	int num_array[size];

	for (int i = 0; i < size; i++)
		num_array[i] = rand() % 100;

	cout << "Random" << endl;
	for (int i = 0; i < size; i++)
		cout << i << " | " << num_array[i]<< endl;
	cout << endl;
	bubbleSort(num_array, 100);

	cout << "Sorted" << endl;
	for (int i = 0; i < size; i++)
		cout << i << " | " << num_array[i] << endl;

	cout << endl << "WigglySorted" << endl;

	int final_array[size];
	for (int i = 0; i < size/2; i++)
	{
		final_array[2 * i] = num_array[i];
		final_array[2 * i + 1] = num_array[99 - i];
	}
	for (int i = 0; i < size; i++)
		cout << i << " | " << final_array[i] << endl;
	cout << endl;

	system("pause");
	return 0;
}