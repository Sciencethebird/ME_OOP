// Fig. 9.20: Square.cpp
// Square class member-function definitions.
#include <iostream>  

using std::cout;

#include "Square.h"   // Square class definition

// default constructor
Square::Square( int xValue, int yValue, double l)
   : Point( xValue, yValue )  // call base-class constructor
{
   setSideLength(l);

} // end Square constructor

// set radius 
void Square::setSideLength( double l )
{
    sidelength = ( l < 0.0 ? 0.0 : l);

} // end function setRadius

// return radius 
double Square::getSideLength() const
{
   return sidelength;

} // end function getRadius

// calculate and return diameter
double Square::getPerimeter() const
{
   return 4 * getSideLength();

} // end function getDiameter

// calculate and return circumference
double Square::getArea() const
{
   return getSideLength()*getSideLength();

} // end function getCircumference


// output Square object
void Square::print() const
{
   cout << "Center = ";
   Point::print();      // invoke Point3's print function
   cout << "; Side Length = " << getSideLength();

} // end function print

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
