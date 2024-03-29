//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 08 Assignment: 01
//
//  Filename: mainlettercount.cpp
//  Date submitted: 2017 - 11 - 07
//
//  I hereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of my own efforts.  This coded solution has
//  not been plagiarized from other sources and
//  has not been knowingly plagiarized by others.
//*********************************************

//Program function: Count the frequency of lower case letters in a string and write the result to a file
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <ctime>
#include <string>
#include "letterCount.h"

using namespace std;

int main (void)
{
	string inputFileName = "input.txt";
	cout << "Where are you inputing from? ";
	cin >> inputFileName;

	if(inputFileName.find(".txt")==-1)
		inputFileName.append(".txt"); // Adds file extension if they forgot it

	ifstream instream(inputFileName.c_str());
	ofstream outstream (outputFile.c_str());
	cout << "Fail: " << outstream.fail() << endl;
	cout << "Open: " << outstream.is_open() << endl;

	performCounting(instream, outstream);

	instream.close();
	outstream.close();

	system("pause");
	return 42; //The answer to it all :-)
}

no
