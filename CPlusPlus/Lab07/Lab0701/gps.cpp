//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 07  Assignment: 01
//
//  Filename: gps.cpp
//  Date submitted: 2017 - 11 - 01
//
//  I hereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of my own efforts.  This coded solution has
//  not been plagiarized from other sources and
//  has not been knowingly plagiarized by others.
//********************************************* 
#include <iostream>
#include <iomanip>
#include "coord.h"

using namespace std;

//Function of program: Display information about multiple points
int main(void)
{
	Point3D point1;
	Point3D point2;
	
	get_point(point1);
	get_point(point2);
	
	print_point(point1);
	print_point(point2);
	
	cout << endl << "     --Results--" << endl;
	cout << "Spatial distance: " << spatial_dist(point1, point2) << endl;
	cout << "Planimetric distance: " << plani_dist(point1, point2) << endl;
	cout << "Height difference: " << ht_diff(point1, point2) << endl;
	cout << "Azimuth: " << azimuth(point1, point2)<<endl;
}
