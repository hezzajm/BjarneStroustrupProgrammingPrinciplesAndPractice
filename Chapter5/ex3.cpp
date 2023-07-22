//
// Created by hezza on 7/22/2023.
//
//
// Created by hezza on 7/22/2023.
//
#include "../std_lib_facilities.h"

using namespace std;


double ctok(double c)                   // converts Celsius to Kelvin
{
    double k = c + 273.15;
    if (c < -273.15) error("Temperature below absolute zero");
    return k;
}

int main()
{
    try{
        double c = 0;                         // declare input variable
        cin >> c;                                // retrieve temperature to input variable
        double k = ctok(c);                     // convert temperature
        cout << k << '\n';                 // print out temperature

    }
    catch (runtime_error& e) {
        cerr << "runtime error: " << e.what() << '\n';
        keep_window_open();
        return 1;         // 1 indicates failure
    }
}

{
    try{
        double c = 0;                         // declare input variable
        cin >> c;                                // retrieve temperature to input variable
        double k = ctok(c);                     // convert temperature
        cout << k << '\n';                 // print out temperature

    }
    catch (runtime_error& e) {
        cerr << "runtime error: " << e.what() << '\n';
        keep_window_open();
        return 1;         // 1 indicates failure
    }
}
