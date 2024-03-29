//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 08 Assignment: 01
//
//  Filename: letercount.cpp
//  Date submitted: 2017 - 11 - 07
//
//  I hereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of my own efforts.  This coded solution has
//  not been plagiarized from other sources and
//  has not been knowingly plagiarized by others.
//*********************************************

#include <string>
#include <iostream>
#include <fstream>
#include "lettercount.h"

using namespace std;
//Begin implementation file lettercount.cpp

void performCounting(ifstream &in, ofstream &out)
{
	string inputLine = getInput(in);
	int letterCount[numLetters];
	zeroArray(letterCount, numLetters);
	countLetters(inputLine, letterCount); 
	printFreqOrdered(letterCount, out);
}

void zeroArray(int array[], int size)
{
	for(int i = 0; i < size; i++)
		array[i] = 0;
}

string getInput(ifstream &in)
{
	string s;
	getline( in, s, '.' );
	return s;
}

void countLetters(string inputLine, int letters[])
{
	for(int i = 0; i < inputLine.length(); i++)
		if(inputLine[i] >= 'a' && inputLine[i] <= 'z')
			letters[inputLine[i]-'a']++;
}

void printFreq(int letters[]) //DEBUG FUNCTION
{
	for(int i = (int)'a'; i <= (int)'z'; i++)
		cout << char(i) << " | " << letters[i-'a'] << endl;
}

void printFreqOrdered(int letters[], ofstream &out) //DEBUG FUNCTION
{
	int max = -1;
	for(int i = 0; i < numLetters; i++)
		if(letters[i] > max)
			max=letters[i];
	
	while(max > 0)
	{
		for(int i = 0; i < numLetters; i++)
		{
			if(letters[i] == max)
			{
				out << (char)(i+97) << " | " << letters[i] << endl;
				cout << (char)(i+97) << " | " << letters[i] << endl;
			}
		}
		max--;
	}
}
