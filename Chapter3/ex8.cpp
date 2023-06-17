//
// Created by hezza on 6/16/2023.
//
#include "../std_lib_facilities.h"

using namespace std;
//Test if an integer value is odd or even


int main()
{
    int val = 0;

    cout << "Please enter a number" << endl;
    cin >> val;

    if (!cin)
        error("something went wrong, couldn't read value");

    if(val % 2 ==0){
        cout << "The value " << val << " is an even number";
    }
    else{
        cout << "The value " << val << " is an odd number";
    }

}


