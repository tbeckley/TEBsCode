
#include "rational.h"

#pragma region Constructors
//Constructors
Rational::Rational()
{
    _neu = 1;
    _den = 1;
}
Rational::Rational(int top, int bottom)
{
    _neu = top;
    _den = bottom;
    reduction();
}
#pragma endregion

#pragma region Getters / Setterss
//Accesor functions 'getters and setters'
int Rational::getNumerator() const
{
    return _neu;
}
int Rational::getDenominator() const
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
double Rational::getDecimal() const
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
        if (b % i == 0 && a % i == 0)
            return i;

    return 1;
}

void Rational::reduction()
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

Rational Rational::addition(const Rational& num)
{
    int newDen = lcm(num.getDenominator(), _den);
    int f1 = _neu*newDen/_den;
    int f2 = num.getNumerator() * newDen / num.getDenominator();
    int top=f1+f2;

    Rational x (top,newDen);

    return x;
}
Rational Rational::subtraction(const Rational& num)
{
    int newDen = lcm(num.getDenominator(), _den);
    Rational x(_neu * newDen / _den - num.getNumerator() * newDen / num.getDenominator(), newDen);
    return x;
}
Rational Rational::multiplication(const Rational& num)
{
    return Rational(_neu * num.getNumerator(), _den * num.getDenominator());
}
Rational Rational::division(const Rational& num)
{
    return Rational(_neu * num.getDenominator(), _den * num.getNumerator());
}
void Rational::printRational() const
{
    cout << _neu << "/" << _den;
}
void Rational::printRationalAsFloating() const
{
    cout << getDecimal();
}

#pragma endregion
