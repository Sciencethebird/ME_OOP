// Fig. 9.19: Square.h
// Square class contains x-y coordinate pair and radius.
#ifndef Square_H
#define Square_H

#include "point.h"  // Point3 class definition

class Square : public Point {

public:

   // default constructor
   Square( int = 0, int = 0, double = 0.0 );

   void setSideLength( double );   // set SideLength
   double getSideLength() const;   // return SideLength
   double getPerimeter() const;  // return circumference
   double getArea() const;           // return area

   void print() const;         // output Square object

private: 
   double sidelength;  // Square's radius

}; // end class Square

#endif 

/**************************************************************************
 * (C) Copyright 1992-2003 by Deitel & Associates, Inc. and Prentice      *
 * Hall. All Rights Reserved.                                             *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
