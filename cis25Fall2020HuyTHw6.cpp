/**
 * Program Name: cis25Fall2020HuyTHw6.cpp
 * Discussion:	 Homework #6 Exercise #1
 * Written By:	 Huy Tran
 * Date:		 2020/12/15
 */ 
#include <iostream>
#include "fractionHuyT.h"
#include "hw6Utility.h"
#include "pointHuyT.h"

using namespace std;

//Function Prototypes

//Application Driver

int main() {
   
    displayClassInfoHuyT();
    runMenuHT();

    return 0;
}

//Function Definitions

/* PROGRAM_OUTPUT 1
CIS 25 - C++ Programming
Laney College
Huy Tran

Information --
  Assignment:                      HW #6 Exercise #1
  Implemented by:                  Huy Tran
  Submitted Date:                  2020/12/15
  Current Number of LEB available: 0
  Allowed Number of LEB Used:      2
  Remaining Number of LEB:         0

***********************************
*         MENU - HW #6            *
*  1. Initializing (2 Rectangles) *
*  2. Area/Perimeter              *
*  3. Perspectives                *
*  4. Comparing                   *
*  5. Displaying                  *
*  6. Quit                        *
***********************************
Select an option (use integer value only): 2

    Not a proper call as no Rectangle's are available

***********************************
*         MENU - HW #6            *
*  1. Initializing (2 Rectangles) *
*  2. Area/Perimeter              *
*  3. Perspectives                *
*  4. Comparing                   *
*  5. Displaying                  *
*  6. Quit                        *
***********************************
Select an option (use integer value only): 1

  Initializing Option --

    ***************************
    * Sub MENU - INITIALIZING *
    *  1. Creating            *
    *  2. Updating            *
    *  3. Displaying          *
    *  4. Returning           *
    ***************************
    Select an option (integer only): 2

      Not a proper call as no Rectangle's are available

    ***************************
    * Sub MENU - INITIALIZING *
    *  1. Creating            *
    *  2. Updating            *
    *  3. Displaying          *
    *  4. Returning           *
    ***************************
    Select an option (integer only): 1

      Creating Option -

        Data for Rectangle #1 -
          Length as a Fraction:
            Enter an int for num: 5
            Enter an int for denom: 1
          Width as a Fraction:
            Enter an int for num: 3
            Enter an int for denom: 1
            Upper-Left Corner -
             x-Fraction -
               Enter an int for num: 0
               Enter an int for denom: 1
             y-Fraction -
               Enter an int for num: 0
               Enter an int for denom: 1

        Data for Rectangle #2 -
          Length as a Fraction:
            Enter an int for num: 6
            Enter an int for denom: 3
          Width as a Fraction:
            Enter an int for num: 2
            Enter an int for denom: 1
            Upper-Left Corner -
             x-Fraction -
               Enter an int for num: 0
               Enter an int for denom: 1
             y-Fraction -
               Enter an int for num: 0
               Enter an int for denom: 1

    ***************************
    * Sub MENU - INITIALIZING *
    *  1. Creating            *
    *  2. Updating            *
    *  3. Displaying          *
    *  4. Returning           *
    ***************************
    Select an option (integer only): 3

      Displaying Option -

        Rectangle #1:
          Address: 00E9FDC4
            Length Fraction -
              Address: 014AE0C0
              Num: 5
              Denom: 1
            Width Fraction -
              Address: 014ADF38
              Num: 3
              Denom: 1
            Upper-Left Corner -
              Address: 014A9518
              x-Fraction -
                num: 0
                denom: 1
              y-Fraction -
                num: 0
                denom: 1

        Rectangle #2:
          Address: 00E9FDB8
            Length Fraction -
              Address: 014ADC28
              Num: 2
              Denom: 1
            Width Fraction -
              Address: 014AE210
              Num: 2
              Denom: 1
            Upper-Left Corner -
              Address: 014A4D60
              x-Fraction -
                num: 0
                denom: 1
              y-Fraction -
                num: 0
                denom: 1

    ***************************
    * Sub MENU - INITIALIZING *
    *  1. Creating            *
    *  2. Updating            *
    *  3. Displaying          *
    *  4. Returning           *
    ***************************
    Select an option (integer only): 4

      Returning to previous menu!

***********************************
*         MENU - HW #6            *
*  1. Initializing (2 Rectangles) *
*  2. Area/Perimeter              *
*  3. Perspectives                *
*  4. Comparing                   *
*  5. Displaying                  *
*  6. Quit                        *
***********************************
Select an option (use integer value only): 2

  Area/Perimeter Option --

    *****************************
    * Sub MENU - Area/Perimeter *
    *  1. Computing Area        *
    *  2. Computing Perimeter   *
    *  3. Returning             *
    *****************************
    Select an option (integer only): 1

      Computing Area Option -

        Rectangle #1 -
          Address: 00E9FDC4
            Area (as a Fraction) -
              Value: 15 / 1

        Rectangle #2 -
          Address: 00E9FDB8
            Area (as a Fraction) -
              Value: 4 / 1

    *****************************
    * Sub MENU - Area/Perimeter *
    *  1. Computing Area        *
    *  2. Computing Perimeter   *
    *  3. Returning             *
    *****************************
    Select an option (integer only): 2

      Computing Perimeter Option -

        Rectangle #1 -
          Address: 00E9FDC4
            Perimeter (as a Fraction) -
              Value: 16 / 1

        Rectangle #2 -
          Address: 00E9FDB8
            Perimeter (as a Fraction) -
              Value: 8 / 1

    *****************************
    * Sub MENU - Area/Perimeter *
    *  1. Computing Area        *
    *  2. Computing Perimeter   *
    *  3. Returning             *
    *****************************
    Select an option (integer only): 3

      Returning to previous menu!

***********************************
*         MENU - HW #6            *
*  1. Initializing (2 Rectangles) *
*  2. Area/Perimeter              *
*  3. Perspectives                *
*  4. Comparing                   *
*  5. Displaying                  *
*  6. Quit                        *
***********************************
Select an option (use integer value only): 3

  Perspectives Option -

    **************************
    * Sub MENU - Perspective *
    *  1. Disjoining         *
    *  2. Intersecting       *
    *  3. Enclosing          *
    *  4. Return             *
    **************************
    Select an option (integer only): 1

      Rectangle #1 is not disjoining with Rectangle #2

    **************************
    * Sub MENU - Perspective *
    *  1. Disjoining         *
    *  2. Intersecting       *
    *  3. Enclosing          *
    *  4. Return             *
    **************************
    Select an option (integer only): 2

      Rectangle #1 is not intersecting with Rectangle #2

    **************************
    * Sub MENU - Perspective *
    *  1. Disjoining         *
    *  2. Intersecting       *
    *  3. Enclosing          *
    *  4. Return             *
    **************************
    Select an option (integer only): 3

      Rectangle #1 is enclosing Rectangle #2

    **************************
    * Sub MENU - Perspective *
    *  1. Disjoining         *
    *  2. Intersecting       *
    *  3. Enclosing          *
    *  4. Return             *
    **************************
    Select an option (integer only): 4

      Returning to previous menu!

***********************************
*         MENU - HW #6            *
*  1. Initializing (2 Rectangles) *
*  2. Area/Perimeter              *
*  3. Perspectives                *
*  4. Comparing                   *
*  5. Displaying                  *
*  6. Quit                        *
***********************************
Select an option (use integer value only): 4

  Comparing Option -

    ************************
    * Sub MENU - Comparing *
    *  1. Using Areas      *
    *  2. Using Perimeters *
    *  3. Returning        *
    ************************
    Select an option (use integer value only): 1

      Using Areas Option -
        Area of Rectangle #1 is 15/1
        Area of Rectangle #2 is 4/1

        (Area of Rectangle #1) >
          (Area of Rectangle #2)

    ************************
    * Sub MENU - Comparing *
    *  1. Using Areas      *
    *  2. Using Perimeters *
    *  3. Returning        *
    ************************
    Select an option (use integer value only): 2

      Using Perimeters Option -
        Perimeter of Rectangle #1 is 16/1
        Perimeter of Rectangle #2 is 8/1

        (Perimeter of Rectangle #1) >
          (Perimeter of Rectangle #2)

    ************************
    * Sub MENU - Comparing *
    *  1. Using Areas      *
    *  2. Using Perimeters *
    *  3. Returning        *
    ************************
    Select an option (use integer value only): 3

      Returning to previous menu!

***********************************
*         MENU - HW #6            *
*  1. Initializing (2 Rectangles) *
*  2. Area/Perimeter              *
*  3. Perspectives                *
*  4. Comparing                   *
*  5. Displaying                  *
*  6. Quit                        *
***********************************
Select an option (use integer value only): 5

  Displaying Option --
    *************************
    * Sub MENU - Displaying *
    *  1. Rectangle #1      *
    *  2. Rectangle #2      *
    *  3. Both Rectangles   *
    *  4. Returning         *
    *************************
    Select an option (integer only): 1

      Rectangle #1 Option -

      Rectangle #1:
        Address: 00E9FDC4
          Length Fraction -
            Address: 014AE0C0
            Num: 5
            Denom: 1
          Width Fraction -
            Address: 014ADF38
            Num: 3
            Denom: 1
          Upper-Left Corner -
            Address: 014A9518
              x-Fraction -
                num: 0
                denom: 1
              y-Fraction -
                num: 0
                denom: 1

    *************************
    * Sub MENU - Displaying *
    *  1. Rectangle #1      *
    *  2. Rectangle #2      *
    *  3. Both Rectangles   *
    *  4. Returning         *
    *************************
    Select an option (integer only): 2

      Rectangle #2 Option -

      Rectangle #2:
        Address: 00E9FDB8
          Length Fraction -
            Address: 014ADC28
            Num: 2
            Denom: 1
          Width Fraction -
            Address: 014AE210
            Num: 2
            Denom: 1
          Upper-Left Corner -
            Address: 014A4D60
              x-Fraction -
                num: 0
                denom: 1
              y-Fraction -
                num: 0
                denom: 1

    *************************
    * Sub MENU - Displaying *
    *  1. Rectangle #1      *
    *  2. Rectangle #2      *
    *  3. Both Rectangles   *
    *  4. Returning         *
    *************************
    Select an option (integer only): 3

      Rectangle #1 & 2 Option -

      Rectangle #1:
        Address: 00E9FDC4
          Length Fraction -
            Address: 014AE0C0
            Num: 5
            Denom: 1
          Width Fraction -
            Address: 014ADF38
            Num: 3
            Denom: 1
          Upper-Left Corner -
            Address: 014A9518
              x-Fraction -
                num: 0
                denom: 1
              y-Fraction -
                num: 0
                denom: 1

      Rectangle #2:
        Address: 00E9FDB8
          Length Fraction -
            Address: 014ADC28
            Num: 2
            Denom: 1
          Width Fraction -
            Address: 014AE210
            Num: 2
            Denom: 1
          Upper-Left Corner -
            Address: 014A4D60
              x-Fraction -
                num: 0
                denom: 1
              y-Fraction -
                num: 0
                denom: 1

    *************************
    * Sub MENU - Displaying *
    *  1. Rectangle #1      *
    *  2. Rectangle #2      *
    *  3. Both Rectangles   *
    *  4. Returning         *
    *************************
    Select an option (integer only): 4

      Returning to previous menu!

***********************************
*         MENU - HW #6            *
*  1. Initializing (2 Rectangles) *
*  2. Area/Perimeter              *
*  3. Perspectives                *
*  4. Comparing                   *
*  5. Displaying                  *
*  6. Quit                        *
***********************************
Select an option (use integer value only): 6

  Having Fun!...
*/

/* PROGRAM_OUTPUT 2
CIS 25 - C++ Programming
Laney College
Huy Tran

Information --
  Assignment:                      HW #6 Exercise #1
  Implemented by:                  Huy Tran
  Submitted Date:                  2020/12/15
  Current Number of LEB available: 0
  Allowed Number of LEB Used:      2
  Remaining Number of LEB:         0

***********************************
*         MENU - HW #6            *
*  1. Initializing (2 Rectangles) *
*  2. Area/Perimeter              *
*  3. Perspectives                *
*  4. Comparing                   *
*  5. Displaying                  *
*  6. Quit                        *
***********************************
Select an option (use integer value only): 2

    Not a proper call as no Rectangle's are available

***********************************
*         MENU - HW #6            *
*  1. Initializing (2 Rectangles) *
*  2. Area/Perimeter              *
*  3. Perspectives                *
*  4. Comparing                   *
*  5. Displaying                  *
*  6. Quit                        *
***********************************
Select an option (use integer value only): 1

  Initializing Option --

    ***************************
    * Sub MENU - INITIALIZING *
    *  1. Creating            *
    *  2. Updating            *
    *  3. Displaying          *
    *  4. Returning           *
    ***************************
    Select an option (integer only): 2

      Not a proper call as no Rectangle's are available

    ***************************
    * Sub MENU - INITIALIZING *
    *  1. Creating            *
    *  2. Updating            *
    *  3. Displaying          *
    *  4. Returning           *
    ***************************
    Select an option (integer only): 1

      Creating Option -

        Data for Rectangle #1 -
          Length as a Fraction:
            Enter an int for num: 6
            Enter an int for denom: 1
          Width as a Fraction:
            Enter an int for num: 2
            Enter an int for denom: 1
            Upper-Left Corner -
             x-Fraction -
               Enter an int for num: 0
               Enter an int for denom: 1
             y-Fraction -
               Enter an int for num: 2
               Enter an int for denom: 1

        Data for Rectangle #2 -
          Length as a Fraction:
            Enter an int for num: 4
            Enter an int for denom: 1
          Width as a Fraction:
            Enter an int for num: 2
            Enter an int for denom: 1
            Upper-Left Corner -
             x-Fraction -
               Enter an int for num: -5
               Enter an int for denom: 1
             y-Fraction -
               Enter an int for num: -2
               Enter an int for denom: 1

    ***************************
    * Sub MENU - INITIALIZING *
    *  1. Creating            *
    *  2. Updating            *
    *  3. Displaying          *
    *  4. Returning           *
    ***************************
    Select an option (integer only): 3

      Displaying Option -

        Rectangle #1:
          Address: 00BFF948
            Length Fraction -
              Address: 0107DEE0
              Num: 6
              Denom: 1
            Width Fraction -
              Address: 0107DB28
              Num: 2
              Denom: 1
            Upper-Left Corner -
              Address: 01074F70
              x-Fraction -
                num: 0
                denom: 1
              y-Fraction -
                num: 2
                denom: 1

        Rectangle #2:
          Address: 00BFF93C
            Length Fraction -
              Address: 0107DAF0
              Num: 4
              Denom: 1
            Width Fraction -
              Address: 0107DFC0
              Num: 2
              Denom: 1
            Upper-Left Corner -
              Address: 01074FB0
              x-Fraction -
                num: -5
                denom: 1
              y-Fraction -
                num: -2
                denom: 1

    ***************************
    * Sub MENU - INITIALIZING *
    *  1. Creating            *
    *  2. Updating            *
    *  3. Displaying          *
    *  4. Returning           *
    ***************************
    Select an option (integer only): 4

      Returning to previous menu!

***********************************
*         MENU - HW #6            *
*  1. Initializing (2 Rectangles) *
*  2. Area/Perimeter              *
*  3. Perspectives                *
*  4. Comparing                   *
*  5. Displaying                  *
*  6. Quit                        *
***********************************
Select an option (use integer value only): 2

  Area/Perimeter Option --

    *****************************
    * Sub MENU - Area/Perimeter *
    *  1. Computing Area        *
    *  2. Computing Perimeter   *
    *  3. Returning             *
    *****************************
    Select an option (integer only): 1

      Computing Area Option -

        Rectangle #1 -
          Address: 00BFF948
            Area (as a Fraction) -
              Value: 12 / 1

        Rectangle #2 -
          Address: 00BFF93C
            Area (as a Fraction) -
              Value: 8 / 1

    *****************************
    * Sub MENU - Area/Perimeter *
    *  1. Computing Area        *
    *  2. Computing Perimeter   *
    *  3. Returning             *
    *****************************
    Select an option (integer only): 2

      Computing Perimeter Option -

        Rectangle #1 -
          Address: 00BFF948
            Perimeter (as a Fraction) -
              Value: 16 / 1

        Rectangle #2 -
          Address: 00BFF93C
            Perimeter (as a Fraction) -
              Value: 12 / 1

    *****************************
    * Sub MENU - Area/Perimeter *
    *  1. Computing Area        *
    *  2. Computing Perimeter   *
    *  3. Returning             *
    *****************************
    Select an option (integer only): 3

      Returning to previous menu!

***********************************
*         MENU - HW #6            *
*  1. Initializing (2 Rectangles) *
*  2. Area/Perimeter              *
*  3. Perspectives                *
*  4. Comparing                   *
*  5. Displaying                  *
*  6. Quit                        *
***********************************
Select an option (use integer value only): 3

  Perspectives Option -

    **************************
    * Sub MENU - Perspective *
    *  1. Disjoining         *
    *  2. Intersecting       *
    *  3. Enclosing          *
    *  4. Return             *
    **************************
    Select an option (integer only): 1

      Rectangle #1 is disjoining with Rectangle #2

    **************************
    * Sub MENU - Perspective *
    *  1. Disjoining         *
    *  2. Intersecting       *
    *  3. Enclosing          *
    *  4. Return             *
    **************************
    Select an option (integer only): 2

      Rectangle #1 is not intersecting with Rectangle #2

    **************************
    * Sub MENU - Perspective *
    *  1. Disjoining         *
    *  2. Intersecting       *
    *  3. Enclosing          *
    *  4. Return             *
    **************************
    Select an option (integer only): 3

      Rectangle #1 is not enclosing Rectangle #2

    **************************
    * Sub MENU - Perspective *
    *  1. Disjoining         *
    *  2. Intersecting       *
    *  3. Enclosing          *
    *  4. Return             *
    **************************
    Select an option (integer only): 4

      Returning to previous menu!

***********************************
*         MENU - HW #6            *
*  1. Initializing (2 Rectangles) *
*  2. Area/Perimeter              *
*  3. Perspectives                *
*  4. Comparing                   *
*  5. Displaying                  *
*  6. Quit                        *
***********************************
Select an option (use integer value only): 4

  Comparing Option -

    ************************
    * Sub MENU - Comparing *
    *  1. Using Areas      *
    *  2. Using Perimeters *
    *  3. Returning        *
    ************************
    Select an option (use integer value only): 1

      Using Areas Option -
        Area of Rectangle #1 is 12/1
        Area of Rectangle #2 is 8/1

        (Area of Rectangle #1) >
          (Area of Rectangle #2)

    ************************
    * Sub MENU - Comparing *
    *  1. Using Areas      *
    *  2. Using Perimeters *
    *  3. Returning        *
    ************************
    Select an option (use integer value only): 2

      Using Perimeters Option -
        Perimeter of Rectangle #1 is 16/1
        Perimeter of Rectangle #2 is 12/1

        (Perimeter of Rectangle #1) >
          (Perimeter of Rectangle #2)

    ************************
    * Sub MENU - Comparing *
    *  1. Using Areas      *
    *  2. Using Perimeters *
    *  3. Returning        *
    ************************
    Select an option (use integer value only): 3

      Returning to previous menu!

***********************************
*         MENU - HW #6            *
*  1. Initializing (2 Rectangles) *
*  2. Area/Perimeter              *
*  3. Perspectives                *
*  4. Comparing                   *
*  5. Displaying                  *
*  6. Quit                        *
***********************************
Select an option (use integer value only): 5

  Displaying Option --
    *************************
    * Sub MENU - Displaying *
    *  1. Rectangle #1      *
    *  2. Rectangle #2      *
    *  3. Both Rectangles   *
    *  4. Returning         *
    *************************
    Select an option (integer only): 1

      Rectangle #1 Option -

      Rectangle #1:
        Address: 00BFF948
          Length Fraction -
            Address: 0107DEE0
            Num: 6
            Denom: 1
          Width Fraction -
            Address: 0107DB28
            Num: 2
            Denom: 1
          Upper-Left Corner -
            Address: 01074F70
              x-Fraction -
                num: 0
                denom: 1
              y-Fraction -
                num: 2
                denom: 1

    *************************
    * Sub MENU - Displaying *
    *  1. Rectangle #1      *
    *  2. Rectangle #2      *
    *  3. Both Rectangles   *
    *  4. Returning         *
    *************************
    Select an option (integer only): 2

      Rectangle #2 Option -

      Rectangle #2:
        Address: 00BFF93C
          Length Fraction -
            Address: 0107DAF0
            Num: 4
            Denom: 1
          Width Fraction -
            Address: 0107DFC0
            Num: 2
            Denom: 1
          Upper-Left Corner -
            Address: 01074FB0
              x-Fraction -
                num: -5
                denom: 1
              y-Fraction -
                num: -2
                denom: 1

    *************************
    * Sub MENU - Displaying *
    *  1. Rectangle #1      *
    *  2. Rectangle #2      *
    *  3. Both Rectangles   *
    *  4. Returning         *
    *************************
    Select an option (integer only): 3

      Rectangle #1 & 2 Option -

      Rectangle #1:
        Address: 00BFF948
          Length Fraction -
            Address: 0107DEE0
            Num: 6
            Denom: 1
          Width Fraction -
            Address: 0107DB28
            Num: 2
            Denom: 1
          Upper-Left Corner -
            Address: 01074F70
              x-Fraction -
                num: 0
                denom: 1
              y-Fraction -
                num: 2
                denom: 1

      Rectangle #2:
        Address: 00BFF93C
          Length Fraction -
            Address: 0107DAF0
            Num: 4
            Denom: 1
          Width Fraction -
            Address: 0107DFC0
            Num: 2
            Denom: 1
          Upper-Left Corner -
            Address: 01074FB0
              x-Fraction -
                num: -5
                denom: 1
              y-Fraction -
                num: -2
                denom: 1

    *************************
    * Sub MENU - Displaying *
    *  1. Rectangle #1      *
    *  2. Rectangle #2      *
    *  3. Both Rectangles   *
    *  4. Returning         *
    *************************
    Select an option (integer only): 4

      Returning to previous menu!

***********************************
*         MENU - HW #6            *
*  1. Initializing (2 Rectangles) *
*  2. Area/Perimeter              *
*  3. Perspectives                *
*  4. Comparing                   *
*  5. Displaying                  *
*  6. Quit                        *
***********************************
Select an option (use integer value only): 6

  Having Fun!...
*/

/* Logic_Code_Output_Issues
* 
* No Comments.
* 
*/