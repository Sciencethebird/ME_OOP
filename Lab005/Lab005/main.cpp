//
//  main.cpp
//  Lab005
//
//  Created by Sciencethebird on 2018/10/19.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

// Fig. 7.10: fig07_10.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
#include "Employee1.h"  // Employee class definition

int main()
{
    vector<Employee> list;
    for(int i = 0; i< 10; i++){
      
        string first_n, last_n,country, city;
        int y, m, d;
        std::cin>> first_n >> last_n
                >> y >> m >> d
                >> country >> city;
        //yay
        Date birth(m, d, y);
        Employee temp(first_n.c_str(), last_n.c_str(), birth);
        temp.set_country(country).set_city(city);
        
        list.push_back(temp);
    }
    for(int i = 0; i< 10; i++)
        list[i].print();
    
    return 0;
    
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

