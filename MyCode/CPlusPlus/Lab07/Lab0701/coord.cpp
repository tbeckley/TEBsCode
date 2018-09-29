//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 07  Assignment: 01
//
//  Filename: coord.cpp
//  Date submitted: 2017 - 11 - 01
//
//  I hereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of my own efforts.  This coded solution has
//  not been plagiarized from other sources and
//  has not been knowingly plagiarized by others.
//********************************************* 

#include "coord.h"
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

void get_point(Point3D &point) //Take input
{
	cout << "ID: ";
	cin >> point.coordID;
	cout << "Accuracy (A,B,C): ";
	cin >> point.order;
	cout << "X: ";
	cin >> point.x;
	cout << "Y: ";
	cin >> point.y;
	cout << "Z: ";
	cin >> point.z;
}

void print_point(const Point3D &point) //Display output
{
	cout << "Point "<< point.coordID<<endl;
	cout << "[x,y,z] = " <<point.x<<","<<point.y<<","<<point.z<<endl;
	cout << "Accuracy: "<<point.order << endl;
}

double spatial_dist(const Point3D &p1, const Point3D &p2)
{
	double dx = p1.x-p2.x;
	double dy = p1.y-p2.y;
	double dz = p1.z-p2.z;
	
	return sqrt(pow(dx, 2)+pow(dy,2)+pow(dz,2));
}

double plani_dist(const Point3D &p1, const Point3D &p2)
{
	double dx = p1.x-p2.x;
	double dy = p2.x-p2.y;
	
	return sqrt(pow(dx,2)+pow(dy,2));
}
double ht_diff(const Point3D &p1, const Point3D &p2)
{
	return p2.z-p1.z;
}
double azimuth(const Point3D &p1, const Point3D &p2)
{
	double dx = p2.x-p1.x;
	double dy = p2.y-p1.y;
	double x = atan2(dy,dx);
	return x;
}

