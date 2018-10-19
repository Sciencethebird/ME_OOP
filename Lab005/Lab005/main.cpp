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
#include "Character.h"  // Character class definition

int main()
{
    cout << "Testing data avalible at the bottom of main.cpp" << std::endl;
    vector<Character> list;
    for(int i = 0; i< 10; i++){
      
        string first_n, last_n,country, city;
        int y, m, d;
        std::cin>> first_n >> last_n
                >> y >> m >> d
                >> country >> city;
        //yay
        Date birth(m, d, y);
        Character temp(first_n.c_str(), last_n.c_str(), birth);
        temp.set_country(country).set_city(city);
        
        list.push_back(temp);
    }
    for(int i = 0; i< 10; i++)
        list[i].print();
    
    return 0;
    
}// end main

/* copy / modify the test data below
 
 format: First name, Last name, Y, M, D, City, Country
 
Johney Walker 2005 4 12 Kabul Afghanistan
Jimmy Li 1997 9 23 Ottawa Canada
Steve Jobs 2006 3 15 Taipei Taiwan
Amy Wong 1983 4 4 Tokyo Japan
Stevin Morrison 1993 1 1 London France
Ching Chang 2080 8 12 Havana Cuba
Justin Beiber 3096 4 4 Cairo Egypt
Joah Schenider 1895 7 7 Pretoria South_Africa
Mike Houng 2080 9 9 Madrid Spain
Jacky Cho 2023 4 31 Budapest Hungary
 
*/


