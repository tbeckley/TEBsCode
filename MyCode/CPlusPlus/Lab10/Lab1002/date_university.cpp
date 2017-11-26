// 
// file:     date_university.cpp
//

#include <iostream>
using namespace std;
#include "date_university.h"

Date::Date() : day(1), month(1), year(1990)
{
	cout << "executing Date::Date()" << endl;
}

Date::Date( const int newday, const int newmonth, const int newyear ) : 
	day(newday), month(newmonth), year(newyear)
{
	cout << "executing Date::Date( const int newday, const int newmonth, const int newyear ) :"; 
	cout << " day(newday), month(newmonth), year(newyear)" << endl;
}

Date::~Date()
{
	cout << "executing Date::~Date()" << endl;
}

void Date::print() const
{
	cout << day << "-" << month << "-" << year << endl;
}

int Date::get_day() const
{
	return day;
}

int Date::get_month() const
{
	return month;
}

int Date::get_year() const
{
	return year;
}

void Date::set_day( const int newday ) 
{
	day = newday;
}

void Date::set_month( const int newmonth ) 
{
	month = newmonth;
}

void Date::set_year( const int newyear ) 
{
	year = newyear;
}
