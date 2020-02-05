#include <iostream>
#include "fractionType.h"
using namespace std;

//Define operator<<
ostream& operator<<(ostream& os, const fractionType& fraction)
{
    os << fraction.numerator << " / " << fraction.denominator;
    return os;
}

//Define operator >>
istream& operator>>(istream& is, fractionType& fraction)
{

    char ch;
    //Get numerator

    is >> fraction.numerator;
    //Read and discard

    is >> ch;
    //Get denominator

    is >> fraction.denominator;
    return is;
}

//Define operator==()
bool fractionType::operator==(fractionType lrightFr) const
{
    //Return result
    return (numerator * lrightFr.denominator == denominator * lrightFr.numerator);
}

//Define operator!=()
bool fractionType::operator!=(fractionType lrightFr) const
{
    return (numerator * lrightFr.denominator != denominator * lrightFr.numerator);
}

//Define operator<=
bool fractionType::operator<=(fractionType lrightFr) const
{
    return (numerator * lrightFr.denominator <= denominator * lrightFr.numerator);
}

//Define operator<
bool fractionType::operator<(fractionType lrightFr) const
{
    return (numerator * lrightFr.denominator < denominator * lrightFr.numerator);
}

//Define operator>=
bool fractionType::operator>=(fractionType lrightFr) const
{
    return (numerator * lrightFr.denominator >= denominator * lrightFr.numerator);
}

//Define operator>
bool fractionType::operator>(fractionType lrightFr) const
{
    return (numerator * lrightFr.denominator > denominator * lrightFr.numerator);
}

//Define constructor
fractionType::fractionType(int lnum, int ldeno)
{
    numerator = lnum;
    if (ldeno == 0)
    {
        cout << "denominator cannot be zero" << endl;
        denominator = 1;
    }
    else
        denominator = ldeno;
}

//Define setFraction()
void fractionType::setFraction(int lnum, int ldeno)
{
    numerator = lnum;
    if (ldeno == 0)
    {
        cout << "denominator cannot be zero" << endl;
        denominator = 1;
    }
    else
        denominator = ldeno;
}

//Overload operator +
fractionType fractionType::operator+(fractionType lrightFr)
{

    fractionType temp;
    temp.numerator = numerator * lrightFr.denominator + lrightFr.numerator * denominator;
    temp.denominator = denominator * lrightFr.denominator;

    return temp;
}

//Overload operator *
fractionType fractionType::operator*(fractionType lrightFr)
{
    fractionType temp;
    temp.numerator = numerator * lrightFr.numerator;
    temp.denominator = denominator * lrightFr.denominator;

    return temp;
}

//Define operator-()
fractionType fractionType::operator-(fractionType lrightFr)
{
    fractionType temp;
    temp.numerator = numerator * lrightFr.denominator - lrightFr.numerator * denominator;
    temp.denominator = denominator * lrightFr.denominator;

    return temp;
}

//Define operator/()
fractionType fractionType::operator/(fractionType lrightFr)
{
    fractionType temp;

    if (lrightFr.numerator == 0)
    {
        cout << "Cannot divide by zero" << endl;
        return *this;
    }
    else
    {
        temp.numerator = numerator * lrightFr.denominator;
        temp.denominator = lrightFr.numerator * denominator;
        return temp;
    }
}

//Overload pre-increment ++ operator
fractionType fractionType::operator++()
{
    this->numerator = this->numerator + this->denominator;
    this->denominator = this->denominator;

    return fractionType(numerator, denominator);
}

//post-increment ++ operator
fractionType fractionType::operator++(int)
{
    fractionType temp = fractionType(numerator, denominator);
    this->numerator = this->numerator + this->denominator;
    this->denominator = this->denominator;

    return temp;
}

//pre-decrement -- operator
fractionType fractionType::operator--()
{
    this->numerator = this->numerator - this->denominator;
    this->denominator = this->denominator;

    return fractionType(numerator, denominator);
}

//post-decrement -- operator
fractionType fractionType::operator--(int)
{
    fractionType temp = fractionType(numerator, denominator);
    this->numerator = this->numerator - this->denominator;
    this->denominator = this->denominator;

    return temp;
}