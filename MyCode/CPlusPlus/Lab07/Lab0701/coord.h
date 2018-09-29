#ifndef MYFILE_H
#define MYFILE_H

//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 07  Assignment: 01
//
//  Filename: coord.h
//  Date submitted: 2017 - 11 - 01
//
//  I hereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of my own efforts.  This coded solution has
//  not been plagiarized from other sources and
//  has not been knowingly plagiarized by others.
//********************************************* 

struct Point3D
{
	int coordID;
	double x;
	double y;
	double z;
	char order;
};

void get_point(Point3D &point);
void print_point(const Point3D &point);
double spatial_dist(const Point3D &p1, const Point3D &p2);
double plani_dist(const Point3D &p1, const Point3D &p2);
double ht_diff(const Point3D &p1, const Point3D &p2);
double azimuth(const Point3D &p1, const Point3D &p2);
#endif
