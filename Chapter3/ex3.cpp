//
// Created by hezza on 6/16/2023.
//
#include <iostream>
#include <string>
using namespace std;
//Legal and illegal names

int main()
{
    int double = 0; // Error C2632: 'int' followed by double is illegal, no variable declared before =
    string int test = '3'; //Error C2628: std::string followed by 'int' is illegal,
    long long 9d = 3; // Error C2059: user defined literal
}

