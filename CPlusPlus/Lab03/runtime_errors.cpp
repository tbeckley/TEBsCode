// file:    runtime_errors.cpp
//
// This program is designed to let users see some effects
// of invalid input.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int int_divisor = 0;
	cout << "I am about to compute 10 / int_divisor ..." << endl;
	cout << "Please give me a value for int_divisor: ";
	cin >> int_divisor;
	cout << "Received a value of " << int_divisor << endl;
	int int_quotient = 10 / int_divisor;
	cout << "10 / int_divisor has a value of " << int_quotient << endl;

	double double_divisor = 0.0;
	cout << "\nI am about to compute 10.0 / double_divisor ..." << endl;
	cout << "Please give me a value for double_divisor: ";
	cin >> double_divisor;
	cout << "Received a value of " << double_divisor << endl;
	double double_quotient = 10.0 / double_divisor;
	cout << "10.0 / double_divisor has a value of " << double_quotient << endl;

	double sqrt_arg = 0.0;
	cout << "\nI am about to compute sqrt(sqrt_arg) ..." << endl;
	cout << "Please give me a value for sqrt_arg: ";
	cin >> sqrt_arg;
	cout << "Received a value of " << sqrt_arg << endl;
	double sqrt_result = sqrt(sqrt_arg);
	cout << "sqrt(sqrt_arg) has a value of " << sqrt_result << endl;
	

	return 0;
}
