#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h> 
#include <iomanip>

using namespace std;

void part1();
void part3();



int lab4()
{
	part1();
	system("pause");
	return 0;
}

void part1()
{
	const int SECONDS_PER_MINUTE = 60;
	const int SECONDS_PER_HOUR = SECONDS_PER_MINUTE*60;
	const int SECONDS_PER_DAY = SECONDS_PER_HOUR*24;
	const int SECONDS_PER_WEEK = SECONDS_PER_DAY*7;

	int seconds = 0;
	cout << "How many seconds is it: ";
	cin >> seconds;
	cout << "You entered " << seconds << " seconds" << endl;

	int weeks = seconds / SECONDS_PER_WEEK; 
	seconds = seconds%SECONDS_PER_WEEK;
	int days = seconds / SECONDS_PER_DAY; 
	seconds = seconds%SECONDS_PER_DAY;
	int hours = seconds / SECONDS_PER_HOUR; 
	seconds = seconds%SECONDS_PER_HOUR;
	int minutes = seconds / SECONDS_PER_MINUTE; 
	seconds = seconds%SECONDS_PER_MINUTE;

	cout << "Weeks: " << weeks << endl;
	cout << "Days: " << days << endl;
	cout << "Hours: " << hours << endl;
	cout << "Minutes: " << minutes << endl;
	cout << "Seconds: " << seconds << endl;
}

void part3()
{

	const double MILES_IN_KM = 1.609344;
	const double FARENHEIT_IN_CELCIUS = 1.8;
	const double FARENHEIT_OFFSET = 32;

	double windSpeed = 0, temperature = 0;

	cout << "What is the wind speed (km/h): ";
	cin >> windSpeed;
	cout << "You entered " << temperature << " km/h";

	cout << "What is the temperature (degrees celcius): ";
	cin >> temperature;
	cout << "You entered " << temperature << " degrees celcius";

	
	windSpeed = windSpeed / MILES_IN_KM;
	temperature = (temperature * FARENHEIT_IN_CELCIUS) + 32;

	double windChill;
	if (windSpeed <= 4)

		windChill = temperature;
	else if (windSpeed > 45)
		windChill = 1.6*temperature - 55.0;
	else
		windChill = 91.4 - 
					(10.45 + 6.69*sqrt(windSpeed) - 0.447*windSpeed)*
					(91.4 - temperature) / 22.0;

	windChill = (windChill - 32) / FARENHEIT_IN_CELCIUS;
	cout << "Wind chill index: " << windChill << " degrees celcius";

}