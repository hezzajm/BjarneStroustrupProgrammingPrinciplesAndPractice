//
// Created by hezza on 8/10/2023.
//


#include "../std_lib_facilities.h"

//How many bytes are there in an int? In a double? In a bool?
// Do not use sizeof except to verify your answer.
/*
int size(int){
    int*p = new int[2];
    //Turns the pointer into char*s, i.e. the byte addresses
    int s = reinterpret_cast<char*>(&p[1]) - reinterpret_cast<char*>(&p[0]);
    delete[] p;
    return s;
}
*/
template<class T> int size(T){
    T*p = new T[2];
    int s = reinterpret_cast<char*>(&p[1])- reinterpret_cast<char*>(&p[0]);
    delete[] p;
    return s;
}

int main(){
    double d = 2;
    int x = size(d);
    cout << x << endl;
}