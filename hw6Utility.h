/**
 * Program Name: hw6Utility.h
 * Discussion:	 Utilities Header
 * Written By:	 Huy Tran
 * Date:		 2020/12/15
 */

#ifndef UTILITY_H
#define UTILITY_H

#include <iostream>
#include "fractionHuyT.h"
#include "pointHuyT.h"
#include "rectangleHuyT.h"

//Function Declarations 

void displayClassInfoHuyT(void);
void runMenuHT(void);
void runMenuInitHT(RectangleHuyT*&, RectangleHuyT*&);
void init(RectangleHuyT*&, RectangleHuyT*&);
void runMenuUpdateHT(RectangleHuyT*&, RectangleHuyT*&);
void updateRectangle(RectangleHuyT*&);
void runMenuAP(RectangleHuyT*&, RectangleHuyT*&);
void runMenuPerspective(RectangleHuyT*&, RectangleHuyT*&);
void runMenuComparing(RectangleHuyT*&, RectangleHuyT*&);
void runMenuDisplay(RectangleHuyT*&, RectangleHuyT*&);

#endif