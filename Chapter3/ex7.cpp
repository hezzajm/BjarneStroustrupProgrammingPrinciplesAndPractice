//
// Created by hezza on 6/16/2023.
//
#include "../std_lib_facilities.h"

using namespace std;

int main(){
    vector<string> v;
    string str1, str2, str3 = "???";

    cout << "Please enter three strings values" << endl;
    cin >> str1 >> str2 >> str3;

    if (!cin)
        error("something went wrong, couldn't read strings");

    v.push_back(str1);
    v.push_back(str2);
    v.push_back(str3);

    sort(v.begin(), v.end());

    string first = v[0];
    string second = v[1];
    string third = v[2];

    cout << "Sorted strings: " << first << ", " << second << ", " << third <<'\n';

}
