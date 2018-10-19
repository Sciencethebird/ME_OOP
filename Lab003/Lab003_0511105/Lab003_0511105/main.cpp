//
//  main.cpp
//  Lab003_0511105
//
//  Created by Sciencethebird on 2018/10/5.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void bubble_sort(int *data, const int arr_sz){
    for(int i = 0; i< arr_sz;i++)
        for(int j = i+1;j< arr_sz;j++)
            if(data[j]<data[i])
                swap(data[i], data[j]);
}
void print(int* data, int arr_sz){
    for(int i =0;i< arr_sz; i++)
        cout << data[i] << " ";
    cout << endl;
}

int main(int argc, const char * argv[]) {
    
    int arr_sz = 0, i = 0;
    std::cout << "Enter Array = " << endl;
    string buffer;
    getline(cin, buffer);
    int buffer_sz = buffer.size();
    for(int i = 0; i<buffer_sz;i++)
    int *data = new int [arr_sz];
    for(int i = 0; i< arr_sz;i++)
        data[i] = buffer[i];
    print(data, arr_sz);
    bubble_sort(data, arr_sz);
    print(data, arr_sz);
    return 0;
}
