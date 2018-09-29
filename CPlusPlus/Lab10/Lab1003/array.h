#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;

class Array 
{
public:
	// default constructor; note a different method
	//  for setting the default value
   Array( const int = 10 );
   // copy constructor
   Array( const Array & );
   // destructor
   ~Array();

   // note: do not want user to modify size of array directly
   //   so, set_size not included as a member fn
   int get_size() const;

   // overloaded operators
   void operator=( const Array & );
   bool operator==( const Array & ) const;
   friend ostream& operator<<( ostream &, const Array & );
   friend istream& operator>>( istream &, Array & );

   // SD121: Don't worry about understanding overloading 
   //    '[]' operator.  This is more of an advanced topic.
   // The function definitions for these declarations are 
   //     provided for you in array.cpp.
   int& operator[]( const int );              
   const int &operator[]( const int ) const;

private:
   int size; // size of the array
   int *ptr; // pointer to first element of array
};

#endif

