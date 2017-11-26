#include "student.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student() : gradyear( 0 )
{
	cout << "executing Student::Student() : gradyear( 0 )" << endl;
}

Student::Student( const int newgradyear ) : gradyear( newgradyear )
{
	cout << "executing Student::Student( int newgradyear ) : gradyear( 0 )" << endl;
}

Student::Student( const string &newname, const int newid, const int newgradyear ) : 
				  Person( newname, newid ), gradyear( newgradyear )
{
	cout << "executing Student::Student(const string &newname,const int newgradyear) : "
		 << "Person(newname,newid),gradyear(newgradyear)" << endl;
}

Student::Student( const string &newname, const int newid, const int newgradyear,
				  const int day, const int month, const int year ) : 
				  Person( newname, newid, day, month, year ), gradyear( newgradyear )
{
	cout << "executing Student::Student(const string &newname,const int newgradyear) : "
		 << "Person(newname,newid),gradyear(newgradyear)" << endl;
}

void Student::change_name( const string &newname )
{
	// name = newname;    this does not compile since 'name' is private in Person class

	set_name( newname );	// this command works since 'set_name' is public in the 
							//   person class 
							// Note: 'change_name' is actually unnecessary since 
							//   Student objects will have access to the public 
							//   'set_name' Person member fn
}

Student::~Student()
{
	cout << "executing Student::~Student()" << endl;
}

int Student::get_gradyear() const
{
	return gradyear;
}

void Student::set_gradyear( const int newgradyear )
{
	gradyear = newgradyear;
}

void Student::print( ) const
{
	Person::print();
	cout << "Grad year " << gradyear << endl;
	return;
}


