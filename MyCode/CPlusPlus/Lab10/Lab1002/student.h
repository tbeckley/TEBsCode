#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

class Student : public Person
{
public:
	// constructors
	Student();
	Student( int gradyear );
	Student( const string &name, const int id, const int gradyear );
	Student( const string &newname, const int newid, const int newgradyear,
			 const int day, const int month, const int year );

	// destructors
	~Student();

	// accessors
	int get_gradyear() const;
	void set_gradyear( const int gradyear );

	void change_name( const string &newname );

	void print() const;

private:
	int gradyear;  // expected graduation year of the student
};

#endif
