/**
 * Program Name: rectangleHuyT.cpp
 * Discussion:	 Rectangle Details
 * Written By:	 Huy Tran
 * Date:		 2020/12/15
 */

#include <iostream>
#include "rectangleHuyT.h"
using namespace std;

RectangleHuyT::RectangleHuyT() : lPtr(new FractionHuyT), 
				wPtr(new FractionHuyT),	ulPtr(new PointHuyT) {
}

RectangleHuyT::RectangleHuyT(const RectangleHuyT& that) :
		lPtr(that.lPtr), wPtr(that.wPtr), ulPtr(that.ulPtr) {
}

RectangleHuyT::RectangleHuyT(const FractionHuyT& lFr,
	const FractionHuyT& wFr, const PointHuyT& ulPt) :
	lPtr(new FractionHuyT(lFr)), wPtr(new FractionHuyT(wFr)),
									ulPtr(new PointHuyT(ulPt)) {

}

RectangleHuyT::~RectangleHuyT() {
	delete lPtr;
	lPtr = nullptr;
	delete wPtr;
	wPtr = nullptr;
	delete ulPtr;
	ulPtr = nullptr;
}

FractionHuyT RectangleHuyT::getLength() {
	return *lPtr;
}
int RectangleHuyT::getLengthNum() {
	return lPtr->getNum();
}
int RectangleHuyT::getLengthDenom() {
	return lPtr->getDenom();
}
FractionHuyT* RectangleHuyT::getLenAddress() {
	return lPtr;
}
FractionHuyT RectangleHuyT::getWidth() {
	return *wPtr;
}
int RectangleHuyT::getWidthNum() {
	return wPtr->getNum();
}
int RectangleHuyT::getWidthDenom() {
	return wPtr->getDenom();
}
FractionHuyT* RectangleHuyT::getWidAddress(){
	return wPtr;
}

PointHuyT RectangleHuyT::getULPoint() {
	return *ulPtr;
}
int RectangleHuyT::getPointXNum() {
	return ulPtr->getXNum();
}
int RectangleHuyT::getPointXDenom() {
	return ulPtr->getXDenom();
}
int RectangleHuyT::getPointYNum() {
	return ulPtr->getYNum();
}
int RectangleHuyT::getPointYDenom() {
	return ulPtr->getYDenom();
}
PointHuyT* RectangleHuyT::getPointAddress() {
	return ulPtr;
}

void RectangleHuyT::setLength(FractionHuyT fracL) {
	*lPtr = fracL;
}

void RectangleHuyT::setWidth(FractionHuyT fracW) {
	*wPtr = fracW;
}

void RectangleHuyT::setULPoint(PointHuyT ulPoint) {
	*ulPtr = ulPoint;
}

void RectangleHuyT::update(FractionHuyT fracL, FractionHuyT fracW, PointHuyT ulPoint) {
	setLength(fracL);
	setWidth(fracW);
	setULPoint(ulPoint);
}

FractionHuyT RectangleHuyT::getArea() {
	return *lPtr * *wPtr;
}

FractionHuyT RectangleHuyT::getPerimeter() {
	return *lPtr + *lPtr + *wPtr + *wPtr;
}

bool RectangleHuyT::isDisjoin(const RectangleHuyT& rect2) {
	int checkLen = ulPtr->getXNum() + lPtr->getNum();
	int checkWid = ulPtr->getYNum() - wPtr->getNum();
	int loRightX = rect2.ulPtr->getXNum() + rect2.lPtr->getNum();
	int loRightY = rect2.ulPtr->getYNum() - rect2.wPtr->getNum();
	int rect2X = rect2.ulPtr->getXNum();
	int rect2Y = rect2.ulPtr->getYNum();

	if (ulPtr->getXNum() <= rect2X && rect2X <= checkLen) {
		if (checkWid <= rect2Y && rect2Y <= ulPtr->getYNum()) {
			return false;
		}
		if (checkWid <= loRightY && loRightY <= ulPtr->getYNum()) {
			return false;
		}
	}
	if (ulPtr->getXNum() <= loRightX && loRightX <= checkLen) {
		if (checkWid <= rect2Y && rect2Y <= ulPtr->getYNum()) {
			return false;
		}
		if (checkWid <= loRightY && loRightY <= ulPtr->getYNum()) {
			return false;
		}
	}
		
	return true;
}
bool RectangleHuyT::isIntersect(const RectangleHuyT& rect2) {
	int checkLen = ulPtr->getXNum() + lPtr->getNum();
	int checkWid = ulPtr->getYNum() - wPtr->getNum();
	int loRightX = rect2.ulPtr->getXNum() + rect2.lPtr->getNum();
	int loRightY = rect2.ulPtr->getYNum() - rect2.wPtr->getNum();
	int rect2X = rect2.ulPtr->getXNum();
	int rect2Y = rect2.ulPtr->getYNum();

	if (isEnclose(rect2)) {
		return false;
	}

	if (ulPtr->getXNum() <= rect2X && rect2X <= checkLen) {
		if (checkWid <= rect2Y && rect2Y <= ulPtr->getYNum()) {
			return true;
		}
		if (checkWid <= loRightY && loRightY <= ulPtr->getYNum()) {
			return true;
		}
	}
	if (ulPtr->getXNum() <= loRightX && loRightX <= checkLen) {
		if (checkWid <= rect2Y && rect2Y <= ulPtr->getYNum()) {
			return true;
		}
		if (checkWid <= loRightY && loRightY <= ulPtr->getYNum()) {
			return true;
		}
	}

	return false;
}
bool RectangleHuyT::isEnclose(const RectangleHuyT& rect2) {
	int checkLen = ulPtr->getXNum() + lPtr->getNum();
	int checkWid = ulPtr->getYNum() - wPtr->getNum();
	int loRightX = rect2.ulPtr->getXNum() + rect2.lPtr->getNum();
	int loRightY = rect2.ulPtr->getYNum() - rect2.wPtr->getNum();
	int rect2X = rect2.ulPtr->getXNum();
	int rect2Y = rect2.ulPtr->getYNum();

	if (ulPtr->getXNum() <= rect2X && rect2X <= checkLen
		&& ulPtr->getYNum() <= loRightX && loRightX <= checkLen) {
		if (checkWid <= rect2Y && rect2Y <= ulPtr->getYNum()
			&& checkWid <= loRightY && loRightY <= ulPtr->getYNum()) {
			return true;
		}
	}
	return false;
}