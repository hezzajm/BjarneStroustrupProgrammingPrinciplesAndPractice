//
// Created by hezza on 7/22/2023.
//
#include "../std_lib_facilities.h"

using namespace std;
// Write a program that writes out the first so many values of the Fibonacci series, that is, the series that starts with 1 1 2 3 5 8 13 21 34. The next number of the series is the sum of the two previous ones. Find the largest Fibonacci number that fits in an int.


int main()
{
    try{

        int n = 1;
        int m = 1;
        while (n<m+1){ // To match definition from exercise i.e. F[0] = 1, F[1] = 1 etc.
            cout << n <<'\n';
            int x = n+m;
            n=m;
            m=x;
        }

    cout << "The largest fibonacci number that fits an int is " << n << '\n';

    }
    catch (runtime_error& e) {
        cerr << "runtime error: " << e.what() << '\n';
        keep_window_open();
        return 1;         // 1 indicates failure
    }
}
