//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 08 Assignment: 01
//
//  Filename: matrixmath.h
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

void display_matrix(std::ostream &out, const int matrix[][100], const int row, const int col);

void badDimension(); //Fail condition for dimensioning. Can allow for different behaviour 

void init_100_big_array(int array[][100], const int rows);

void mutliply_100_matrices(int res[][100], const int a[][100], const int b[][100], const int resCol, const int resRow, const int numberIterations);

void calc_result(std::ifstream &in,std::ostream &out);