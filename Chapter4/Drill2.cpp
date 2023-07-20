//
// Created by hezza on 7/20/2023.
//
#include "../std_lib_facilities.h"

using namespace std;

int main() {

    double val1, val2;
    cout << "Please enter two integers" << endl;

    while (cin>>val1>>val2){
        if(val1>val2){
            cout << "The smaller value is " << val2 << endl;
            if(abs(val1-val2)<0.01){
                cout << "The numbers are almost equal" << endl;
            }
        }
        else if(val1<val2){
            cout << "The smaller value is " << val1 << endl;
            if(abs(val1-val2)<0.01){
                cout << "The numbers are almost equal" << endl;
            }
        }
        else if(val1==val2){
            cout << "The  numbers are equal" << endl;
        }
    }



}