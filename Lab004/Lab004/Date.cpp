//
//  Date.cpp
//  Lab004_test
//
//  Created by Sciencethebird on 2018/10/12.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#include "Date.h"
#include <iostream>
using namespace std;

Date::Date(){}

Date::Date(int y, int m, int d)
:Year(y), Month(m), Day(d){}
    

Date* Date::set_birthdays(){
    
    Date* birthdays = new Date [10];
    for(int i = 0; i< 10; i++){
        int y, m, d;
        cin >> y >> m >> d;
        birthdays[i] = Date(y, m, d);
    }
    return birthdays;
}

void Date::sort_birthdays(Date * in){
    
    long long  temp[10];
    for(int i = 0; i< 10;i++){
        temp[i] = 31*12*in[i].Year + 31*in[i].Month+ in[i].Day;
        cout << temp[i]  << endl;
    }
    for(int i = 0; i< 10;i++)
        for(int j = i+1;j< 10;j++)
            if(temp[i]>temp[j]){
                long long t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
                my_swap(in[i], in[j]);
            }
    print_birthdays(in);
}
void Date::print_birthdays(Date * in){
    cout << "Sorted "<<endl;
    for(int i = 0; i< 10; i++){
        cout << in[i] << endl;
    }
}

void my_swap(Date&a, Date&b){
    Date temp = a;
    a = b;
    b = temp;
}

ostream& operator << (ostream &out , Date in){
    out << in.Year <<" "<< in.Month << " " << in.Day;
    return out;
}
