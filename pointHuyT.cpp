/**
 * Program Name: pointerHuyT.cpp
 * Discussion:	 Point Details
 * Written By:	 Huy Tran
 * Date:		 2020/12/15
 */

#include <iostream>
#include "pointHuyT.h"
using namespace std;

PointHuyT::PointHuyT() : x(0, 1), y(0, 1) {
}

PointHuyT::PointHuyT(const PointHuyT& that) : x(that.x),
									y(that.y) {
}

PointHuyT::PointHuyT(const FractionHuyT& fr1,const FractionHuyT& fr2) {
	x = fr1;
	y = fr2;
}

PointHuyT::~PointHuyT() {
}

void PointHuyT::setX(FractionHuyT fracX) {
	x = fracX;
}
int PointHuyT::getXNum() const {
	return x.getNum();
}
int PointHuyT::getXDenom() const {
	return x.getDenom();
}

void PointHuyT::setY(FractionHuyT fracY) {	
	y = fracY;
}
int PointHuyT::getYNum() const {
	return y.getNum();
}
int PointHuyT::getYDenom() const {
	return y.getDenom();
}

void PointHuyT::update(FractionHuyT fracX, FractionHuyT fracY) {
	setX(fracX);
	setY(fracY);
}

int PointHuyT::getQuadrant() const{
	int quadrant = 1;
	int signX = x.getNum();
	int signY = y.getNum();

	if (signX > 0 && signY > 0) {
		quadrant = 1;
	}
	if (signX == 0 && signY > 0) {
		quadrant = 5;
	}
	if (signX < 0 && signY > 0) {
		quadrant = 2;
	}
	if (signX > 0 && signY == 0) {
		quadrant = 6;
	}
	if (signX < 0 && signY == 0) {
		quadrant = 7;
	}
	if (signX < 0 && signY < 0) {
		quadrant = 3;
	}
	if (signX == 0 && signY < 0) {
		quadrant = 8;
	}
	if (signX > 0 && signY < 0) {
		quadrant = 4;
	}

	return quadrant;
}

int PointHuyT::getQuadrant(const PointHuyT& p) const {
	int quadrant = 1;
	int signXp1 = x.getNum();
	int signYp1 = y.getNum();
	int signXp2 = p.getXNum();
	int signYp2 = p.getYNum();

	if (signXp1 > signXp2 && signYp1 > signYp2) {
		quadrant = 1;
	}
	if (signXp1 == signXp2 && signYp1 > signYp2) {
		quadrant = 5;
	}
	if (signXp1 < signXp2 && signYp1 > signYp2) {
		quadrant = 2;
	}
	if (signXp1 > signXp2 && signYp1 == signYp2) {
		quadrant = 6;
	}
	if (signXp1 < signXp2 && signYp1 == signYp2) {
		quadrant = 7;
	}
	if (signXp1 < signXp2 && signYp1 < signYp2) {
		quadrant = 3;
	}
	if (signXp1 == signXp2 && signYp1 < signYp2) {
		quadrant = 8;
	}
	if (signXp1 > signXp2 && signYp1 < signYp2) {
		quadrant = 4;
	}
	
	return quadrant;
}

void PointHuyT::moveBy(const FractionHuyT& delX,
								const FractionHuyT& delY) {
	x = x + delX;
	y = y + delY;
}

void PointHuyT::moveBy(int frX, int frY) {
	int frXNum = x.getNum();
	int frYNum = y.getNum();

	frXNum = frXNum + frX;
	frYNum = frYNum + frY;
	
	x.setNum(frXNum);
	y.setNum(frYNum);	
}

void PointHuyT::flipByX() {
	int sign = y.getNum();
	sign = -sign;

	y.setNum(sign);
}

void PointHuyT::flipByY() {
	int sign = x.getNum();
	sign = -sign;

	x.setNum(sign);
}

void PointHuyT::flipOrigin() {
	int signX = x.getNum();
	int signY = y.getNum();	
	signX = -signX;
	signY = -signY;
	
	x.setNum(signX);
	y.setNum(signY);
}

void PointHuyT::print() const {
	cout << "\n      x: " << x.getNum() << " / "
		<< x.getDenom()
		<< "\n      y: " << y.getNum() << " / "
		<< y.getDenom() << endl;
}