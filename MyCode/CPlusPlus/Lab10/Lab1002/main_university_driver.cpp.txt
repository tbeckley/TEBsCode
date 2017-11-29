#include "person.h"
#include "student.h"
// Note: SD121ers, you may have to change the above to the following:
// #include "person.h"
// #include "student.h"
#include <iostream>
using namespace std;

int main()
{
	{   // This set of brackets { } only used to provide a means to allow
	    // the objects to go out of scope; in this case, note the order in
	    // which the destructor functions are called (will be opposite to the
	    // manner that the constructor functions).  Why?  the objects are
	    // each placed on a stack after they are created.
	    
        Person person( "Bob", 99123456, 20, 10, 1980 );
	
    	cout << "Person name: " << person.get_name() << endl;
    	cout << "Person dateofbirth: ";
    	person.print_dateofbirth();
    	//  person does not have access to Student member data
    	//    nor Student member functions eg. Person objects 
    	//    can NOT call:
    	//  person.get_gradyear();
    
    	Student student( "Mary", 98111111, 2005, 20, 1, 1975 ); 
    
    	cout << "Student name: " << student.get_name() << endl;
    	cout << "Student id: " << student.get_id() << endl;
    	cout << "Student dateofbirth: ";
    	// Student object 'student' has access to Person member functions
    	student.print_dateofbirth();

    
    	cout << endl << "Print student's information: " << endl;
    	student.print();
    	cout << endl;
    
    	person.set_name( "Bob II" );
    	cout << "Person name: " << person.get_name() << endl;
    	student.set_name( "Mary II" );
    	cout << "Student name: " << student.get_name() << endl;
    	student.change_name( "Mary III" );
    	cout << "Student name: " << student.get_name() << endl;
    }
	
	system("pause");
	return 0;
}
