//
// Created by hezza on 8/4/2023.
//


#include "../std_lib_facilities.h"

using namespace std;

void print(const string& name, const vector<int>& v){

    cout << "The vector '" << name << "' is " << endl;
    for(auto i :v){
        cout << i << "\n";
    }


}

vector<int> fibonacci(int x, int y, vector<int> &v, int n) {

    if(n<1) return v;
    if(1<=n) v.push_back(x);
    if(1<=2) v.push_back(y);

    for(int i = 2; i<n; ++i){
        int z = x+y;
        v.push_back(z);
        x = y;
        y = z;

    }
    return v;

};

int main(){
    vector<int> v {1,2};
    string label = "Random label";
    print(label, v);
    string s = "fibonacci";
    vector<int> v1;
    print(s, fibonacci(1,2,v1,200));

}