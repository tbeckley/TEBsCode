#pragma once
#include <iostream>
using namespace std;

//BUBBLE SORT ARRAY
void bubbleSort(int array_contents[], int array_size)
{
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
}

//