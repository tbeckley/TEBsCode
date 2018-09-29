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
#include<iostream>
#include <string>
using namespace std;

const int numLength=20; //Maximum length of a number

void printArray(string, int[], int);
void clearArray(int[], int);
void printNum(int[], int);
int intFromChar(char n);
bool fillArray(int[], int);
bool addArray(int[], int[], int[], int);
int getNumDigits(int[], int );
void printNumComma(int[], int );
void transcodeArray(int[], int[], int, bool);
