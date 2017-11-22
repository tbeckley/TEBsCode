#include "rational.h"

int main(void)
{
    Rational a (1,2);
    Rational b (2,4);

    cout << "A==B ";
    if(a==b)
        cout << "true";
    else
        cout << "false";

    cout << "A!=B ";
    if(a!=b)
        cout << "true";
    else
        cout << "false";

    system("pause");
    return 1;

}