//
// Created by hezza on 7/20/2023.
//
#include "../std_lib_facilities.h"

using namespace std;

int main() {

    double val1 = 0;
    double smallest = 0;
    double largest = 0;
    cout << "Please enter an number" << endl;

    while (cin>>val1) {

        cout << val1 << " entered" << endl;
        if (val1 < smallest || smallest== 0) {
            cout << "Smallest so far" << endl;
            smallest = val1;
        } else if (val1 > largest || largest== 0) {
            cout << "Largest so far" << endl;
            largest = val1;
        }

    }


}