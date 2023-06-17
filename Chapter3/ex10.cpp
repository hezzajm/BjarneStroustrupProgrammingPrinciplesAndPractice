//
// Created by hezza on 6/17/2023.
//


#include "../std_lib_facilities.h"

using namespace std;

int main(){
    string operation;
    double val1;
    double val2;

    cout << "Please enter an operand followed by two values" << endl;
    cin >> operation >> val1 >> val2;

    if(!cin){
        error("Error reading operands or values");
    }

    double ans;
    if(operation == "+" || operation == "plus"){
        ans = val1 + val2;
    }
    else if(operation == "-" || operation == "minus"){
        ans = val1 - val2;
    }
    else if(operation == "/" || operation == "div"){
        ans = val1 / val2;
    }
    else if(operation == "*" || operation == "mul"){
        ans = val1 * val2;
    }
    else error("Invalid operator");
    cout << val1 << operation << val2 << " is " << ans << "\n";


}