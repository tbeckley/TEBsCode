
#include "RationalNumber.h"

// can call this function 'operator+' but then will not compile because
//  compiler will not know whether to use this 'operator' or the one
//  located in the class definition
// 'operator+' can be used outside the class
RationalNumber add(const RationalNumber &a, const RationalNumber &b);

int main()
{
   cout << "Driver program for RationalNumber class." << endl << endl;

   RationalNumber c;
   RationalNumber d(4,5);
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

RationalNumber add(const RationalNumber &a, const RationalNumber &b)
{
	RationalNumber sum;

   sum.set_numerator(a.get_numerator() * b.get_denominator() + a.get_denominator() * b.get_numerator());
   sum.set_denominator(a.get_denominator() * b.get_denominator());
   return sum;
}
