//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 07  Assignment: 02
//
//  Filename: sumtwonums.cpp
//  Date submitted: 2017 - 11 - 01
//
//  I hereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of my own efforts.  This coded solution has
//  not been plagiarized from other sources and
//  has not been knowingly plagiarized by others.
//*********************************************

#include "sumtwonums.h"
#include<iostream>
#include <string>

using namespace std;


void printArray(string str, int ary[], int size) ///Debug function - will print an array nicly
{
	cout << "Array: " << str << endl;
	for(int i = 0; i < size; i++)
		cout << "["<<i<<"] - "<<ary[i] << endl;
}
void clearArray(int ary[], int size) //Zeroes out an array
{
	for(int i = 0; i < size; i++)
		ary[i]=0;
}

int intFromChar(char c) //Gets the int representation of a character - eg '2' goes to 2
{	
	return c-'0';
}

bool fillArray(int ary[], int maxSize) //Will take user input and fill an array
{
	for(int i = 0; i < maxSize && cin.peek() != '\n' && cin.peek() != '.'; i++)
  	{
  		char c; cin.get(c); //Take in C
  		
		for(int j = i; j>0; j--) //Push forward to put new character at back
				ary[j]=ary[j-1];
		
		if(0 <= intFromChar(c) && intFromChar(c) < 10)
			ary[0]=intFromChar(c); //Read new character to back
		else
			i--;
	}
	
	char x = cin.get();
	return x!='.';
}

bool addArray(int num1[], int num2[], int sum[], int maxSize) //Sums the arrays
{
	int carry = 0;
	
	for(int i = 0; i < maxSize; i++)
	{
		int val = num1[i]+num2[i]+carry;
		carry = val/10;
		sum[i] = val%10; 
	}
	return carry > 0; //If carry > 0, then there is an overflow situation!
}

int getNumDigits(int number[], int size) ///Get the number of the digits
{
	int i = size;
	for(i = size; i>0 && number[i-1] == 0; i--);
	return i;
}

void printNumComma(int number[], int size) //Will print out an array all pretty like with a comma
{
	
	int digits = getNumDigits(number,size);
		
	if(digits==0) //Edge case for number is zero
		cout << "0";
		
	for(int i = digits-1; i >= 0; i--)
	{
		cout << number[i];
		if(i%3 == 0 && i > 0)
			cout << ",";
	}
}

void transcodeArray(int source[], int dest[], int size, bool zeroOut)
{
	for(int i = 0; i < size; i++)
	{
		dest[i] = source[i];
		
		if(zeroOut) //Zeroes out the array behind the transcode
			source[i] = 0;
	}
}

