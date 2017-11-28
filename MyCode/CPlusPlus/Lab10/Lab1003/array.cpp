#include <iostream>
#include <iomanip>
#include <cstdlib>
// SD121ers - you might have to remove the relative path of
//   the following ie. change to:
//  #include "array.h"
#include "array.h"

Array::Array( const int arraySize )
{
   size = ( arraySize > 0 ? arraySize : 10 ); 
   ptr = new int[ size ];
   if ( ptr == NULL )
   {
	   cout << "Out of memory" << endl;
	   exit(1);
   }

   for ( int i = 0; i < size; i++ )
      ptr[ i ] = 0;
}

Array::Array( const Array &init ) : size( init.size )
{
      ptr = new int[size];
      for(int i = 0; i < size; i++)
            ptr[i]=init[i];
      
	// provide function body
}

Array::~Array()
{
      delete ptr;
	// provide function body
}

int Array::get_size() const 
{ 
	return size; 
}

void Array::operator=( const Array &right )
{
      if(right.size>size)
      {
            delete ptr;
            size=right.size;
            ptr = new int[size];
      }

      for(int i = 0; i < size; i++)
            ptr[i]=right[i];

	return;
}

istream &operator>>( istream &input, Array &a )
{
   for ( int i = 0; i < a.size; i++ )
      input >> a.ptr[ i ];

   return input;
}

ostream &operator<<( ostream &output, const Array &a )
{
   int i;

   for ( i = 0; i < a.size; i++ ) 
   {
      output << setw( 12 ) << a.ptr[ i ];

      if ( ( i + 1 ) % 4 == 0 ) // 4 numbers per row of output
         output << endl;
   }

   if ( i % 4 != 0 )
      output << endl;

   return output;
}

bool Array::operator==( const Array &right ) const
{
   // check arrays of different sizes
   if ( size != right.size )
      return false;    

   // check contents of arrays
   for ( int i = 0; i < size; i++ )
      if ( ptr[ i ] != right.ptr[ i ] )
         return false;

   // otherwise, arrays are equal
   return true;        
}

int &Array::operator[]( const int subscript )
{
	if ( subscript < 0 || subscript >= size )
	{
		cout << "Outside array dimensions.  Exitting"
			<< endl;
		exit(1);
	}

   return ptr[ subscript ];
}

const int &Array::operator[]( const int subscript ) const
{
	if ( subscript < 0 || subscript >= size )
	{
		cout << "Outside array dimensions.  Exitting"
			<< endl;
		exit(1);
	}

   return ptr[ subscript ];
}

