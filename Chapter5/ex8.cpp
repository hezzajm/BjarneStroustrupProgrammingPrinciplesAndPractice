//
// Created by hezza on 7/22/2023.
//
//
// Created by hezza on 7/22/2023.
//
#include "../std_lib_facilities.h"

using namespace std;




int main()
{
    try{
        cout << "Please enter the number of values you want to sum:" << endl;
        int n = -1;
        int sum = 0;
        cin >> n;
        if (n<1) error ("Need a positive integer to sum ");
        cout << "Please enter some integers (press '|' to stop)" << endl;
        vector<int> v;
        int val;
        while(cin >> val) v.push_back(val);


        if (n>v.size()) error ("Not enough numbers entered, need" , n);
        for(int i=0;i<n;++i){
            sum += v[i];
        }
        cout << "The sum of the first " << n << " numbers is " << sum << endl;
    }
    catch (runtime_error& e) {
        cerr << "runtime error: " << e.what() << '\n';
        keep_window_open();
        return 1;         // 1 indicates failure
    }
}
