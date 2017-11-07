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
