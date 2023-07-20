//
// Created by hezza on 7/20/2023.
//
#include "../std_lib_facilities.h"

using namespace std;

void almostEqual(double a, double b){
    if(abs(a-b)<0.01) {
        cout << "The numbers are almost equal" << endl;
    }
}

int main() {

    double val1, val2;
    cout << "Please enter two numbers" << endl;

    while (cin>>val1>>val2){
        if(val1>val2){
            cout << "The smaller value is " << val2 << endl;
            almostEqual(val1,val2);
        }
        else if(val1<val2){
            cout << "The smaller value is " << val1 << endl;
            almostEqual(val1,val2);
        }
        else if(val1==val2){
            cout << "The  numbers are equal" << endl;
        }
    }



}