//
//  main.cpp
//  Lab003
//
//  Created by Sciencethebird on 2018/10/5.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//
#define sz 14
#include <iostream>
#include <algorithm>
using namespace std;
void bubble_sort(int *data, const int arr_sz){
    for(int i = 0; i< arr_sz;i++)
        for(int j = i+1;j< arr_sz;j++)
            if(data[j]<data[i])
                swap(data[i], data[j]);
}
void print(int** A, int size){
    for(int i = 0; i< size; i++){
        for(int j = 0; j< size; j++)
            cout << A[i][j] << " ";
        cout <<endl;
    }
}
int** function1(int *ID){
    
    int offset = 0;
    int **matrix;
    matrix = new int* [14];
    for(int i = 0; i< 14; i++)
        matrix[i] = new int [14];
    for(int i = 0; i< 14; i++){
        for(int j = 0; j< 14; j++)
            matrix[i][j] = ID[(j+offset)%14];
        offset++;
    }
    return matrix;
}
void function2(int* data, const int size){
    bubble_sort(data, size);
    for(int i = 0; i< size;i++)
        cout << data[i] << " ";
    cout << endl;
}
void function3(int ** A, int ** B){
    int answer[sz][sz];
    for(int i = 0; i< sz; i++)
        for(int j = 0; j< sz; j++){
            answer[i][j] = 0;
            for(int k = 0; k< sz; k++){
                answer[i][j] += A[i][k]*B[k][j];
            }
        }
    for(int i = 0; i< sz; i++){
        for(int j = 0; j< sz; j++)
            cout << answer[i][j] << " ";
        cout << endl;
    }
    
}
int main(int argc, const char * argv[]) {
    int ID[14] = {0, 5, 1, 1, 1, 0, 5, 0, 5, 1, 1, 1, 0, 5};
    print(function1(ID), sz);
    cout << "sorted: ";
    function2(ID, sz);
    function3(function1(ID),  function1(ID));
    system("pause");
    return 0;
}
