//
// Created by Trevor Kirton - 20160010
//

#ifndef THEFRACTIONCLASS_FRACTION_18TK30_H
#define THEFRACTIONCLASS_FRACTION_18TK30_H

#pragma once

#include <iostream>
using namespace std;

// An exception that is thrown if an attempt is made to create a
// Fraction with a zero value denominator.
class FractionException {
public:
    FractionException(const string&);
    string& what();
private:
    string message;
};

class Fraction {
public:
    // Constructs a fraction with numerator 0 and denominator 1.
    Fraction();

    // Constructs a fraction with numerator t and denominator 1.
    Fraction(int t);

    // Constructs a fraction with given numerator and denominator.
    Fraction(int t, int b);

    // Returns the numerator.
    int numerator() const;

    // Returns the denominator.
    int denominator() const;

    // Updates a fraction by adding in another fraction value.
    Fraction& operator+=(const Fraction& right);

    // Increment fraction by 1.
    Fraction& operator++(); 			// Preincrement form
    Fraction operator++(int unused); // Postincrement form

    // Compare one fraction value to another.
    // Result is negative if less than right, zero if equal, and
    // positive if greater than right.
    int compare(const Fraction& right) const;

private:
    // Place the fraction in lowest common denominator form.
    void normalize();

    // Compute the greatest common denominator of two integer values.
    int gcd(int n, int m);

    int top;			// numerator
    int bottom;		// denominator
};

// Non-member overloaded arithmetic operators
Fraction operator+(const Fraction& left, const Fraction& right);
Fraction operator-(const Fraction& left, const Fraction& right);
Fraction operator*(const Fraction& left, const Fraction& right);
Fraction operator/(const Fraction& left, const Fraction& right);
Fraction operator-(const Fraction& value);

// Non-member overloaded boolean operators
bool operator<(const Fraction& left, const Fraction& right);
bool operator<=(const Fraction& left, const Fraction& right);
bool operator==(const Fraction& left, const Fraction& right);
bool operator!=(const Fraction& left, const Fraction& right);
bool operator>=(const Fraction& left, const Fraction& right);
bool operator>(const Fraction& left, const Fraction& right);

// Non-member stream operators
ostream& operator<<(ostream& out, const Fraction& value);
istream& operator>>(istream& in, Fraction& retFrac);


/*
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

class Fraction{
public:
    //constructors
    Fraction();
    Fraction(const int numerator);
    Fraction(const int numerator, const int denominator);

    //function to reduce fractions
    void normalizer();

    //function to calculate gcd of numerator and denominator (used by normalize function)
    int GCD(int numerator, int denominator);

    //accessor functions for numerator and denominator
    int numerator();
    int denominator();

    //overloading for unary operators

    //overloading negation
    Fraction operator-() const;

    //overloading post-increment
    Fraction& operator++();

    //overloading pre-increment
    Fraction operator++(int);



    //overloading addition assignment
    Fraction& operator+=(const Fraction& frac);
    Fraction& operator+=(int x);



    //accessor functions
    void setNumerator(int x);
    void setDenominator(int x);

private:
    //declare attributes for Fraction class
    int numeratorVal;
    int denominatorVal;


};

//overloading for binary operators

//overloading addition
Fraction operator+(const Fraction& frac1, const Fraction& frac2);
Fraction operator+(int x, const Fraction& frac);
Fraction operator+(const Fraction& frac, int x);

//overloading subtraction
Fraction operator-(const Fraction& frac1, const Fraction& frac2);
Fraction operator-(int x, const Fraction& frac);
Fraction operator-(const Fraction& frac, int x);

//overloading multiplication
Fraction operator*(const Fraction& frac1, const Fraction& frac2);
Fraction operator*(int x, const Fraction& frac);
Fraction operator*(const Fraction& frac, int x);

//overloading division
Fraction operator/(const Fraction& frac1, const Fraction& frac2);
Fraction operator/(int x, const Fraction& frac);
Fraction operator/(const Fraction& frac, int x);

//overloading comparison operators

//overloading equals operator
bool operator==(const Fraction& frac1, const Fraction& frac2);
bool operator==(int x, const Fraction& frac);
bool operator==(const Fraction& frac, int x);

//overloading not equals operator
bool operator!=(const Fraction& frac1, const Fraction& frac2);
bool operator!=(int x, const Fraction& frac);
bool operator!=(const Fraction& frac, int x);

//overloading greater than operator
bool operator>(const Fraction& frac1, const Fraction& frac2);
bool operator>(int x, const Fraction& frac);
bool operator>(const Fraction& frac, int x);

//overloading greater than or equal to
bool operator>=(const Fraction& frac1, const Fraction& frac2);
bool operator>=(int x, const Fraction& frac);
bool operator>=(const Fraction& frac, int x);

//overloading less than operator
bool operator<(const Fraction& frac1, const Fraction& frac2);
bool operator<(int x, const Fraction& frac);
bool operator<(const Fraction& frac, int x);

//overloading less than or equal to operator
bool operator<=(const Fraction& frac1, const Fraction& frac2);
bool operator<=(int x, const Fraction& frac);
bool operator<=(const Fraction& frac, int x);

//overloading <<
ostream& operator<<(ostream& os, const Fraction& frac);

//overloading >>
istream& operator>>(istream& is, Fraction& frac);

class FractionException{
public:
    //constructor for exception class
    FractionException(const string& message);
    //function to return string reference
    string& what();
private:
    //string attribute for exception class
    string message;
};
*/
#endif //THEFRACTIONCLASS_FRACTION_18TK30_H
