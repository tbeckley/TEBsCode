//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 08 Assignment: 01
//
//  Filename: main_matrixmath.h
//  Date submitted: 2017 - 11 - 07
//
//  I hereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of my own efforts.  This coded solution has
//  not been plagiarized from other sources and
//  has not been knowingly plagiarized by others.
//*********************************************

//Function of program: Read matrices from file, multiply matrices, and write end result to output file
#include <iostream>
#include <fstream>
#include "matrixmath.h"
using namespace std;

int main(void)
{
    ifstream infile("matrices.txt");
    if (infile.fail())
    {
        cout << "failed to open matrices.txt." << endl;
        exit(1);
    }

    ofstream outfile("resultant.txt");
    if (outfile.fail())
    {
        cout << "Error opening output file resultant.txt" << endl;
        exit(1);
    }

    outfile.setf(ios::fixed);
    outfile.precision(1);

    calc_result(infile, outfile);

    infile.close();
    outfile.close();

    system("pause");
    return 0;
}