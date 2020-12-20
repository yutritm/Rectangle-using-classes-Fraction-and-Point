/**
 * Program Name: fractionHuyT.cpp
 * Discussion:	 Fraction Details
 * Written By:	 Huy Tran
 * Date:		 2020/12/15
 */

#include <iostream>
#include "fractionHuyT.h"
using namespace std;


FractionHuyT::FractionHuyT() : num(0), denom(1) {
}

FractionHuyT::FractionHuyT(const FractionHuyT& that) : num(that.num),
                                            denom(that.denom) {
}

FractionHuyT::FractionHuyT(int n, int d) : num(n / gcd(n, d)),
                                            denom(d / gcd(n, d)) {
}

FractionHuyT::~FractionHuyT() {
}

void FractionHuyT::setNum(int n) {
    num = n / gcd(n, denom);
    denom /= gcd(n, denom);
}

int FractionHuyT::getNum() const {
    return num;
}

void FractionHuyT::setDenom(int d) {
    while (d == 0) {
        cout << "\n  Denom cannot equal 0!"
            "\n  Enter denom: ";
        cin >> d;
    }
    denom = d / gcd(num, d);
    num /= gcd(num, d);
}

int FractionHuyT::getDenom() const {
    return denom;
}

void FractionHuyT::update(int n, int d) {
    while (d == 0) {
        cout << "\n  Fraction cannot be undefined!"
            "\n  Enter num: ";
        cin >> n;
        cout << "\n  Enter denom: ";
        cin >> d;
    }

    (d < 0) ? -d, -n : d;

    setNum(n / gcd(n, d));
    setDenom(d / gcd(n, d));
}

void FractionHuyT::print() const {
    cout << "\n          num : " << num
         << "\n          denom : " << denom << endl;
}

int FractionHuyT::gcd(int arg1, int arg2) {
    int gcd = 1;
    int tmp1 = (arg1 < 0) ? -arg1 : arg1;
    int tmp2 = (arg2 < 0) ? -arg2 : arg2;

    for (int i = 2; i <= tmp1 && i <= tmp2; i++) {
        if (tmp1 % i == 0 && tmp2 % i == 0) {
            gcd = i;
        }
    }
    return (arg2 < 0) ? -gcd : gcd;
}

FractionHuyT FractionHuyT::add(const FractionHuyT& that) const {
    return FractionHuyT(num * that.denom + that.num * denom,
        denom * that.denom);
}
FractionHuyT FractionHuyT::subtract(const FractionHuyT& that) const {
    return FractionHuyT(num * that.denom - that.num * denom,
        denom * that.denom);
}
FractionHuyT FractionHuyT::multiply(const FractionHuyT& that) const {
    return FractionHuyT(num * that.num, denom * that.denom);
}
FractionHuyT FractionHuyT::divide(const FractionHuyT& that) const {
     return FractionHuyT(num * that.denom, denom * that.num);
}

FractionHuyT& FractionHuyT::operator=(const FractionHuyT& that) {
    num = that.num;
    denom = that.denom;

    return *this;
}

FractionHuyT FractionHuyT::operator+(const FractionHuyT& that) const {
    return FractionHuyT(num * that.denom + that.num * denom,
        denom * that.denom);
}
FractionHuyT FractionHuyT::operator-(const FractionHuyT& that) const {
    return FractionHuyT(num * that.denom - that.num * denom,
        denom * that.denom);
}
FractionHuyT FractionHuyT::operator*(const FractionHuyT& that) const {
    return FractionHuyT(num * that.num, denom * that.denom);
}
FractionHuyT FractionHuyT::operator/(const FractionHuyT& that) const {
    return FractionHuyT(num * that.denom, denom * that.num);
}

FractionHuyT add(FractionHuyT*& leftFr, FractionHuyT*& rightFr) {

    return FractionHuyT(leftFr->getNum() * rightFr->getDenom()
        + rightFr->getNum() * leftFr->getDenom(),
        leftFr->getDenom() * rightFr->getDenom());
}

FractionHuyT subtract(FractionHuyT*& leftFr, FractionHuyT*& rightFr) {
    return FractionHuyT(leftFr->getNum() * rightFr->getDenom()
        - rightFr->getNum() * leftFr->getDenom(),
        leftFr->getDenom() * rightFr->getDenom());
}
FractionHuyT multiply(FractionHuyT*& leftFr, FractionHuyT*& rightFr) {
    return FractionHuyT(leftFr->getNum() * rightFr->getNum(),
        leftFr->getDenom() * rightFr->getDenom());
}
FractionHuyT divide(FractionHuyT*& leftFr, FractionHuyT*& rightFr) {
    return FractionHuyT(leftFr->getNum() * rightFr->getDenom(),
        leftFr->getDenom() * rightFr->getNum());
}

ostream& operator<<(ostream& out, const FractionHuyT& frRef) {
    out << "\n          num: " << frRef.getNum()
        << "\n          denom: " << frRef.getDenom() << endl;
    return out;
}