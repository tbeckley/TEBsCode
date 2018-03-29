//
// file:     date_university.h
//

#ifndef DATE_H
#define DATE_H

// simple Date class
class Date 
{
public:
	Date( );
	Date( int init_day, int init_month, int init_year );
	~Date();

	void print() const;

	int get_day() const;
	int get_month() const;
	int get_year() const;
	void set_day( const int );
	void set_month( const int );
	void set_year( const int );

private:
	int day;
	int month;
	int year;
};

#endif
