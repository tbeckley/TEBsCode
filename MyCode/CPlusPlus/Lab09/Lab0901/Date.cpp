// project:  UseDate
// file:     Date.cpp
//

#include "Date.h"

bool is_leap( const int year )
{
    return ( ( year % 4 == 0 ) && ( year % 100 != 0 ) ) || ( year % 400 == 0 );
}

int days_in_month( const int year, const int month )
{
    const int num_days[] =
    {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    if ( month <= 0 || month > 12 )
	{
		cout << "Month value is outside of bounds. Exitting." << endl;
		system("pause");
		exit(1);
	}

    if ( year < FIRST_VALID_YEAR )
    {
    	cout << "Year is less than first valid year.  Exitting" << endl;
    	system("pause");
        exit(1);
    }

    int result = 0;

    if ( month == 2 && is_leap( year ) )
        result = 29;
    else
        result = num_days[month - 1];

    return result;
}

Date::Date()
: is_valid_( false )
{
}

Date::Date( const int init_year, const int init_month, int const init_day )
: year_( init_year ), month_( init_month ), day_( init_day )
{
    if ( year_ < FIRST_VALID_YEAR )
        is_valid_ = false;
    else if ( month_ <= 0 || month_ > 12 )
        is_valid_ = false;
    else if ( day_ <= 0 || day_ > days_in_month( year_, month_ ) )
        is_valid_ = false;
    else
        is_valid_ = true;
}

bool Date::is_valid() const
{
    return is_valid_;
}

void Date::check() const
{
	if ( ! ( is_valid() ) )
	{
		cout << "Not valid. Exitting." << endl;
		system("pause");
        exit(1);
	}
}

void Date::advance()
{
	check();
    day_++;
    if ( day_ > days_in_month( year_, month_ ) )
	{
        month_++;
        day_ = 1;
        if ( month_ > 12 )
		{
            year_++;
            month_ = 1;
        }
    }
}

void Date::backup()
{
	check();
	day_--;
	if(day_ == 0)
	{
		month_--;
		if(month_ == 0)
		{
			year_--;
			month_=12;
		}
		day_=days_in_month(year_, month_);
	}
}
int Date::get_year() const
{
	check();
   return year_;
}

int Date::get_month() const
{
	check();
   return month_;
}

int Date::get_day() const
{
	check();
   return day_;
}

void Date::print() const
{
    if ( is_valid() )
	 {
        cout << year_ << '.';
        if ( month_ < 10 )
            cout << '0';
        cout << month_ << '.';
        if ( day_ < 10 )
            cout << '0';
        cout << day_;
    }
    else
        cout << "DATE_NOT_VALID" << endl;
}

bool Date::is_earlier_than( const Date &other ) const
{
   check();
   other.check();

    bool result = false;

    if ( year_ != other.year_ )
        result = ( year_ < other.year_ );
    else if ( month_ != other.month_ )
        result = ( month_ < other.month_ );
    else
        result = ( day_ < other.day_ );

    return result;
}

