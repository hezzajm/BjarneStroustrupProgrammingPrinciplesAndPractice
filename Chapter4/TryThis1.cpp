//
// Created by hezza on 7/20/2023.
//

#include "../std_lib_facilities.h"

using namespace std;
// Converts yen,kroner and dollars into pounds
int main()
{
    constexpr double yen_to_dollar = 0.0072;
    constexpr double kroner_to_dollar = 0.15;
    constexpr double pound_to_dollar = 1.29;
    char curr = ' ';
    double amount = 0;

    cout << "Please enter the first letter of a currency to convert to dollars followed by an amount" << endl;
    cin >> curr >> amount;

    if(curr=='y'){
        cout << amount << " yen is " << amount*yen_to_dollar << " dollars" << endl;
    }
    else if (curr == 'k'){
        cout << amount << " kroner is " << amount*kroner_to_dollar << " dollars" << endl;
    }
    else if(curr == 'p'){
        cout << amount << " pounds is " << amount*pound_to_dollar << " dollars" << endl;
    }
    else {
        cerr << "Sorry, I don't recognise that currency" << endl;
    }

}