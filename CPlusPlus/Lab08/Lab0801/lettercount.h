//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 08 Assignment: 01
//
//  Filename: lettercount.h
//  Date submitted: 2017 - 11 - 07
//
//  I hereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of my own efforts.  This coded solution has
//  not been plagiarized from other sources and
//  has not been knowingly plagiarized by others.
//*********************************************

#ifndef LETTERCOUNT_H
#define LETTERCOUNT_H
//Begin header file lettercount.h
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

const string outputFile = "output.txt";
const int numLetters = 26;

void performCounting(ifstream&, ofstream&);
void zeroArray(int[], int);
string getInput(ifstream&);
void countLetters(string inputLine, int letters[]);
void printFreq(int letters[]);
void printFreqOrdered(int letters[], ofstream&);

//End header file lettercount.h
#endif
