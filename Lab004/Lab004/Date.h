//
//  Date.h
//  Lab004_test
//
//  Created by Sciencethebird on 2018/10/12.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#ifndef Date_h
#define Date_h
#include <iostream>
class Date{
public:
    Date();
    Date(int , int , int );
    Date* set_birthdays();
    void sort_birthdays(Date*);
    void print_birthdays(Date*);
    friend std::ostream& operator << (std::ostream &out , Date in);
    friend void my_swap(Date&, Date&);
private:
    int Year, Month, Day;
};

#endif /* Date_h */
