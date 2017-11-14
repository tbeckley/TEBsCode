#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

class Rational
{
  public:
    Rational();
    Rational(int top, int bottom);
    double getDecimal();
    double getNumerator();
    double getDenominator();
    void setNumerator(int val);
    void setDenominator(int val);

    void add(Rational num);
    void subtract(Rational num);

    void multiply(Rational num);
    void divide(Rational num);
    void invert();

    void printRational();
    void printDouble();
    void simplify();
  private:
    int _neu;
    int _den;
};

#pragma region Constructors
//Constructors
Rational::Rational()
{
    _neu = 0;
    _den = 0;
}
Rational::Rational(int top, int bottom)
{
    _neu = top;
    _den = bottom;
}
#pragma endregion

#pragma region Getters / Setterss
//Accesor functions 'getters and setters'
double Rational::getNumerator()
{
    return _neu;
}
double Rational::getDenominator()
{
    return _den;
}
void Rational::setNumerator(int val)
{
    _neu = val;
}
void Rational::setDenominator(int val)
{
    _neu = val;
}
double Rational::getDecimal()
{
    return (double)_neu/_den;
}
#pragma endregion

#pragma region Helper functions

int lcm(int a, int b)
{
    for (int i = a > b ? a : b; i <= a * b; i++)
        if (i % a == 0 && i % b == 0)
            return i;
}

int gcf(int a, int b)
{
    for (int i = a > b ? b : a; i > 0; i--)
        if (b % i == 0 && b % i == 0)
            return i;

    return 1;
}

void Rational::simplify()
{
    //If something is negative
    if (_neu * _den < 0)
    {
        _neu = -1 * abs(_neu);
        _den = abs(_den);
    }
    else if (_den < 0 && _neu < 0) //Both negative
    {
        _neu *= -1;
        _den *= -1;
    }

    int l = gcf(abs(_neu), abs(_den));
    _neu /= l;
    _den /= l;
}

void Rational::invert()
{
    int tmp = _neu;
    _neu = _den;
    _den = tmp;
}

#pragma endregion

#pragma region Assignment functions

void Rational::add(Rational num)
{
    num.simplify();
    simplify(); //LOWEST FORM

    int newDen = lcm(num.getDenominator(), _den);
    _neu = _neu * newDen / _den + num.getNumerator() * newDen / num.getDenominator();
    _den = newDen;
    //simplify();
}
void Rational::subtract(Rational num)
{
    num.simplify();
    num.setNumerator(num.getNumerator() * -1);
    add(num);
}
void Rational::multiply(Rational num)
{
    _neu *= num.getNumerator();
    _den *= num.getDenominator();
    simplify();
}
void Rational::divide(Rational num)
{
    num.simplify();
    num.invert();
    multiply(num);
}
void Rational::printRational()
{
    cout << _neu << "/" << _den;
}
void Rational::printDouble()
{
    cout << getDecimal();
}

#pragma endregion