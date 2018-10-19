// Fig. 7.9: Character1.cpp
// Member-function definitions for class Character.
#include "pch.h"
#include <iostream>

using std::cout;
using std::endl;
#include <cstring>      // strcpy and strlen prototypes

#include "Character.h"  //  class definition
#include "Date1.h"      // Date class definition

// constructor uses member initializer list to pass initializer
// values to constructors of member objects birthDate and      
// hireDate [Note: This invokes the so-called "default copy    
// constructor" which the C++ compiler provides implicitly.]   
Character::Character( const char *first, const char *last,
   const Date &dateOfBirth)
   : birthDate( dateOfBirth )// initialize birthDate
{
   // copy first into firstName and be sure that it fits
   int length = (int)strlen( first );
   length = ( length < 25 ? length : 24 );
   strncpy( firstName, first, length );
   firstName[ length ] = '\0';
   // copy last into lastName and be sure that it fits
   length = (int)strlen( last );
   length = ( length < 25 ? length : 24 );
   strncpy( lastName, last, length );
   lastName[ length ] = '\0';
   // output Character object to show when constructor is called


} // end Character constructor

// print Character object
void Character::print() const
{
    cout << lastName << ", " << firstName;
    cout << std::endl <<"   Birth date: ";
    birthDate.print();
    
    cout <<std::endl <<"   Country: " << Country<<'\n';
    cout << "   City: " << City<<'\n';
    cout << endl;

} // end function print

Character& Character::set_firstName(string n){
    strcpy(firstName, n.c_str());
    return *this;
}
Character& Character::set_lastName(string n){
    strcpy(lastName, n.c_str());
    return *this;
}
// output Character object to show when its destructor is called
Character::~Character()
{  

} // end ~Character destructor

Character& Character::set_country(string c){
    Country = c;
    return *this;
}
Character& Character::set_city(string c){
    City = c;
    return *this;
}
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
