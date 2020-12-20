/**
 * Program Name: pointHuyT.h
 * Discussion:	 Pointer Declaration File
 * Written By:	 Huy Tran
 * Date:		 2020/12/15
 */

#ifndef POINTHUYT_H
#define POINTHUYT_H
#include "fractionHuyT.h"

// Declarations

class PointHuyT {
public:
	PointHuyT();
	PointHuyT(const PointHuyT& that);
	PointHuyT(const FractionHuyT&,const FractionHuyT&);

	~PointHuyT();

	void setX(FractionHuyT);
	int getXNum(void) const;
	int getXDenom(void) const;

	void setY(FractionHuyT);
	int getYNum(void) const;
	int getYDenom(void) const;

	void update(FractionHuyT, FractionHuyT);
	int getQuadrant() const;
	int getQuadrant(const PointHuyT&) const;
	void moveBy(const FractionHuyT&, const FractionHuyT&);
	void moveBy(int, int);
	void flipByX(void);
	void flipByY(void);
	void flipOrigin(void);
	void print(void) const;
	
private:
	FractionHuyT x;
	FractionHuyT y;
};

#endif