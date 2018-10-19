// Fig. 7.8: employee1.h
// Employee class definition.
// Member functions defined in employee1.cpp.
#ifndef EMPLY1_H
#define EMPLY1_H

// include Date class definition from date1.h
#include "Date1.h"
#include <string>
using std::string;

class Employee {

public:
    Employee(){}
    Employee(const char *, const char *, const Date &);
    Employee &set_country(string);
    Employee &set_city(string);
    Employee &set_firstName(string);
    Employee &set_lastName(string);
    void set_birthDate(int, int, int);
    void print() const;
    ~Employee();  // provided to confirm destruction order

private:
    char firstName[ 25 ];
    char lastName[ 25 ];
    
    const Date birthDate;  // composition: member object
    const Date hireDate;   // composition: member object
    
    string Country;
    string City;

}; // end class Employee

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
