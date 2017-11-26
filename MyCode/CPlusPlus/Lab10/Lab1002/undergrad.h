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

    ~Undergrad();

    void enter_grades();
    void print_grades();

    void print();

    PassStatus get_status();
    void determine_status();

private:
    char _term;
    int _currentYear;

    int _grades[5];
    PassSatus _status;
}

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

Undergrad::~Undergrad()
{
    //NOTHING HERE YET
    //TODO
}
