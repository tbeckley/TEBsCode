//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 03 Assignment: 03
//
//  Filename: Lab0303.cpp
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
#include <iomanip>
using namespace std;

int main()
{
	//Set up constants
	const double MILES_IN_KM = 1.609344;
	const double FARENHEIT_IN_CELCIUS = 1.8;
	const double FARENHEIT_OFFSET = 32;

	double windSpeed = 0, temperature = 0;
	double windChill = 0;

	cout << "What is the wind speed (km/h): ";
	cin >> windSpeed;
	cout << "You entered " << windSpeed << " km/h" << endl;

	cout << "What is the temperature (degrees celcius): ";
	cin >> temperature;
	cout << "You entered " << temperature << " degrees celcius" << endl;

	//Unit conversions
	windSpeed = windSpeed / MILES_IN_KM;
	temperature = (temperature * FARENHEIT_IN_CELCIUS) + 32;	
	
	//Branching mechanic
	if (windSpeed <= 4)
		windChill = temperature;
	else if (windSpeed > 45)
		windChill = 1.6*temperature - 55.0;
	else
		windChill = 91.4 - (10.45 + 6.69*sqrt(windSpeed) - 0.447*windSpeed)*(91.4 - temperature) / 22.0;
	
	//Output
	windChill = (windChill - 32) / FARENHEIT_IN_CELCIUS;
	cout << "Wind chill index: " << windChill << " degrees celcius" << endl;

	system("pause");
	return 0;
}

