#include "undergrad.h"

#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
    {
        Undergrad teb;
        cout << "Status: " << teb.get_status() << endl;

        Undergrad teb2(1, 'A', "Thomas Beckley", 20703455, 2022, 9, 6, 1999);
        cout << "Status: " << teb2.get_status() << endl;
        cout << "Age at c: " << teb2.age_at_convocation() << endl;
        cout << "Name :" << teb2.get_name() << endl;
    }
    system("pause");
    return 0;
}