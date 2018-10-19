//
//  main.cpp
//  Lab002
//
//  Created by Sciencethebird on 2018/9/28.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
double my_pow(double n, int pow){
    double temp = 1;
    for(int i = 0; i< pow; i++)
        temp *=n;
    return temp;
}
void Function1(int &n){
    cout << "Enter Your ID: ";
    cin >> n;
};
int Function2(int &n){
    string temp = to_string(n);
    int len = (int)temp.length();
    int min = 9;
    for(int i = 0; i< len;i++)
        if(temp[i]-'0' < min)
            min = temp[i]-'0';
    int m1 = min, m2 = min;
    for(int i = 0; i< len;i++)
        if(temp[i]-'0' > m1)
            m1 = temp[i]-'0';
    for(int i = 0; i< len;i++)
        if(temp[i]-'0' > m2 && temp[i]-'0' < m1)
            m2 = temp[i]-'0';
    //cout << m1 << " " << m2  << endl;
    return (m1+m2)/2;
}
void ans_Function3(const int n, int y){
    cout <<pow(n, (double)1/y)<<endl;
}
double Function3(const int n, int y){
    double ans = 1, ub = n, lb = 1;
    while(1){
        ans = lb;
        double temp = (double)(ub+lb)/2;
        if(my_pow(temp, y) > n)
            ub = temp;
        else
            lb = temp;
        if(ub - lb <0.00001)
            break;
    }
    cout << "ans = "<< ans << endl;
    return lb;
}
int main() {
    int id;
    Function1(id);
    cout << "Two Max avg = "<<Function2(id) << endl;
    //cout << "y " <<Function2(id) <<endl;
    
    Function3(id, Function2(id));
    //Function3(89, 5);
    //ans_Function3(id, Function2(id));
    return 0;
}
