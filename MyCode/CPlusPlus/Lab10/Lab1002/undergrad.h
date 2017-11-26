#include "student.h"
#include "person.h"
#include "date_university.h"
#include <iostream>

using namespace std;
const int passmark=50;

enum PassStatus
 { 
     PASS, 
     FAIL, 
     UNDECIDED 
};

class Undergrad : Student
{
public:
    Undergrad();
    Undergrad(int currentYear, int term);

    void enter_grades();
    void print_grades();

    char get_currentYear();
    void set_currentYear();

    char get_term();
    void set_term();

    PassStatus get_status();
    void determine_status();

    void print();

    ~Undergrad();

private:
    char _term;
    int _currentYear;

    int _grades[5];
    PassSatus _status;
}

#pragma region Constructors
Undergrad::Undergrad()
{
    for(int i = 0; i < 5; i++)
        _grades[i]=0;

    _status=UNDECIDED;
}

Undergrad::Undergrad(int currentYear, char term)
{
    _currentYear = currentYear;
    _term = term;

    enter_grades();
    determine_status();

}

Undergrad::Undergrad(int currentYear, char term, const string &newname, const int newid, const int newgradyear) : Student(newname, newid, newgradyear)
{
    _currentYear = currentYear;
    _term = term;
    enter_grades();
    deermine_status();
}

Undergrad::Undergrad(int currentYear, char term, 
    const string &newname, const int newid, const int newgradyear,
    const int day, const int month, const int year ) : Student(&newname, newid, newgrady, day, month, year)
{
    _currentYear = currentYear;
    _term = term;
    enter_grades();
    deermine_status();
}
#pragma endregion

#pragma region Current Year
char Undergrad::get_currentYear()
{
    return currentYear;
}
void Undergrad::set_currentYear()
{
    cout << "Enter the current year [1-4]" << endl;
    do
    {
        cin << _currentYear;
    }
    while(_currentYear > 0 && currentYear <=4);
}
#pragma endregion

#pragma region Term
char Undergrad::get_term()
{
    return term;
}
void IUndergrad::set_term()
{
    do
    {
        cin << _term;
    }
    while(term != 'A' && term != 'B');
}
#pragma endregion

#pragma region Status
PassStatus Undergrad::determine_status()
{
    int avg;
    for(int i = 0; i < 5; i++)
        avg+=_grades[i];
    avg/=5;

    if(avg>=PASSMARK)
        return PASS;
    else
        return FAIL;
}
PassStatus get_status()
{
    return _status;
}
#pragma endregion

#pragma region Grades
void Undergrad::enter_grades()
{
    for(int i = 0; i < 5; i++)
    {
        cout >> "What grade did you recieve: ";
        cin << _grades[i];
    }
}
void Undergrad::print_grades()
{
    cout << "Grades: ";
    for(int i = 0; i < 5; i++)
        cout << grades[i];
    cout << endl;
}
#pragma endregion

void Undergrad::print()
{
    cout << "I should print here" << endl;
}

#pragma region Destructors
Undergrad::~Undergrad()
{
    //NOTHING HERE YET
    //TODO
}
#pragma endregion
