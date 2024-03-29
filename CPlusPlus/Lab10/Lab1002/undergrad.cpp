//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 10  Assignment: 02
//
//  Filename: undergrad.cpp
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
#include<iostream>
#include "undergrad.h"
#include "student.h"

using namespace std;

#pragma region Constructors
Undergrad::Undergrad()
{
    for (int i = 0; i < 5; i++)
        _grades[i] = 0;

    _status = UNDECIDED;
    _currentYear = 0;
    _term='?';
}

Undergrad::Undergrad(const int currentYear, char term)
{
    _currentYear = currentYear;
    _term = term;

    enter_grades();
    determine_status();
}

Undergrad::Undergrad(const int currentYear, char term, const string &newname, const int newid, const int newgradyear) : Student(newname, newid, newgradyear)
{
    _currentYear = currentYear;
    _term = term;
    enter_grades();
    determine_status();
}

Undergrad::Undergrad(const int currentYear, char term, 
    const string& newname, const int newid, const int newgradyear, 
    const int day, const int month, const int year) : Student(newname, newid, newgradyear, day, month, year)
{
    _currentYear = currentYear;
    _term = term;
    enter_grades();
    determine_status();
}
#pragma endregion

#pragma region Current Year
char Undergrad::get_currentYear()
{
    return _currentYear;
}
void Undergrad::set_currentYear()
{
    cout << "Enter the current year [1-4]" << endl;
    do
    {
        cin >> _currentYear;
    } while (_currentYear > 0 && _currentYear <= 4);
}
#pragma endregion

#pragma region Term
char Undergrad::get_term()
{
    return _term;
}
void Undergrad::set_term()
{
    do
    {
        cin >> _term;
    } while (_term != 'A' && _term != 'B');
}
#pragma endregion

#pragma region Status
void Undergrad::determine_status()
{
    int avg;
    for (int i = 0; i < 5; i++)
        avg += _grades[i];
    avg /= 5;

    _status = avg >= passmark ? PASS : FAIL;
}
PassStatus Undergrad::get_status()
{
    return _status;
}
#pragma endregion
 
#pragma region Grades
void Undergrad::enter_grades()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "What grade did you recieve: ";
        cin >> _grades[i];
    }
}
void Undergrad::print_grades()
{
    cout << "Grades: ";
    for (int i = 0; i < 5; i++)
    {
        cout << _grades[i];
        if(i!=4)
            cout << ", ";
    }
    cout << endl;
}
#pragma endregion

void Undergrad::print()
{
    Student::print();
    cout << "Year: " <<_currentYear << "     Term: "<< _term<<"     Status: "<<_status<<endl;
    cout << "Grades: ";
    print_grades();
    cout << endl;
}

int Undergrad::age_at_convocation()
{
    Date dob = get_dateofbirth(); 
    int yearsold = get_gradyear() - dob.get_year() - 1;

    //When in the year were they born?
    if(dob.get_month()<5 ||dob.get_month()==5&&dob.get_day()<15)
        yearsold++;
        

    return yearsold;
}

#pragma region Destructors
Undergrad::~Undergrad()
{
    //No code needed specifically becaueys no memory allocated dynmaically
}
#pragma endregion
