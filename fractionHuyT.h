/**
 * Program Name: fractionHuyT.h
 * Discussion:	 Fraction Header
 * Written By:	 Huy Tran
 * Date:		 2020/12/15
 */

#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
using namespace std;
class FractionHuyT {
public:
    FractionHuyT();
    FractionHuyT(const FractionHuyT& that);
    FractionHuyT(int n, int d);

    ~FractionHuyT();

    void setNum(int n);
    int getNum(void) const;

    void setDenom(int d);
    int getDenom(void) const;

    void update(int n, int d);

    void print(void) const;

    int gcd(int n, int d);

    FractionHuyT add(const FractionHuyT&) const;
    FractionHuyT subtract(const FractionHuyT&) const;
    FractionHuyT multiply(const FractionHuyT&) const;
    FractionHuyT divide(const FractionHuyT&) const;
        
    FractionHuyT& operator=(const FractionHuyT&);
    FractionHuyT operator+(const FractionHuyT&) const;
    FractionHuyT operator-(const FractionHuyT&) const;
    FractionHuyT operator*(const FractionHuyT&) const;
    FractionHuyT operator/(const FractionHuyT&) const;
    
    friend ostream& operator<<(ostream&, const FractionHuyT&);
    friend FractionHuyT add(FractionHuyT*&, FractionHuyT*&);
    friend FractionHuyT subtract(FractionHuyT*&, FractionHuyT*&);
    friend FractionHuyT multiply(FractionHuyT*&, FractionHuyT*&);
    friend FractionHuyT divide(FractionHuyT*&, FractionHuyT*&);

private:
    int num;
    int denom;       
};

#endif