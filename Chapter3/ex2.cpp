//
// Created by hezza on 6/16/2023.
//
#include "../std_lib_facilities.h"

using namespace std;
//Write a program that converts from miles to kilometers

double milesToKilometres(double miles);

int main()
{
    double miles = 0;
    cout << "Please enter a number of miles to convert:" << endl;
    cin >> miles;

    if (!cin) {
        error("something went wrong, couldn't read values");
    }

    double kilometres = milesToKilometres(miles);
    cout << miles << " miles is " << kilometres << " kilometres." << endl;
}

double milesToKilometres(double miles){
    return miles*1.609;
}
