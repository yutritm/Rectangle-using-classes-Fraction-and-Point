/**
 * Program Name: rectangleHuyT.h
 * Discussion:	 Rectangle Declaration File
 * Written By:	 Huy Tran
 * Date:		 2020/12/15
 */

#ifndef RECTANGLEYOURNAME_H
#define RECTANGLEYOURNAME_H
#include "fractionHuyT.h"
#include "pointHuyT.h"

// Declarations

class RectangleHuyT {
public:
	RectangleHuyT();
	RectangleHuyT(const RectangleHuyT& that);
	RectangleHuyT(const FractionHuyT&, const FractionHuyT&, const PointHuyT&);

	~RectangleHuyT();

	FractionHuyT getLength();
	int getLengthNum();
	int getLengthDenom();
	FractionHuyT* getLenAddress();

	FractionHuyT getWidth();
	int getWidthNum();
	int getWidthDenom();
	FractionHuyT* getWidAddress();

	PointHuyT getULPoint();
	int getPointXNum();
	int getPointXDenom();
	int getPointYNum();
	int getPointYDenom();
	PointHuyT* getPointAddress();

	void setLength(FractionHuyT);
	void setWidth(FractionHuyT);
	void setULPoint(PointHuyT);	

	void update(FractionHuyT, FractionHuyT, PointHuyT);
	FractionHuyT getArea();
	FractionHuyT getPerimeter();

	bool isDisjoin(const RectangleHuyT&);
	bool isIntersect(const RectangleHuyT&);
	bool isEnclose(const RectangleHuyT&);
private:
	FractionHuyT* lPtr;
	FractionHuyT* wPtr;
	PointHuyT* ulPtr;
};

#endif