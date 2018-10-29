//
//  main.cpp
//  Lab6
//
//  Created by Sciencethebird on 2018/10/26.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

// Fig. 9.24: cylindertest.cpp
// Testing class Cylinder.
#include <iostream>

using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>

using std::setprecision;

#include "Cube.h"  // Cylinder class definition

int main()
{
    // instantiate Cylinder object
    Cube cube( 12, 23, 2.5, 5.7 );
    
    // display point coordinates
    cout << "X coordinate is " << cube.getX()
    << "\nY coordinate is " << cube.getY()
    << "\nSide Length is " << cube.getSideLength()
    << "\nHeight is " << cube.getHeight();
    
    cube.setX( 2 );          // set new x-coordinate
    cube.setY( 2 );          // set new y-coordinate
    cube.setSideLength( 4.25 );  // set new side length
    cube.setHeight( 10 );    // set new height
    
    // display new cube value
    cout << "\n\nThe new location and radius of circle are\n";
    cube.print();
    
    // display floating-point values with 2 digits of precision
    cout << fixed << setprecision( 2 );
    
    // display cube's perimeter
    cout << "\n\nPerimeter is " << cube.getPerimeter();
    
    // display cube's area
    cout << "\nArea is "
    << cube.getArea();
    
    // display cube's volume
    cout << "\nVolume is " << cube.getVolume();
    
    cout << endl;
    
    return 0;  // indicates successful termination
    
} // end main

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

