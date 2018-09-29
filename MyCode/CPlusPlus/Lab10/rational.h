//*********************************************
//  Student Name:  Thomas Beckley
//  Student Number: 20703455
//
//  SYDE121    Lab: 10  Assignment: 01
//
//  Filename: rational.h
//  Date submitted: 2017 - 11 - 30
//
//  I hereby declare that this code, submitted
//  for credit for the course SYDE121, is a product
//  of my own efforts.  This coded solution has
//  not been plagiarized from other sources and
//  has not been knowingly plagiarized by others.
//*********************************************

#ifndef RATIONAL_H
#define RATIONAL_H

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

    friend Rational operator + (const Rational& r1, const Rational& r2);
    friend Rational operator - (const Rational& r1, const Rational& r2);
    friend Rational operator * (const Rational& r1, const Rational& r2);
    friend Rational operator / (const Rational& r1, const Rational& r2);

    friend bool operator > (const Rational& r1, const Rational& r2);
    friend bool operator < (const Rational& r1, const Rational& r2);
    friend bool operator >= (const Rational& r1, const Rational& r2);
    friend bool operator <= (const Rational& r1, const Rational& r2);

    friend bool operator == (const Rational& r1, const Rational& r2);
    friend bool operator != (const Rational& r1, const Rational& r2);

    friend ostream& operator << (ostream& out, const Rational& r1);
    friend istream& operator >> (istream& in, Rational& r1);

    void invert();

    void printRational() const;
    void printRationalAsFloating() const;
    
  private:
    int _neu;
    int _den;
    void reduction();
};

#endif