//
// Created by hezza on 7/21/2023.
//
#include "../std_lib_facilities.h"

using namespace std;

vector<string> numbers;

void initialize_numbers()
{
    numbers.push_back("zero");
    numbers.push_back("one");
    numbers.push_back("two");
    numbers.push_back("three");
    numbers.push_back("four");
    numbers.push_back("five");
    numbers.push_back("six");
    numbers.push_back("seven");
    numbers.push_back("eight");
    numbers.push_back("nine");
    numbers.push_back("ten");
}

int get_number(){
    const int not_a_symbol = numbers.size();
    int val = not_a_symbol;
    if(cin >> val) return val; //try to real an integer composed of digits

    cin.clear(); //clear string after failed attempt to read an integer
    string s;
    cin >> s;

    for(int i =0; i<numbers.size();++i)
        if(numbers[i]==s) val = i;
    if (val ==not_a_symbol) error("unexpected number string: ", s);
    return val;

}


int main() {

    try {

        initialize_numbers();
        cout << "Please enter two numbers with an operator between" << endl;

        while (true) {
            int val1 = get_number();

            char op = 0;
            cin >> op; //get the operator
            int val2 = get_number();

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
                    if(val2 ==0) error("Trying to divide by zero");
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
