#ifndef UNDERGRAD_H
#define UNDREGRAD_H

#include "student.h"
#include "date_university.h"
#include <iostream>

using namespace std;

const int passmark = 50;

enum PassStatus
{
    PASS,
    FAIL,
    UNDECIDED
};

class Undergrad : public Student
{
  public:
    Undergrad();
    Undergrad(const int currentYear, char term);
    Undergrad(const int currentYear, char term, const string &newname, const int newid, const int newgradyear);
    Undergrad(const int currentYear, char term, const string &newname, const int newid, const int newgradyear, const int day, const int month, const int year);

    void enter_grades();
    void print_grades();

    char get_currentYear();
    void set_currentYear();

    char get_term();
    void set_term();

    PassStatus get_status();
    void determine_status();

    int age_at_convocation();

    void print();

    ~Undergrad();

  private:
    char _term;
    int _currentYear;

    int _grades[5];
    PassStatus _status;
};

#endif