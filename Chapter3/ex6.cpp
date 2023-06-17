//
// Created by hezza on 6/16/2023.
//
#include "../std_lib_facilities.h"
using namespace std;

int main(){
    vector<int> v;
    int val1, val2, val3;

    cout << "Please enter three integer values" << endl;
    cin >> val1 >> val2 >> val3;

    if (!cin)
        error("something went wrong, couldn't read values");
    v.push_back(val1);
    v.push_back(val2);
    v.push_back(val3);

    sort(v.begin(), v.end());

    int smallest = v[0];
    int middle = v[1];
    int largest = v[2];

    cout << "Sorted values: " << smallest << ", " << middle << ", " << largest <<'\n';


}
