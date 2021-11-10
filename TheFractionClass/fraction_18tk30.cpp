//
// Created by Trevor Kirton - 20160010
//



#include "fraction_18tk30.h"


using namespace std;

#include <iostream>

FractionException::FractionException(const string& m) : message(m) {}

string& FractionException::what() {
    return message;
}

Fraction::Fraction(int t, int b) : top(t), bottom(b) {
    if (bottom == 0)
        throw FractionException("Denominator cannot be zero!");
    normalize();
}

Fraction::Fraction() : top(0), bottom(1) { }

Fraction::Fraction(int t) : top(t), bottom(1) { }

int Fraction::numerator() const {
    return top;
}

int Fraction::denominator() const {
    return bottom;
}

int Fraction::gcd(int n, int m) {
    if (m <= n && n % m == 0)
        return m;
    else if (n < m)
        return gcd(m, n);
    else
        return gcd(m, n % m);
}

void Fraction::normalize() {
    // Normalize fraction by
    // (a) moving sign to numerator
    // (b) ensuring numerator and denominator have no common divisors
    int sign = 1;
    if (top < 0) {
        sign = -1;
        top = -top;
    }
    if (bottom < 0) {
        sign = -sign;
        bottom = -bottom;
    }
    int d = 1;
    if (top > 0)
        d = gcd(top, bottom);
    top = sign * (top / d);
    bottom = bottom / d;
}

Fraction operator+(const Fraction& left, const Fraction& right) {
    Fraction result(left.numerator() * right.denominator()
                    + right.numerator() * left.denominator(),
                    left.denominator() * right.denominator());
    return result;
}

Fraction operator-(const Fraction& left, const Fraction& right) {
    Fraction result(left.numerator() * right.denominator()
                    - right.numerator() * left.denominator(),
                    left.denominator() * right.denominator());
    return result;
}

Fraction operator*(const Fraction& left, const Fraction& right) {
    Fraction result(left.numerator() * right.numerator(),
                    left.denominator() * right.denominator());
    return result;
}

Fraction operator/(const Fraction& left, const Fraction& right) {
    Fraction result(left.numerator() * right.denominator(),
                    left.denominator() * right.numerator());
    return result;
}

Fraction operator-(const Fraction& value) {
    Fraction result(-value.numerator(), value.denominator());
    return result;
}

int Fraction::compare(const Fraction& right) const {
    // Return the numerator of the difference
    return top * right.denominator()
           - bottom * right.numerator();
}

bool operator<(const Fraction& left, const Fraction& right) {
    return left.compare(right) < 0;
}

bool operator<=(const Fraction& left, const Fraction& right) {
    return left.compare(right) <= 0;
}

bool operator==(const Fraction& left, const Fraction& right) {
    return left.compare(right) == 0;
}

bool operator!=(const Fraction& left, const Fraction& right) {
    return left.compare(right) != 0;
}

bool operator>=(const Fraction& left, const Fraction& right) {
    return left.compare(right) >= 0;
}

bool operator>(const Fraction& left, const Fraction& right) {
    return left.compare(right) > 0;
}

ostream& operator<<(ostream& out, const Fraction& value) {
    out << value.numerator() << "/" << value.denominator();
    return out;
}

istream& operator>>(istream& in, Fraction& retFrac) {
    int top, bottom;
    // Read the top
    in >> top;
    // If there is more than just an enter key, read the next number
    // after skipping the / sign.
    if (in.peek() != 10) {
        char nextChar;
        in >> nextChar;
        if (nextChar == '/')
            in >> bottom;
        else
            bottom = 1;
        retFrac = Fraction(top, bottom);
    } else
        retFrac = Fraction(top);
    return in;
}

Fraction& Fraction::operator++() {
    top += bottom;
    return *this;
}

Fraction Fraction::operator++(int unused) {
    Fraction clone(top, bottom);
    top += bottom;
    return clone;
}

Fraction& Fraction::operator+=(const Fraction& right) {
    top = top * right.denominator() + bottom * right.numerator();
    bottom *= right.denominator();
    normalize();
    return *this;
}


/*
//one argument constructor that returns numerator/1
Fraction::Fraction(const int numerator) :
        numeratorVal(numerator), denominatorVal(1) {

}

//no argument constructor that returns 0/1
Fraction::Fraction(void) :
        numeratorVal(0), denominatorVal(1) {

}

//two argument constructor that returns numerator/denominator and deals with negative numbers
Fraction::Fraction(const int numerator, const int denominator) :
        numeratorVal(numerator), denominatorVal(denominator) {

    //check for denominator of 0
    if (denominatorVal == 0) {
        throw FractionException("\nError: denominator cannot be 0\n");
    }
    //check if denominator is negative
    if (denominatorVal < 0) {
        //if denominator and numerator are negative than make both positive
        if (numeratorVal < 0) {
            numeratorVal = numeratorVal * (-1);
            denominatorVal = denominatorVal * (-1);
        }
            //if only denominator is negative then make it positive and make numerator negative
        else {
            denominatorVal = denominatorVal * (-1);
            numeratorVal = numeratorVal * (-1);
        }
    }
    //call normalizer function to reduce fraction
    normalizer();
}

//accessor function for numerator value
int Fraction::numerator() {
    return numeratorVal;
}

//accessor function for denominator value
int Fraction::denominator() {
    return denominatorVal;
}

//normalizer function for reducing fractions
void Fraction::normalizer() {
    //get gcd of numerator and denominator
    int gcd = GCD(this->numeratorVal, this->denominatorVal);

    //divide numerator and denominator by gcd to reduce fraction
    this->numeratorVal = this->numeratorVal / gcd;
    this->denominatorVal = this->denominatorVal / gcd;
}

//GCD function to find greatest common divisor of two numbers
int Fraction::GCD(int numerator, int denominator) {
    //get absolute values of numerator and denominator
    int posNumerator = abs(numerator);
    int posDenominator = abs(denominator);
    //recursively call function
    if ((posDenominator <= posNumerator) && ((posNumerator % posDenominator) == 0)) {
        return posDenominator;
    } else if (posNumerator < posDenominator) {
        GCD(posDenominator, posNumerator);
    } else {
        posNumerator = posNumerator % posDenominator;
        GCD(posDenominator, posNumerator);
    }
}

//overloading for unary operators

//overloading negation
Fraction Fraction::operator-() const {
    Fraction frac;
    frac.numeratorVal = -(this->numeratorVal);
    frac.denominatorVal = this->denominatorVal;
    return frac;
}

//overloading post-increment
Fraction &Fraction::operator++() {
    numeratorVal += denominatorVal;
    return *this;
}

//overloading pre-increment
Fraction Fraction::operator++(int) {
    Fraction frac = *this;
    ++*this;
    frac.normalizer();
    return frac;
}

//overloading for binary operators

//overloading addition

//overloading addition (Two fractions)
Fraction operator+(const Fraction &frac1, const Fraction &frac2) {
    Fraction frac;
    frac.numeratorVal = (frac1.numeratorVal * frac2.denominatorVal) + (frac1.denominatorVal * frac2.numeratorVal);
    frac.denominatorVal = (frac1.denominatorVal) * (frac2.denominatorVal);
    frac.normalizer();
    return frac;
}

//overloading addition (int and fraction)
Fraction operator+(int x, const Fraction &frac) {
    Fraction fraction;
    fraction.numeratorVal = (x * frac.denominatorVal) + frac.numeratorVal;
    fraction.denominatorVal = frac.denominatorVal;
    fraction.normalizer();
    return fraction;
}

//overloading addition (fraction and int)
Fraction operator+(const Fraction &frac, int x) {
    Fraction fraction;
    fraction.numeratorVal = (x * frac.denominatorVal) + frac.numeratorVal;
    fraction.denominatorVal = frac.denominatorVal;
    fraction.normalizer();
    return fraction;
}

//overloading subtraction

//overloading subtraction (two fractions)
Fraction operator-(const Fraction &frac1, const Fraction &frac2) {
    Fraction frac;
    frac.numeratorVal = (frac1.numeratorVal * frac2.denominatorVal) - (frac1.denominatorVal * frac2.numeratorVal);
    frac.denominatorVal = frac1.denominatorVal * frac2.denominatorVal;
    frac.normalizer();
    return frac;
}

//overloading subtraction (int and fraction)
Fraction operator-(int x, const Fraction &frac) {
    Fraction fraction;
    fraction.numeratorVal = (x * frac.denominatorVal - frac.numeratorVal);
    fraction.denominatorVal = frac.denominatorVal;
    fraction.normalizer();
    return fraction;
}

//overloading subtraction (fraction and int)
Fraction operator-(const Fraction &frac, int x) {
    Fraction fraction;
    fraction.numeratorVal = (frac.numeratorVal - x * frac.denominatorVal);
    fraction.denominatorVal = frac.denominatorVal;
    fraction.normalizer();
    return fraction;
}

//overloading multiplication

//overloading multiplication (two fractions)
Fraction operator*(const Fraction &frac1, const Fraction &frac2) {
    Fraction frac;
    frac.numeratorVal = frac1.numeratorVal * frac2.numeratorVal;
    frac.denominatorVal = frac1.denominatorVal * frac2.denominatorVal;
    frac.normalizer();
    return frac;
}

//overloading multiplication (int and fraction)
Fraction operator*(int x, const Fraction &frac) {
    Fraction fraction;
    fraction.numeratorVal = x * frac.numeratorVal;
    fraction.denominatorVal = frac.denominatorVal;
    fraction.normalizer();
    return fraction;
}

//overloading multiplication (fraction and int)
Fraction operator*(const Fraction &frac, int x) {
    Fraction fraction;
    fraction.numeratorVal = x * frac.numeratorVal;
    fraction.denominatorVal = frac.denominatorVal;
    fraction.normalizer();
    return fraction;
}

//overloading division

//overloading division (two fractions)
Fraction operator/(const Fraction &frac1, const Fraction &frac2) {
    Fraction frac;
    frac.numeratorVal = frac1.numeratorVal * frac2.denominatorVal;
    frac.denominatorVal = frac1.denominatorVal * frac2.numeratorVal;
    frac.normalizer();
    return frac;
}

//overloading division (int and fraction)
Fraction operator/(int x, const Fraction &frac) {
    Fraction fraction;
    fraction.numeratorVal = frac.denominatorVal * x;
    fraction.denominatorVal = frac.numeratorVal;
    fraction.normalizer();
    return fraction;
}

//overloading division (fraction and int)
Fraction operator/(const Fraction &frac, int x) {
    Fraction fraction;
    fraction.numeratorVal = frac.numeratorVal;
    fraction.denominatorVal = frac.denominatorVal * x;
    fraction.normalizer();
    return fraction;
}

//overloading addition assignment

//overloading addition assignment (fraction)
Fraction &Fraction::operator+=(const Fraction &frac) {
    numeratorVal = (numeratorVal * frac.denominatorVal) + (denominatorVal * frac.numeratorVal);
    denominatorVal = frac.denominatorVal * denominatorVal;
    normalizer();
    return *this;
}

//overloading addition assignment (int)
Fraction &Fraction::operator+=(int x) {
    numeratorVal = numeratorVal + denominatorVal * x;
    normalizer();
    return *this;
}

//overloading comparison operators

//overloading equals operator (two fractions)
bool operator==(const Fraction &frac1, const Fraction &frac2) {
    if (frac1.numeratorVal * frac2.denominatorVal == frac1.denominatorVal * frac2.numeratorVal) {
        return true;
    } else {
        return false;
    }
}

//overloading equals operator(int and fraction)
bool operator==(int x, const Fraction &frac) {
    if (frac.numeratorVal == frac.denominatorVal * x) {
        return true;
    } else {
        return false;
    }
}

//overloading equals operator(fraction and int)
bool operator==(const Fraction &frac, int x) {
    if (frac.numeratorVal == frac.denominatorVal * x) {
        return true;
    } else {
        return false;
    }
}

//overloading not equals operator

//overloading not equals operator (two fractions)
bool operator!=(const Fraction &frac1, const Fraction &frac2) {
    if (frac1.numeratorVal * frac2.denominatorVal == frac1.denominatorVal * frac2.numeratorVal) {
        return false;
    } else {
        return true;
    }
}

//overloading not equals operator (int and fraction)
bool operator!=(int x, const Fraction &frac) {
    if (frac.numeratorVal == frac.denominatorVal * x) {
        return false;
    } else {
        return true;
    }
}

//overloading not equals operator (fraction and int)
bool operator!=(const Fraction &frac, int x) {
    if (frac.numeratorVal == frac.denominatorVal * x) {
        return false;
    } else {
        return true;
    }
}

//overloading greater than operator

//overloading greater than operator (two fractions)
bool operator>(const Fraction &frac1, const Fraction &frac2) {
    if (frac1.numeratorVal * frac2.denominatorVal > frac1.denominatorVal * frac2.numeratorVal) {
        return true;
    } else {
        return false;
    }
}

//overloading greater than operator (int and fraction)
bool operator>(int x, const Fraction &frac) {
    if (frac.denominatorVal * x > frac.numeratorVal) {
        return true;
    } else {
        return false;
    }
}

//overloading greater than operator (fraction and int)
bool operator>(const Fraction &frac, int x) {
    if (frac.numeratorVal > x * frac.denominatorVal) {
        return true;
    } else {
        return false;
    }
}

//overloading greater than or equal to

//overloading greater than or equal to (two fractions)
bool operator>=(const Fraction &frac1, const Fraction &frac2) {
    if (frac1.numeratorVal * frac2.denominatorVal >= frac1.denominatorVal * frac2.numeratorVal) {
        return true;
    } else {
        return false;
    }
}

//overloading greater than or equal to (int and fraction)
bool operator>=(int x, const Fraction &frac) {
    if (x * frac.denominatorVal >= frac.numeratorVal) {
        return true;
    } else {
        return false;
    }
}

//overloading greater than or equal to (fraction and int)
bool operator>=(const Fraction &frac, int x) {
    if (frac.numeratorVal >= x * frac.denominatorVal) {
        return true;
    } else {
        return false;
    }
}

//overloading less than operator

//overloading less than operator (two fractions)
bool operator<(const Fraction &frac1, const Fraction &frac2) {
    if (frac1.numeratorVal * frac2.denominatorVal < frac1.denominatorVal * frac2.numeratorVal) {
        return true;
    } else {
        return false;
    }
}

//overloading less than operator (int and fraction)
bool operator<(int x, const Fraction &frac) {
    if (x * frac.denominatorVal < frac.numeratorVal) {
        return true;
    } else {
        return false;
    }
}

//overloading less than operator (fraction and int)
bool operator<(const Fraction &frac, int x) {
    if (frac.numeratorVal < x * frac.denominatorVal) {
        return true;
    } else {
        return false;
    }
}

//overloading less than or equal to operator

//overloading less than or equal to operator (two fractions)
bool operator<=(const Fraction &frac1, const Fraction &frac2) {
    if (frac1.numeratorVal * frac2.denominatorVal <= frac1.denominatorVal * frac2.numeratorVal) {
        return true;
    } else {
        return false;
    }
}

//overloading less than or equal to operator (int and fraction)
bool operator<=(int x, const Fraction &frac) {
    if (x * frac.denominatorVal <= frac.numeratorVal) {
        return true;
    } else {
        return false;
    }
}

//overloading less than or equal to operator (fraction and int)
bool operator<=(const Fraction &frac, int x) {
    if (frac.numeratorVal <= x * frac.denominatorVal) {
        return true;
    } else {
        return false;
    }
}

//overloading <<
ostream &operator<<(ostream &os, const Fraction &frac) {
    //write numerator followed by / and denominator
    os << frac.numeratorVal << '/' << frac.denominatorVal;
    return os;
}

//overloading >>
istream &operator>>(istream &is, Fraction &frac) {
    //initialize string
    string userInput;
    //store input in string
    is >> userInput;
    //initialize stringstream and store input string in it
    stringstream sString(userInput);
    //initialize string and vector of strings
    string value;
    vector<string> input;
    //go through string and store the numbers on either side of the slash while ignoring the slash
    while (getline(sString, value, '/')) {
        //push numbers into vector
        input.push_back(value);
    }
    //check to see whether user input a fraction or whole number
    if (input.size() < 2) {
        //if user entered whole number then set that to the numerator and make denominator 1
        frac.setNumerator(stoi(input[0]));
        frac.setDenominator(1);
    } else if (stoi(input[1]) == 0) {
        //throw exception if user is trying to set denominator to 0
        throw FractionException("Error: denominator cannot be 0");
    } else {
        //if user entered a valid fraction then set the numerator and denominator accordingly
        frac.setNumerator(stoi(input[0]));
        frac.setDenominator(stoi(input[1]));
    }
    return is;
}

//accessor functions
void Fraction::setNumerator(int x) {
    numeratorVal = x;
    return;
}

void Fraction::setDenominator(int x) {
    denominatorVal = x;
    return;
}

FractionException::FractionException(const string &message) : message(message) {}

string &FractionException::what() { return message; }
 */