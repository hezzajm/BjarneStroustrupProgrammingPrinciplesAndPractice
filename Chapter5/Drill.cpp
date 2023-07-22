//
// Created by hezza on 7/22/2023.
//

#include "../std_lib_facilities.h"

using namespace std;

int main()
try {
    string s = "ape";
    if (s!="fool") cout << "Success!" << '\n';

    keep_window_open();
    return 0;
}
catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}
catch (...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
