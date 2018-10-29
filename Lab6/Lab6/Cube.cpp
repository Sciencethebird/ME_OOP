// Fig. 9.23: Cube.cpp
// Cube class inherits from class Circle4.
#include <iostream>  

using std::cout;

#include "Cube.h"   // Cube class definition

// default constructor
Cube::Cube( int xValue, int yValue, double l,
  double heightValue)
  : Square( xValue, yValue, l)
{
   setHeight( heightValue );

} // end Cube constructor

// set Cube's height
void Cube::setHeight( double heightValue )
{
   height = ( heightValue < 0.0 ? 0.0 : heightValue );

} // end function setHeight

// get Cube's height
double Cube::getHeight() const
{
   return height;

} // end function getHeight

// redefine Square function getArea to calculate Cube area
double Cube::getArea() const
{
   return 2*Square::getArea() +
    4* Square::getSideLength()*getHeight();

} // end function getArea

// calculate Cube volume
double Cube::getVolume() const
{
   return Square::getArea() * getHeight();

} // end function getVolume

// output Cube object
void Cube::print() const
{
   Square::print();
   cout << "; Height = " << getHeight();

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
