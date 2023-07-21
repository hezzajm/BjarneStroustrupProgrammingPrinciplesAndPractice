//
// Created by hezza on 7/21/2023.
//
#include "../std_lib_facilities.h"

using namespace std;


int main() {

    try {
        cout << "Please enter two numbers with an operator between" << endl;
        double val1, val2;
        char op;

        while (cin >> val1 >> op >> val2) {
            string oper;
            double result;
            switch (op) {
                case '+':
                    oper = "The sum of ";
                    result = val1 + val2;
                    break;
                case '-':
                    oper = "The difference between ";
                    result = val1 - val2;
                    break;
                case '/':
                    oper = "The ratio of ";
                    if(val2 ==0) error("Tring to divide by zero");
                    result = val1 / val2;
                    break;
                case '*':
                    oper = "The product of ";
                    result = val1 * val2;
                    break;
                default:
                    error("bad operator");
            }
            cout << oper << val1 << " and " << val2 << " is " << result << '\n';
            cout << "Enter another computation:" << endl;
        }
    }
    catch (runtime_error e) {	// this code is to produce error messages; it will be described in Chapter 5
        cout << e.what() << '\n';
        //keep_window_open("~");	 For some Windows(tm) setups
    }
    catch (...) {	// this code is to produce error messages; it will be described in Chapter 5
        cout << "exiting\n";
        // keep_window_open("~");	 For some Windows(tm) setups
    }
}
