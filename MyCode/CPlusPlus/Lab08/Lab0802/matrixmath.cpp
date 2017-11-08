//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 08 Assignment: 01
//
//  Filename: matrixmath.cpp
//  Date submitted: 2017 - 11 - 07
//
//  I hereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of my own efforts.  This coded solution has
//  not been plagiarized from other sources and
//  has not been knowingly plagiarized by others.
//*********************************************
#include<iostream>
#include<fstream>
#include "matrixmath.h"

using namespace std;

//Enable writing to either a file or the screen by using the parent class ostream
void display_matrix(ostream &out, const int matrix[][100], const int row, const int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            out << matrix[i][j] << " ";
        out << endl;
    }
}

void badDimension()
{
    cout << "Bad matrix dimensions";
    exit(1);
}

void init_100_big_array(int array[][100], const int rows)
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < 100; j++)
            array[i][j] = 0;
}

void mutliply_100_matrices(int res[][100], const int a[][100], const int b[][100], const int resCol, const int resRow, const int numberIterations)
{
    /*Dimensions of a and b:
    A: resRow x numberIterations 
    B: numberIterations x resCol*/
    for (int i = 0; i < resRow; i++)
        for (int j = 0; j < resCol; j++)
            for (int k = 0; k < numberIterations; k++)
                res[i][j] += a[i][k] * b[k][j];
}

void calc_result(ifstream &in, ostream &out)
{
    int aRow = 0, aCol = 0, bRow = 0, bCol = 0;
    int resRow = 0, resCol = 0;

    int a[100][100];
    init_100_big_array(a, 100);
    
    int b[100][100];
    init_100_big_array(b, 100);

    int res[100][100];
    init_100_big_array(res, 100);

    //Intake a dimensions and check
    in >> aRow >> aCol;
    if (aRow > 100 || aCol > 100)
        badDimension();

    //Read matrix a and echo it back
    for (int i = 0; i < aRow; i++)
        for (int j = 0; j < aCol; j++)
            in >> a[i][j];

    cout << "Matrix A: " << endl;
    display_matrix(cout, a, aRow, aCol);

    //Intake b dimensions and check
    in >> bRow >> bCol;
    if (bRow > 100 || bCol > 100)
        badDimension();

    //Read matrix b and echo it back
    for (int i = 0; i < bRow; i++)
        for (int j = 0; j < bCol; j++)
            in >> b[i][j];
    
    cout << "Matrix B: " << endl;
    display_matrix(cout, b, bRow, bCol);

    //Check to make sure matrix is multiplicable
    if (aCol != bRow)
        badDimension();

    resRow = aRow; resCol = bCol; //Establish dimensions for the resultant matrix
    int numberIterations = aCol;  //How many items do we have to add per cell

    mutliply_100_matrices(res, a, b, resCol, resRow, numberIterations);
    display_matrix(out, res, resRow, resCol); //Write to file

    cout << "Resultant: " << endl;
    display_matrix(cout, res, resRow, resCol); ///Write to screen
}
