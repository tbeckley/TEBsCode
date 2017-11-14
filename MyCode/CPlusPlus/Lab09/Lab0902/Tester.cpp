#include <stdio.h>
#include "rational.h"

int main(void)
{
    Rational r = Rational(2,3);
    Rational r2 = Rational(1,3);

    r.printDouble(); cout << endl; 
    r.printRational(); cout << endl;

    system("Pause");
    return 0;
}
