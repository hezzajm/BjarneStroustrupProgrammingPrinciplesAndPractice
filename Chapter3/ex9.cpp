//
// Created by hezza on 6/16/2023.
//

//Write a program that converts spelled-out numbers and prints out the corresponding digit

#include <iostream>

using namespace std;

int main()
{
    cout << "Please spell out a number" << endl;
    string num;
    cin>>num;
    while(cin >> num) {
        if (num == "zero") {
            cout << "The number you entered is " << 0 << endl;
        } else if (num == "one") {
            cout << "The number you entered is " << 1 << endl;
        } else if (num == "two") {
            cout << "The number you entered is " << 2 << endl;
        } else if (num == "three") {
            cout << "The number you entered is " << 3 << endl;
        } else if (num == "four") {
            cout << "The number you entered is " << 4 << endl;
        } else {
            cout << "Not a number I know" << endl;
        }
    }
}