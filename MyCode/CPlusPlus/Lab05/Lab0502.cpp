//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 05  Assignment: 02
//
//  Filename: Lab0502.cpp
//  Date submitted: 2017 - 10 - 13
//
//  I hereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of my own efforts.  This coded solution has
//  not been plagiarized from other sources and
//  has not been knowingly plagiarized by others.
//*********************************************

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h> 
#include <iomanip>
#include <time.h>
#include <iomanip>

using namespace std;

int main(void)
{
	cout << "Welcome to Thomas' employee payroll system. Employtee types / commands:" << endl;
	cout << "M - Manager" << endl;
	cout << "H - Hourly" << endl;
	cout << "C - Comission" << endl;
	cout << "P - Pieceworkers" << endl;
	cout << "Q - Quit" << endl;
	
	char code;
	int managers = 0, hourly = 0, comission = 0, pieceworkers = 0;
	double mSalary = 0.0, hSalary = 0.0, cSalary = 0.0, pSalary = 0.0;
	
	do
	{
		cout << "Enter an employee's type code (case insensitive): ";
		cin >> code;
		
		//If lowercase, convert to uppercase
		if(code >= 'a' && code <= 'z')
			code-=32;
		
		switch(code)
		{
			//Manager case
			case 'M': 
				{
					double salary = 0;
					cout << "What is their salary (weekly): ";
					cin >> salary;
					
					mSalary+=salary;
					managers++;
				}
				break;
			//Hourly case
			case 'H':
				{
					double res = 0;
					double hours = 0;
					double wage = 0;
					
					cout << "What is their hourly wage: ";
					cin >> wage;
					
					cout << "How many hours did they work this pay period: ";
					cin >> hours;
					
					if(hours<=40)
						res+=hours*wage;
					else
						res+=(40*wage)+1.5*(hours-40)*wage;
						
					hSalary+=res;	
					hourly++;
				}
				break;
			//Comission case
			case 'C':
				{
					double sales;
					cout << "How much did they sell: ";
					cin >> sales;
					
					double income = .057*sales+250;
					cSalary+=income;
					comission++;	
				}
				break;
			//Pieceworker case
			case 'P':
				{
					double pieces = 0;
					double wage = 0;
					
					cout << "How many pieces did they make: ";
					cin >> pieces;
					
					cout << "How much do they make for each piece: ";
					cin >> wage;
					
					pSalary+=pieces*wage;
					pieceworkers++;	
				}
				break;
			//Exit case
			case 'Q': break;
			//Error case
			default: cout << "Error inputing type" << endl;	
		}
	}
	while(code != 'Q');
	
	//TALBE PRINTING ZONE
	cout << endl;
	cout << "-------------+-------+-------" << endl;
	cout << "Type         | Count | Salary" << endl;
	cout << "-------------+-------+-------" << endl;
	
	cout << "Managers     | ";
	cout << setfill(' ') << setw(5) << managers;
	cout << " | " << mSalary << endl;
	
	cout << "Hourly       | ";
	cout << setfill(' ') << setw(5) << hourly;
	cout << " | " << hSalary << endl;
	
	cout << "Comission    | ";
	cout << setfill(' ') << setw(5) << comission;
	cout << " | " << cSalary << endl;
	 
	cout << "Pieceworkers | ";
	cout << setfill(' ') << setw(5) << pieceworkers;
	cout << " | " << pSalary << endl;
	
	cout << "-------------+-------+-------" << endl;
	
	cout << "Total        | ";
	cout << setfill(' ') << setw(5) << pieceworkers+managers+hourly+comission;
	cout << " | " << pSalary+mSalary+hSalary+cSalary << endl;
	cout << "-------------+-------+-------" << endl << endl;
	
	system("pause");
	return 0;
}

