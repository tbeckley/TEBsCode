
#include "rational.h"

// can call this function 'operator+' but then will not compile because
//  compiler will not know whether to use this 'operator' or the one
//  located in the class definition
// 'operator+' can be used outside the class

int main()
{
   cout << "Driver program for RationalNumber class." << endl << endl;

   Rational c;
   Rational d(4,5);
   cout << "Enter first rational number: ";
   cin >> c;
   cout << "First rational number: " << c << endl;
   cout << "Enter second rational number: ";
   cin >> d;
   cout << "Second rational number: " << d << endl;

   cout << endl << c << " + " << d << " = " << ( c + d ) << endl;
   cout << endl << c << " - " << d << " = " << ( c - d ) << endl;
   cout << endl << c << " * " << d << " = " << ( c * d ) << endl;
   cout << endl << c << " / " << d << " = " << ( c / d ) << endl;

   cout << endl << c << " is: " << endl;

   cout << ( ( c > d ) ? "  > " : "  <= " ) << d;
   cout << " according to the overloaded > operator\n";

   cout << ( ( c < d ) ? "  < " : "  >= " ) << d;
   cout << " according to the overloaded < operator\n";

   cout << ( ( c >= d ) ? "  >= " : "  < " ) << d;
   cout << " according to the overloaded >= operator\n";

   cout << ( ( c <= d ) ? "  <= " : "  > " ) << d;
   cout << " according to the overloaded <= operator\n";

   cout << ( ( c == d ) ? "  == " : "  != " ) << d;
   cout << " according to the overloaded == operator\n";

   cout << ( ( c != d ) ? "  != " : "  == " ) << d;
   cout << " according to the overloaded != operator" << endl;

   system("pause");
   return 1;
}
