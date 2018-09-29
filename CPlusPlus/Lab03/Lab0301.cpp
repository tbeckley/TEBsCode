//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 03  Assignment: 01
//
//  Filename: lab0301.cpp
//  Date submitted: 2017 - 09 - 27
//
//  I hereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of my own efforts.  This coded solution has
//  not been plagiarized from other sources and
//  has not been knowingly plagiarized by others.
//*********************************************
#include <iostream>
#include <math.h> 
using namespace std;

int main()
{
	//Setup constants
	const int SECONDS_PER_MINUTE = 60;
	const int SECONDS_PER_HOUR = SECONDS_PER_MINUTE*60;
	const int SECONDS_PER_DAY = SECONDS_PER_HOUR*24;
	const int SECONDS_PER_WEEK = SECONDS_PER_DAY*7;

	int seconds = 0;
	cout << "How many seconds is it: ";
	cin >> seconds;
	cout << "You entered " << seconds << " seconds" << endl;

	//Use divide and integer truncation to figure out the number of weeks (whole number)
	int weeks = seconds / SECONDS_PER_WEEK; 
	//Use modulus to figure out remainder in seconds
	seconds = seconds % SECONDS_PER_WEEK;
	int days = seconds / SECONDS_PER_DAY; 
	seconds = seconds % SECONDS_PER_DAY;
	int hours = seconds / SECONDS_PER_HOUR; 
	seconds = seconds % SECONDS_PER_HOUR;
	int minutes = seconds / SECONDS_PER_MINUTE; 
	seconds = seconds % SECONDS_PER_MINUTE;

	cout << "Weeks: " << weeks << endl;
	cout << "Days: " << days << endl;
	cout << "Hours: " << hours << endl;
	cout << "Minutes: " << minutes << endl;
	cout << "Seconds: " << seconds << endl;
	
	system("pause");
	return 0;
}
