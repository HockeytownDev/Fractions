#ifndef H_fraction
#define H_fraction

#include <iostream>

using namespace std;

class fractionType {

    /*Function prototype*/

    friend ostream& operator<<(ostream&, const fractionType&);
    friend istream& operator>>(istream&, fractionType&);

public:
    //setFraction()
    void setFraction(int lnum, int lden);

    //constructor
    fractionType(int lnum = 0, int lden = 1);

    //operator+()
    fractionType operator+(fractionType lrightFr);

    //operator*()
    fractionType operator*(fractionType lrightFr);

    //operator-()
    fractionType operator-(fractionType lrightFr);

    //operator/()
    fractionType operator/(fractionType lrightFr);

    //pre-increment
    fractionType operator++();

    //post-increment
    fractionType operator++(int);

    //pre-decrement
    fractionType operator--();

    //post-decrement
    fractionType operator--(int);

    //Overload relational operators
    bool operator==(fractionType lrightFr) const;
    bool operator!=(fractionType lrightFr) const;
    bool operator<=(fractionType lrightFr) const;
    bool operator<(fractionType lrightFr) const;
    bool operator>=(fractionType lrightFr) const;
    bool operator>(fractionType lrightFr) const;

// private variables

private:
    int numerator;
    int denominator;
};

#endif
