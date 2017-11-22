#ifndef RATIONAL_H
#define RATIONAL_H

#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

class Rational
{
  public:
    Rational();
    Rational(int top, int bottom);

    double getDecimal() const;
    int getNumerator() const;
    int getDenominator() const;
    void setNumerator(int val);
    void setDenominator(int val);

    Rational addition(const Rational& num);
    Rational subtraction(const Rational& num);

    Rational multiplication(const Rational& num);
    Rational division(const Rational& num);
    void invert();

    void printRational() const;
    void printRationalAsFloating() const;
    
  private:
    int _neu;
    int _den;
    void reduction();
};

#endif