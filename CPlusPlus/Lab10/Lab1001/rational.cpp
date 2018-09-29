//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 10  Assignment: 01
//
//  Filename: rational.cpp
//  Date submitted: 2017 - 11 - 30
//
//  I hereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of my own efforts.  This coded solution has
//  not been plagiarized from other sources and
//  has not been knowingly plagiarized by others.
//*********************************************
#include "rational.h"

#include <cmath>
#include <iostream>

using namespace std;

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
    Rational x ( _neu*newDen/_den + num.getNumerator() * newDen / num.getDenominator(), newDen);
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

#pragma region Operator overloads

//Arithmatic
Rational operator + (const Rational& r1, const Rational& r2)
{
    int newDen = lcm(r1._den, r2._den);
    Rational x(r1._neu * newDen / r1._den + r2._neu * newDen / r2._den, newDen);
    return x;
}

Rational operator - (const Rational& r1, const Rational& r2)
{
    int newDen = lcm(r1._den, r2._den);
    Rational x(r1._neu * newDen / r1._den - r2._neu * newDen / r2._den, newDen);
    return x;
}

Rational operator * (const Rational& r1, const Rational& r2)
{
    Rational x (r1._neu*r2._neu, r2._den*r1._den);
    return x;
}
Rational operator / (const Rational& r1, const Rational& r2)
{
    Rational x (r1._neu*r2._den, r1._den*r2._neu);
    return x;
}

//Comparason
bool operator == (const Rational& r1, const Rational& r2)
{
    Rational x =r1/r2;
    return (x._neu==x._den);
}
bool operator != (const Rational& r1, const Rational& r2)
{
    return !(r1==r2);
}

bool operator > (const Rational& r1, const Rational& r2)
{
    Rational x =r1-r2;
    return (x._neu>0);
}
bool operator < (const Rational& r1, const Rational& r2)
{
    Rational x=r1-r2;
    return (x._neu<0);
}

bool operator >= (const Rational& r1, const Rational& r2)
{
    return!(r1<r2);
}
bool operator <= (const Rational& r1, const Rational& r2)
{
    return !(r1>r2);
}


//Extraction/Insertion
ostream& operator << (ostream& out, const Rational& r1)
{
    if(r1._neu == 0)
        out << 0;
    else if(r1._den == 1)
        out << r1._neu;
    else
        out << r1._neu << "/" << r1._den;
    
    return out;
}

istream& operator >> (istream& in, Rational& r1)
{
    char c; //handles the division sign
    in >> r1._neu >> c >> r1._den;
    return in;
}


#pragma endregion