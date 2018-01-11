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
        teb2.print();   
    }
    system("pause");
    return 0;
}