//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 02  Assignment: 02
//
//  Filename: lab0202.cpp
//  Date submitted: 2017 - 09 - 20
//
//  I hereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of my own efforts.  This coded solution has
//  not been plagiarized from other sources and
//  has not been knowingly plagiarized by others.
//*********************************************

#include<iostream>
using namespace std;

int main()
{
	//Extablish variables to hold the amount of junior engineers, senior engineers, and total employees
	double employees = 0;
	double pctJunior = 0, pctSenior = 0;
	double junior = 0, senior = 0;
	
	//Establish constants of number of pens, pencils, and fluid for each type of staff
	const double JUNIOR_PENS = 7, SENIOR_PENS = 3, ADMIN_PENS = 6;
	const double JUNIOR_PENCILS = 8, SENIOR_PENCILS = 5, ADMIN_PENCILS = 2;
	const double JUNIOR_FLUID = 60, SENIOR_FLUID = 12, ADMIN_FLUID = 40;
	
	//Establish consants of size of each container of stationary product
	
	const double PEN_SIZE = 10, PENCIL_SIZE = 25, FLUID_SIZE = 200;
	
	//Input
	cout << "Enter the total number of employees: ";
	cin >> employees;
	
	cout << "What percentage of employees are junior engineers: ";
	cin >> pctJunior;
	
	cout << "What percentage of employees are senior engineers: ";
	cin >> pctSenior;
	
	junior = employees * pctJunior/100;
	senior = employees * pctSenior/100;
	
	//Calculate amount of pens, pencils, and fluids needed
	double pens, pencils, corrFluid;
	pencils = junior*JUNIOR_PENCILS+senior*SENIOR_PENCILS+(employees-junior-senior)*ADMIN_PENCILS;
	pens = junior*JUNIOR_PENS + senior*SENIOR_PENS+(employees-junior-senior)*ADMIN_PENS;
	corrFluid = junior*JUNIOR_FLUID+senior*SENIOR_FLUID+(employees-junior-senior)*ADMIN_FLUID;
	
	//Display amount of containers of each product needed
	cout << "Boxes of pencils needed: " << pencils/25 << endl;
	cout << "Boxes of pens needed: " << pens/10 << endl;
	cout << "Bottles of correction fluid needed: " << corrFluid/200 << endl;
	
	system("pause");
	return 0;
}
