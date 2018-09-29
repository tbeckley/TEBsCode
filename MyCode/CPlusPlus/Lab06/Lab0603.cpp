#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

double degToRad(double);
double f(double);

int main(void)
{
	double threshold = .01;
	double target = 1 / 12;

	int i = 0;
	
	double top = 89;
	double bottom = 0;
	double middle = (top + bottom) / 2;

	while (abs(f(middle) - target) > threshold && i < 100)
	{
		cout << "Middle: " << middle << "  | f middle: " << f(middle) << "  | top: " << top << "  | Bottom: " << bottom << endl;
		if (f(middle) > target)
		{
			cout <<"Moving top down. ";
			top = (top + middle) / 2;
		}
		else
		{
			cout <<"Moving bottom up. ";
			bottom = (bottom + middle) / 2;
		}
			
		//cout << middle << ": " << f(middle) << endl;
		i++;
	}
	
	middle = top + bottom / 2;
	cout << middle << ": " << f(middle) << endl;
	
	system("pause");
	return 0;
}

double degToRad(double x)
{
	return  x * asin(1) / 180;
}
double f(double x)
{
	return tan(degToRad(x)) - sin(degToRad(x));
}

