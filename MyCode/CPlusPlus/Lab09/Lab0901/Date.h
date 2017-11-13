// project:  UseDate
// file:     Date.h
//

#ifndef DATE_H
#define DATE_H

#include <cstdlib>
#include <iostream>
using namespace std;

// The Date class assumes an environment in which in modern calendar
// was in use no later than Jan. 1, 1753.
const int FIRST_VALID_YEAR = 1753;

//  Inputs:
//    year - must be >= FIRST_VALID_YEAR;
//  Returns:
//    true if year is a leap year, false otherwise.
bool is_leap(const int year);

//  Inputs:
//    year - must be >= FIRST_VALID_YEAR;
//    month - must be >= 1 and <= 12.  1 is Jan., 2 is Feb., etc.
//  Returns:
//    number of days in the month
int days_in_month(const int year, const int month);

// Notes about Date objects
//  - A Date object is either valid, which means it contains a meaningful
//    date, no earlier than Jan. 1 of FIRST_VALID_YEAR, or invalid, which
//    means that it does not contain a meaningful date.
//  - Months are numbered 1 for Jan, 2 for Feb, ..., 12 for Dec.
class Date 
{
public:
    // Creates an invalid Date object.
    Date();

    // Inputs:
    //   If the arguments correspond to the year, month and day
    //   of a valid Date, a valid Date is created using the arguments,
    //   Otherwise an invalid date is created.
    Date( const int init_year, const int init_month, const int init_day );

    // Returns true if the Date is valid, false otherwise.
    bool is_valid() const;

    // These three accessor functions may only be used with valid dates.
    int get_year() const;
    int get_month() const;
    int get_day() const;

    // Prints date on cout.
    // Uses the format yyyy.mm.dd for valid dates.
    // Prints "DATE_NOT_VALID" for invalid dates.
    void print() const;

    // May only be used with valid dates.
    // x.is_earlier_than(y) returns true if x is an earlier date
    // than y, false if x is the same day or later than y.
    bool is_earlier_than( const Date &other ) const;

    // Changes a valid date to the next date.
    // Exits if invalid date encountered.
    void advance();
    
    void check() const;
    
    void backup();

private:
    int year_;
    int month_;
    int day_;
    bool is_valid_;
};

#endif // #ifndef DATE_H
