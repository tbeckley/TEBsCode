// project:  UseDate
// file:     UseDate.cpp
//

#include "Date.h"

int main_old()
{
    cout << "WARNING: This program is not very user-friendly.\n"
         << "If you give it invalid input it will crash.\n" << endl;

    cout << "About to do a library due date computation ... " << endl;
    cout << "Please enter all dates in this format: year month day\n"
         << "(three numbers separated by spaces)." << endl;

    int yr = 0;  // temporary storage for input from user
	int mo = 0;
	int day = 0;

    cout << "\nOn what date was the book checked out? ";
    cin >> yr >> mo >> day;
    Date check_out( yr, mo, day );
    cout << "The book was checked out on ";
    check_out.print();
    cout << endl;

    int loan_period;
    cout << "What is the loan period, in days? ";
    cin >> loan_period;
    cout << "The loan period is " << loan_period << " days." << endl;

    Date due_date;
	due_date = check_out;
    for ( int count = 1; count <= loan_period; count++ )
        due_date.advance();
    cout << "The due date is ";
    due_date.print();
    cout << endl;

    cout << "What is the date today? ";
    cin >> yr >> mo >> day;
    Date today( yr, mo, day );
    cout << "Today is ";
    today.print();
    cout << endl;
    if ( today.is_earlier_than( due_date ) )
        cout << "The book is not due yet." << endl;
    else if( due_date.is_earlier_than( today ) )
        cout << "The book is overdue." << endl;
    else
        cout << "The book is due today." << endl;
        
    system("pause");
    return 0;
}

int main(void)
{
	int y=0, m=0, d=0;
	//DUE DATE
	cout << "When is the flight?";
	cin >> y >> m >> d;
	
	Date flight_date(y,m,d);
	cout << "The flight is on ";
	flight_date.print();
	cout << endl;
	
	//TODAY
	/*cout << "What is the date today? ";
    cin >> y >> m >> d;
    Date today( y, m, d);
    cout << "Today is ";
    today.print();
    cout << endl;*/
	
	int ticketDate = 0;
	cout << "How how many days in advance do you want to purchase tickets?";
	cin >> ticketDate;
	
	for(int i = 0; i < ticketDate; i++)
		flight_date.backup();
		
	cout << "Tickets must be puchased on or before ";
	flight_date.print();
	cout << endl;
	
	system("pause");
	return 0;
}
