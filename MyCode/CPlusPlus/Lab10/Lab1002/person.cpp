#include "person.h"
#include <string>
#include <iostream>
using namespace std;

// Note: for demonstration purposes only, this code has cout statements in the 
//  constructors and destructors; note how these are called when the code is 
//  executed.  Such output is not normally part of constructors/descructors.

Person::Person()
{
	name = "nobody";
	id = 0;
	cout << "executing Person::Person()" << endl;
}

Person::Person( const string &newname, const int newid ): name( newname ), id( newid )
{
	cout << "executing Person::Person(const string &newname, const int newid)" 
		 << endl;
}

Person::Person( const string &newname, const int newid, 
			    const int day, const int month, const int year ) : 
				dateofbirth( day, month, year ), name( newname ), id( newid )
{
	cout << "executing Person::Person(const string &newname,const int newidconst,";
	cout << "const int day,const int month,const int year) : dateofbirth(day,month,year))" 
		 << endl;
}

Person::~Person()
{
	cout << "executing Person::~Person()" << endl;
}

string Person::get_name() const
{
	return name;
}

void Person::set_name( const string &newname )
{
	name = newname;
}

int Person::get_id() const
{
	return id;
}

Date Person::get_dateofbirth() const
{
	return dateofbirth;
}

void Person::print_dateofbirth() const
{
	dateofbirth.print();  // able to call Date public member function
}

void Person::print() const
{
	cout << "Name: " << name;
	cout << "\tId: " << id << "\tDate of birth: ";
	dateofbirth.print();
}
