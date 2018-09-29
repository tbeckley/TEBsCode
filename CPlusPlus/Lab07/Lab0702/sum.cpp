//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 07  Assignment: 02
//
//  Filename: sum.cpp
//  Date submitted: 2017 - 11 - 01
//
//  I hereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of my own efforts.  This coded solution has
//  not been plagiarized from other sources and
//  has not been knowingly plagiarized by others.
//*********************************************

#include <iostream>
#include <string>
#include "sumtwonums.h"
using namespace std;

int main(int argc, char** argv) 
{	
	int num1[numLength]; clearArray(num1,numLength); //Take in and clear arrays
	int num2[numLength]; clearArray(num2,numLength);
	int sum[numLength]; clearArray(sum,numLength);
	cout << "Welcome to my number adding program." << endl;
		
		
	//User input
	cout <<"First Number:  "; fillArray(num1, numLength);
	cout <<"You entered: "; printNumComma(num1, numLength); cout << endl;
	cout <<"Second Number:  "; fillArray(num2, numLength);
	cout <<"You entered: "; printNumComma(num2, numLength); cout << endl;
	
	bool res = addArray(num1,num2,sum,numLength);	
	cout << "Sum: "; printNumComma(sum, numLength); cout << endl; //Print out sum
		
	//Overflow check
	if(res) 
		cout << "Overflow detected!" << endl;
	
	cout << "Enter '.' at any time to exit" << endl;
	
	//Furthur input
	bool flag=true;
	
	do
	{
		
		clearArray(num2, numLength);
		cout <<"Another Number:  "; 
		flag = fillArray(num2, numLength);
		
		if(flag)
		{
			transcodeArray(sum,num1,numLength, true);
			cout <<"You entered: "; printNumComma(num2, numLength); cout << endl;
			
			bool res = addArray(num1,num2,sum,numLength);	
			cout << "Sum: "; printNumComma(sum, numLength); cout << endl;
			clearArray(num2, numLength);
		
			if(res) cout << "Overflow detected!" << endl;
		}
	}
	while(flag);
	
	cout << "Thank you for using my program! Final sum: "; printNumComma(sum, numLength); cout << endl;
	
	system("Pause");return 0;
}
