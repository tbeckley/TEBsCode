#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;
#include "date_university.h"

class Person
{
public:
	// constructors
	Person();
	Person( const string &name, const int id );
	Person( const string &name, const int id, 
		    const int day, const int month, const int year );

	// destructor
	~Person();

	// accessor functions
	string get_name() const;
	void set_name( const string &name );
	int get_id() const;
	void set_id( const int id );

	Date get_dateofbirth() const;
	void print_dateofbirth() const;
	// Note: could also overload '<<' to perform 'print'
	void print() const;

private:
	int id;
	string name;
	Date dateofbirth;	// example of "composition" ie. declaring an
						//   object within another class
};

#endif
