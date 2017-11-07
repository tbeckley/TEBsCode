#include "stdafx.h"
using namespace std;

void swapVals(int ary[], int num1, int num2)
{
	int tmp = ary[num1];
	ary[num1] = ary[num2];
	ary[num2] = tmp;
}
void printArray(int ary[], int size)
{
	for (int i = 0; i < size; i++)
		cout << "Array [" << i << "]: " << ary[i]<<endl;
}
int main(void)
{
	srand((int)time(NULL));
	const int size = 10;
	const int maxVal = 50;
	int stuff[size];

	for (int i = 0; i < size; i++)
		stuff[i] = rand() % maxVal;

	printArray(stuff, size);

	//SORT ARRAY
	for (int i = 1; i < size; i++)
			for (int j = i; j > 0 && stuff[j] > stuff[j-1]; j--)
					swapVals(stuff, j, j - 1);

	cout << endl << "Sorted: " << endl;
	cout << "H(4)" << AdvMath::H(4) << endl;
	printArray(stuff, size);
	system("Pause");
	return 0;
}
