/**
 * Program Name: hw6UtilityHuyT.cpp
 * Discussion:	 Utilities Header
 * Written By:	 Huy Tran
 * Date:		 2020/12/15
 */

#include <iostream>
#include "fractionHuyT.h"
#include "fractionUtilityHuyT.h"
#include "hw6Utility.h"
#include "pointHuyT.h"
#include "rectangleHuyT.h"

using namespace std;

// Function Prototypes

void displayClassInfoHuyT() {

	cout << "CIS 25 - C++ Programming"
		"\nLaney College"
		"\nHuy Tran"
		"\n"
		"\nInformation --"
		"\n  Assignment:                      HW #6 Exercise #1"
		"\n  Implemented by:                  Huy Tran"
		"\n  Submitted Date:                  2020/12/15"
		"\n  Current Number of LEB available: 0"
		"\n  Allowed Number of LEB Used:      2"
		"\n  Remaining Number of LEB:         0"
		<< endl;

}

void runMenuHT() {
	int optionHT;	
	RectangleHuyT* rectangle1{ nullptr };
	RectangleHuyT* rectangle2{ nullptr };

	do {
		cout << "\n***********************************"
				"\n*         MENU - HW #6            *"
				"\n*  1. Initializing (2 Rectangles) *"
				"\n*  2. Area/Perimeter              *"
				"\n*  3. Perspectives                *"
				"\n*  4. Comparing                   *"
				"\n*  5. Displaying                  *"
				"\n*  6. Quit                        *"				
				"\n***********************************"
				"\nSelect an option (use integer value only): ";
		cin >> optionHT;

		switch (optionHT) {
		case 1:
			cout << "\n  Initializing Option --" << endl;
			runMenuInitHT(rectangle1, rectangle2);
			break;
		case 2:
			
			if (rectangle1 == NULL || rectangle2 == NULL) {
				cout << "\n    Not a proper call as no Rectangle's"
					" are available"
					<< endl;
			}
			else {
				cout << "\n  Area/Perimeter Option --" << endl;
				runMenuAP(rectangle1, rectangle2);
			}
			break;
		case 3:
			
			if (rectangle1 == NULL || rectangle2 == NULL) {
				cout << "\n    Not a proper call as no Rectangle's"
					" are available"
					<< endl;
			}
			else {			
				cout << "\n  Perspectives Option -" << endl;
				runMenuPerspective(rectangle1, rectangle2);
			}
			break;
		case 4:
			
			if (rectangle1 == NULL || rectangle2 == NULL) {
				cout << "\n    Not a proper call as no Rectangle's"
					" are available"
					<< endl;
			}
			else {
				cout << "\n  Comparing Option -" << endl;
				runMenuComparing(rectangle1, rectangle2);
			}			
			break;
		case 5:
			cout << "\n  Displaying Option --";
			runMenuDisplay(rectangle1, rectangle2);
			break;
		case 6:
			cout << "\n  Having Fun!..." << endl;			
			delete rectangle1;
			rectangle1 = nullptr;
			delete rectangle2;
			rectangle2 = nullptr;
			break;		
		default:
			cout << "\n  WRONG OPTION!" << endl;
		}
	} while (optionHT != 6);
}

void runMenuInitHT(RectangleHuyT*& rectangle1, RectangleHuyT*& rectangle2) {
	int optionHT;

	do {
		cout << "\n    ***************************"
			<< "\n    * Sub MENU - INITIALIZING *"
			<< "\n    *  1. Creating            *"
			<< "\n    *  2. Updating            *"
			<< "\n    *  3. Displaying          *"
			<< "\n    *  4. Returning           *"
			<< "\n    ***************************"
			<< "\n    Select an option (integer only): ";
		cin >> optionHT;

		switch (optionHT) {
		case 1:			
			if (rectangle1 == NULL && rectangle2 == NULL) {
				cout << "\n      Creating Option -" << endl;
					init(rectangle1, rectangle2);
			}
			else {
				cout << "\n      Please update or return!" << endl;
			}
			break;
		case 2:
			if (rectangle1 == NULL && rectangle2 == NULL) {
				cout << "\n      Not a proper call as no Rectangle's"
					" are available"
					<< endl;
			}
			else {
				cout << "\n      Updating Option -";
				runMenuUpdateHT(rectangle1, rectangle2);
			}
			break;
		case 3:
			cout << "\n      Displaying Option -"
				<< "\n\n        Rectangle #1:"
				<< "\n          Address: " << &rectangle1
				<< "\n            Length Fraction - "
				<< "\n              Address: "
				 << rectangle1->getLenAddress()
				<< "\n              Num: "
				<< rectangle1->getLengthNum()
				<< "\n              Denom: "
				<< rectangle1->getLengthDenom()
				<< "\n            Width Fraction - "
				<< "\n              Address: "
				<< rectangle1->getWidAddress()
				<< "\n              Num: "
				<< rectangle1->getWidthNum()
				<< "\n              Denom: "
				<< rectangle1->getWidthDenom()
				<< "\n            Upper-Left Corner -"
				<< "\n              Address: "
				<< rectangle1->getPointAddress()
				<< "\n              x-Fraction -"
				<< "\n                num: "
				<< rectangle1->getPointXNum()
				<< "\n                denom: "
				<< rectangle1->getPointXDenom()
				<< "\n              y-Fraction -"
				<< "\n                num: "
				<< rectangle1->getPointYNum()
				<< "\n                denom: "
				<< rectangle1->getPointYDenom()
				<< "\n\n        Rectangle #2:"
				<< "\n          Address: "
				<< &rectangle2
				<< "\n            Length Fraction - "
				<< "\n              Address: "
				<< rectangle2->getLenAddress()
				<< "\n              Num: "
				<< rectangle2->getLengthNum()
				<< "\n              Denom: "
				<< rectangle2->getLengthDenom()
				<< "\n            Width Fraction - "
				<< "\n              Address: "
				<< rectangle2->getWidAddress()
				<< "\n              Num: "
				<< rectangle2->getWidthNum()
				<< "\n              Denom: "
				<< rectangle2->getWidthDenom()
				<< "\n            Upper-Left Corner -"
				<< "\n              Address: "
				<< rectangle2->getPointAddress()
				<< "\n              x-Fraction -"
				<< "\n                num: "
				<< rectangle2->getPointXNum()
				<< "\n                denom: "
				<< rectangle2->getPointXDenom()
				<< "\n              y-Fraction -"
				<< "\n                num: "
				<< rectangle2->getPointYNum()
				<< "\n                denom: "
				<< rectangle2->getPointYDenom() << endl;
			break;
		case 4:
			cout << "\n      Returning to previous menu!" << endl;
			break;
		default:
			cout << "\n      WRONG OPTION!" << endl;
		}
	} while (optionHT != 4);
}

void init(RectangleHuyT*& rectangle1, RectangleHuyT*& rectangle2) {
	int num;
	int denom;

	cout << "\n        Data for Rectangle #1 -"
			"\n          Length as a Fraction: "
			"\n            Enter an int for num: ";
	cin >> num;
	cout << "            Enter an int for denom: ";
	cin >> denom;
	FractionHuyT length1(num, denom);		
	cout << "          Width as a Fraction: "
		<<  "\n            Enter an int for num: ";
	cin >> num;
	cout << "            Enter an int for denom: ";
	cin >> denom;	

	FractionHuyT width1(num, denom);

	cout << "            Upper-Left Corner -"
			"\n             x-Fraction - "
			"\n               Enter an int for num: ";
	cin >> num;
	cout << "               Enter an int for denom: ";
	cin >> denom;

	FractionHuyT xFrac1(num, denom);

	cout << "             y-Fraction - "
		<< "\n               Enter an int for num: ";
	cin >> num;
	cout << "               Enter an int for denom: ";
	cin >> denom;

	FractionHuyT yFrac1(num, denom);

	PointHuyT point1(xFrac1, yFrac1);
		
	rectangle1 = new RectangleHuyT(length1, width1, point1);

	cout << "\n        Data for Rectangle #2 -"
			"\n          Length as a Fraction: "
			"\n            Enter an int for num: ";
	cin >> num;
	cout << "            Enter an int for denom: ";
	cin >> denom;
	FractionHuyT length2(num, denom);
	cout << "          Width as a Fraction: "
		 << "\n            Enter an int for num: ";
	cin >> num;
	cout << "            Enter an int for denom: ";
	cin >> denom;
	FractionHuyT width2(num, denom);

	cout << "            Upper-Left Corner -"
			"\n             x-Fraction - "
			"\n               Enter an int for num: ";
	cin >> num;
	cout << "               Enter an int for denom: ";
	cin >> denom;

	FractionHuyT xFrac2(num, denom);

	cout << "             y-Fraction - "
		 << "\n               Enter an int for num: ";
	cin >> num;
	cout << "               Enter an int for denom: ";
	cin >> denom;

	FractionHuyT yFrac2(num, denom);

	PointHuyT point2(xFrac2, yFrac2);

	rectangle2 = new RectangleHuyT(length2, width2, point2);
}

void runMenuUpdateHT(RectangleHuyT*& rectangle1, 
								RectangleHuyT*& rectangle2) {
	int optionHT;
	
	do {
		cout << "\n        **********************************"
				"\n        * Sub MENU - UPDATING            *"
				"\n        *  1. Rectangle 1                *"
				"\n        *  2. Rectangle 2                *"
				"\n        *  3. Rectangle 1 & Rectangle 2  *"
				"\n        *  4. Returning                  *"
				"\n        **********************************"
				"\n        Select an option (integer only): ";
		cin >> optionHT;

		switch (optionHT) {
		case 1:
			cout <<		"\n          Updating Rectangle #1";

			updateRectangle(rectangle1);

			cout << "\n            Address: " << &rectangle1
				<< "\n            Length: "
				<< rectangle1->getLengthNum() << " / "
				<< rectangle1->getLengthDenom()
				<< "\n            Width: "
				<< rectangle1->getWidthNum() << " / "
				<< rectangle1->getWidthDenom()
				<< "\n            Upper-Left Corner: "
				<< "\n            X: "
				<< rectangle1->getPointXNum() << " / "
				<< rectangle1->getPointXDenom()
				<< "\n            Y: "
				<< rectangle1->getPointYNum() << " / "
				<< rectangle1->getPointYDenom();
			break;
		case 2:
			cout << "\n          Updating Rectangle #2";

			updateRectangle(rectangle2);

			cout << "\n            Address: " << &rectangle2
				<< "\n            Length: "
				<< rectangle2->getLengthNum() << " / "
				<< rectangle2->getLengthDenom()
				<< "\n            Width: "
				<< rectangle2->getWidthNum() << " / "
				<< rectangle2->getWidthDenom()
				<< "\n            Upper-Left Corner: "
				<< "\n            X: "
				<< rectangle2->getPointXNum() << " / "
				<< rectangle2->getPointXDenom()
				<< "\n            Y: "
				<< rectangle2->getPointYNum() << " / "
				<< rectangle2->getPointYDenom();
			break;
		case 3:
			cout << "\n          Updating Rectangle #1";

			updateRectangle(rectangle1);

			cout << "\n            Address: " << &rectangle1
				<< "\n            Length: "
				<< rectangle1->getLengthNum() << " / "
				<< rectangle1->getLengthDenom()
				<< "\n            Width: "
				<< rectangle1->getWidthNum() << " / "
				<< rectangle1->getWidthDenom()
				<< "\n            Upper-Left Corner: "
				<< "\n            X: "
				<< rectangle1->getPointXNum() << " / "
				<< rectangle1->getPointXDenom()
				<< "\n            Y: "
				<< rectangle1->getPointYNum() << " / "
				<< rectangle1->getPointYDenom();
			cout << "\n          Updating Rectangle #2";

			updateRectangle(rectangle2);

			cout << "\n            Address: " << &rectangle2
				<< "\n            Length: "
				<< rectangle2->getLengthNum() << " / "
				<< rectangle2->getLengthDenom()
				<< "\n            Width: "
				<< rectangle2->getWidthNum() << " / "
				<< rectangle2->getWidthDenom()
				<< "\n            Upper-Left Corner: "
				<< "\n            X: "
				<< rectangle2->getPointXNum() << " / "
				<< rectangle2->getPointXDenom()
				<< "\n            Y: "
				<< rectangle2->getPointYNum() << " / "
				<< rectangle2->getPointYDenom();
			break;
		case 4:
			cout << "\n          Returning to previous menu!" << endl;
			break;
		default:
			cout << "\n          WRONG OPTION ...";
		}
	} while (optionHT != 4);
}

void updateRectangle(RectangleHuyT*& rectangle) {
	int num;
	int denom;

	cout << "\n            Updating Length Fraction:"
			"\n              Enter an int for num: ";
	cin >> num;
	cout << "              Enter an int for denom: ";
	cin >> denom;

	FractionHuyT length(num, denom);

	cout << "\n            Updating Width Fraction:"
			"\n              Enter an int for num: ";
	cin >> num;
	cout << "              Enter an int for denom: ";
	cin >> denom;

	FractionHuyT width(num, denom);

	cout << "\n            Updating Upper-Left Corner:"
			"\n              x-Fraction: "
			"\n                Enter an int for num: ";
	cin >> num;
	cout << "               Enter an int for denom: ";
	cin >> denom;

	FractionHuyT xFrac(num, denom);

	cout << "\n             y-Fraction: "
		<< "\n               Enter an int for num: ";
	cin >> num;
	cout << "\n               Enter an int for denom: ";
	cin >> denom;

	FractionHuyT yFrac(num, denom);

	PointHuyT point(xFrac, yFrac);

	rectangle->update(length, width, point);
}

void runMenuDisplay(RectangleHuyT*& rectangle1, RectangleHuyT*& rectangle2) {
	int optionHT;
	do {
		cout << "\n    *************************"
			<< "\n    * Sub MENU - Displaying *"
			<< "\n    *  1. Rectangle #1      *"
			<< "\n    *  2. Rectangle #2      *"
			<< "\n    *  3. Both Rectangles   *"
			<< "\n    *  4. Returning         *"
			<< "\n    *************************"
			<< "\n    Select an option (integer only): ";
		cin >> optionHT;

		switch (optionHT) {
		case 1:
			cout << "\n      Rectangle #1 Option -"
				<< "\n\n      Rectangle #1:"
				<< "\n        Address: " << &rectangle1
				<< "\n          Length Fraction - "
				<< "\n            Address: "
				<< rectangle1->getLenAddress()
				<< "\n            Num: "
				<< rectangle1->getLengthNum()
				<< "\n            Denom: "
				<< rectangle1->getLengthDenom()
				<< "\n          Width Fraction - "
				<< "\n            Address: "
				<< rectangle1->getWidAddress()
				<< "\n            Num: "
				<< rectangle1->getWidthNum()
				<< "\n            Denom: "
				<< rectangle1->getWidthDenom()
				<< "\n          Upper-Left Corner -"
				<< "\n            Address: "
				<< rectangle1->getPointAddress()
				<< "\n              x-Fraction -"
				<< "\n                num: "
				<< rectangle1->getPointXNum()
				<< "\n                denom: "
				<< rectangle1->getPointXDenom()
				<< "\n              y-Fraction -"
				<< "\n                num: "
				<< rectangle1->getPointYNum()
				<< "\n                denom: "
				<< rectangle1->getPointYDenom() << endl;
			break;
		case 2:
			cout << "\n      Rectangle #2 Option -"
				<< "\n\n      Rectangle #2:"
				<< "\n        Address: "
				<< &rectangle2
				<< "\n          Length Fraction - "
				<< "\n            Address: "
				<< rectangle2->getLenAddress()
				<< "\n            Num: "
				<< rectangle2->getLengthNum()
				<< "\n            Denom: "
				<< rectangle2->getLengthDenom()
				<< "\n          Width Fraction - "
				<< "\n            Address: "
				<< rectangle2->getWidAddress()
				<< "\n            Num: "
				<< rectangle2->getWidthNum()
				<< "\n            Denom: "
				<< rectangle2->getWidthDenom()
				<< "\n          Upper-Left Corner -"
				<< "\n            Address: "
				<< rectangle2->getPointAddress()
				<< "\n              x-Fraction -"
				<< "\n                num: "
				<< rectangle2->getPointXNum()
				<< "\n                denom: "
				<< rectangle2->getPointXDenom()
				<< "\n              y-Fraction -"
				<< "\n                num: "
				<< rectangle2->getPointYNum()
				<< "\n                denom: "
				<< rectangle2->getPointYDenom() << endl;
			break;
		case 3:
			cout << "\n      Rectangle #1 & 2 Option -"
				<< "\n\n      Rectangle #1:"
				<< "\n        Address: " << &rectangle1
				<< "\n          Length Fraction - "
				<< "\n            Address: "
				<< rectangle1->getLenAddress()
				<< "\n            Num: "
				<< rectangle1->getLengthNum()
				<< "\n            Denom: "
				<< rectangle1->getLengthDenom()
				<< "\n          Width Fraction - "
				<< "\n            Address: "
				<< rectangle1->getWidAddress()
				<< "\n            Num: "
				<< rectangle1->getWidthNum()
				<< "\n            Denom: "
				<< rectangle1->getWidthDenom()
				<< "\n          Upper-Left Corner -"
				<< "\n            Address: "
				<< rectangle1->getPointAddress()
				<< "\n              x-Fraction -"
				<< "\n                num: "
				<< rectangle1->getPointXNum()
				<< "\n                denom: "
				<< rectangle1->getPointXDenom()
				<< "\n              y-Fraction -"
				<< "\n                num: "
				<< rectangle1->getPointYNum()
				<< "\n                denom: "
				<< rectangle1->getPointYDenom()

				<< "\n\n      Rectangle #2:"
				<< "\n        Address: "
				<< &rectangle2
				<< "\n          Length Fraction - "
				<< "\n            Address: "
				<< rectangle2->getLenAddress()
				<< "\n            Num: "
				<< rectangle2->getLengthNum()
				<< "\n            Denom: "
				<< rectangle2->getLengthDenom()
				<< "\n          Width Fraction - "
				<< "\n            Address: "
				<< rectangle2->getWidAddress()
				<< "\n            Num: "
				<< rectangle2->getWidthNum()
				<< "\n            Denom: "
				<< rectangle2->getWidthDenom()
				<< "\n          Upper-Left Corner -"
				<< "\n            Address: "
				<< rectangle2->getPointAddress()
				<< "\n              x-Fraction -"
				<< "\n                num: "
				<< rectangle2->getPointXNum()
				<< "\n                denom: "
				<< rectangle2->getPointXDenom()
				<< "\n              y-Fraction -"
				<< "\n                num: "
				<< rectangle2->getPointYNum()
				<< "\n                denom: "
				<< rectangle2->getPointYDenom() << endl;
			break;
		case 4:
			cout << "\n      Returning to previous menu!" << endl;
			break;
		default:
			cout << "\n      WRONG OPTION!" << endl;
		}
	} while (optionHT != 4);
}

void runMenuAP(RectangleHuyT*& rectangle1, RectangleHuyT*& rectangle2) {
	int optionHT;
	FractionHuyT rectArea1 = rectangle1->getArea();
	FractionHuyT rectArea2 = rectangle2->getArea();
	FractionHuyT rectPeri1 = rectangle1->getPerimeter();
	FractionHuyT rectPeri2 = rectangle2->getPerimeter();	

	do {
		cout << "\n    *****************************"
			<< "\n    * Sub MENU - Area/Perimeter *"
			<< "\n    *  1. Computing Area        *"
			<< "\n    *  2. Computing Perimeter   *"
			<< "\n    *  3. Returning             *"
			<< "\n    *****************************"
			<< "\n    Select an option (integer only): ";
		cin >> optionHT;

		switch (optionHT) {
		case 1:
			cout << "\n      Computing Area Option -"
				"\n\n        Rectangle #1 -"
				"\n          Address: " << &rectangle1 <<
				"\n            Area (as a Fraction) -"
				"\n              Value: " <<
				rectArea1.getNum() << " / " <<
				rectArea1.getDenom() <<
				"\n\n        Rectangle #2 -"
				"\n          Address: " << &rectangle2 <<
				"\n            Area (as a Fraction) -"
				"\n              Value: " <<
				rectArea2.getNum() << " / " <<
				rectArea2.getDenom() << endl;				
			break;
		case 2:
			cout << "\n      Computing Perimeter Option -"
				"\n\n        Rectangle #1 -"
				"\n          Address: " << &rectangle1 <<
				"\n            Perimeter (as a Fraction) -"
				"\n              Value: " <<
				rectPeri1.getNum() << " / " <<
				rectPeri1.getDenom() <<
				"\n\n        Rectangle #2 -"
				"\n          Address: " << &rectangle2 <<
				"\n            Perimeter (as a Fraction) -"
				"\n              Value: " <<
				rectPeri2.getNum() << " / " <<
				rectPeri2.getDenom() << endl;
			break;
		case 3:
			cout << "\n      Returning to previous menu!" << endl;
			break;			
		default:
			cout << "\n      WRONG OPTION!" << endl;
		}
	} while (optionHT != 3);
}

void runMenuPerspective(RectangleHuyT*& rectangle1, RectangleHuyT*& rectangle2) {
	int optionHT;
	
	do {
		cout << "\n    **************************"
			<< "\n    * Sub MENU - Perspective *"
			<< "\n    *  1. Disjoining         *"
			<< "\n    *  2. Intersecting       *"
			<< "\n    *  3. Enclosing          *"
			<< "\n    *  4. Return             *"
			<< "\n    **************************"
			<< "\n    Select an option (integer only): ";
		cin >> optionHT;

		switch (optionHT) {
		case 1:
			if (rectangle1->isDisjoin(*rectangle2) == true) {
				cout << "\n      Rectangle #1 is disjoining with"
					" Rectangle #2" << endl;
			}
			else if (rectangle1->isDisjoin(*rectangle2) == false) {
				cout << "\n      Rectangle #1 is not disjoining with"
					" Rectangle #2" << endl;
			}			
			break;
		case 2:
			if (rectangle1->isIntersect(*rectangle2) == true) {
				cout << "\n      Rectangle #1 is intersecting with"
					" Rectangle #2" << endl;
			}
			else if (rectangle1->isIntersect(*rectangle2) == false) {
				cout << "\n      Rectangle #1 is not intersecting with"
					" Rectangle #2" << endl;
			}
			break;
		case 3:
			if (rectangle1->isEnclose(*rectangle2) == true) {
				cout << "\n      Rectangle #1 is enclosing"
					" Rectangle #2" << endl;
			}
			else if (rectangle1->isEnclose(*rectangle2) == false) {
				cout << "\n      Rectangle #1 is not enclosing"
					" Rectangle #2" << endl;
			}
			break;
		case 4:
			cout << "\n      Returning to previous menu!" << endl;
			break;
		default:
			cout << "\n      WRONG OPTION!" << endl;
		}
	} while (optionHT != 4);
}

void runMenuComparing(RectangleHuyT*& rectangle1, RectangleHuyT*& rectangle2) {
	int optionHT;
	FractionHuyT rectArea1 = rectangle1->getArea();
	FractionHuyT rectArea2 = rectangle2->getArea();
	FractionHuyT rectPeri1 = rectangle1->getPerimeter();
	FractionHuyT rectPeri2 = rectangle2->getPerimeter();
	do {
		cout << "\n    ************************"
			<< "\n    * Sub MENU - Comparing *"
			<< "\n    *  1. Using Areas      *"
			<< "\n    *  2. Using Perimeters *"			
			<< "\n    *  3. Returning        *"
			<< "\n    ************************"
			<< "\n    Select an option (use integer value only): ";
		cin >> optionHT;

		switch (optionHT) {
		case 1:
			cout << "\n      Using Areas Option -"
				<< "\n        Area of Rectangle #1 is "
				<< rectArea1.getNum() << "/" << rectArea1.getDenom()
				<< "\n        Area of Rectangle #2 is "
				<< rectArea2.getNum() << "/" << rectArea2.getDenom();
			if (rectArea1.getNum() > rectArea2.getNum()) {
				cout << "\n\n        (Area of Rectangle #1) >"
					<< "\n          (Area of Rectangle #2)" << endl;
			}
			if (rectArea1.getNum() == rectArea2.getNum()) {
				cout << "\n\n        (Area of Rectangle #1) =="
					<< "\n          (Area of Rectangle #2)" << endl;
			}
			if (rectArea1.getNum() < rectArea2.getNum()) {
				cout << "\n\n        (Area of Rectangle #1) <"
					<< "\n          (Area of Rectangle #2)" << endl;
			}
			break;
		case 2:
			cout << "\n      Using Perimeters Option -"
				<< "\n        Perimeter of Rectangle #1 is "
				<< rectPeri1.getNum() << "/" << rectPeri1.getDenom()
				<< "\n        Perimeter of Rectangle #2 is "
				<< rectPeri2.getNum() << "/" << rectPeri2.getDenom();
			if (rectPeri1.getNum() > rectPeri2.getNum()) {
				cout << "\n\n        (Perimeter of Rectangle #1) >"
					<< "\n          (Perimeter of Rectangle #2)" << endl;
			}
			if (rectPeri1.getNum() == rectPeri2.getNum()) {
				cout << "\n\n        (Perimeter of Rectangle #1) =="
					<< "\n          (Perimeter of Rectangle #2)" << endl;
			}
			if (rectPeri1.getNum() < rectPeri2.getNum()) {
				cout << "\n\n        (Perimeter of Rectangle #1) <"
					<< "\n          (Perimeter of Rectangle #2)" << endl;
			}
			break;		
		case 3:
			cout << "\n      Returning to previous menu!" << endl;
			break;
		default:
			cout << "\n      WRONG OPTION!" << endl;
		}
	} while (optionHT != 3);
}