//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 10  Assignment: 02
//
//  Filename: main_university_driver.cpp
//  Date submitted: 2017 - 11 - 30
//
//  I hereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of my own efforts.  This coded solution has
//  not been plagiarized from other sources and
//  has not been knowingly plagiarized by others.
//*********************************************
#include "undergrad.h"

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
    {
        Undergrad otherStudent;
        otherStudent.print();

        Undergrad myStudent(3, 'B', "Thomas Beckley", 20703455, 2022, 9, 5, 1999);
        myStudent.print();   
    }
    system("pause");
    return 0;
}