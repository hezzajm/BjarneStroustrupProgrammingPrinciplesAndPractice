//
// Created by hezza on 8/4/2023.
//



#include "../std_lib_facilities.h"

using namespace std;

void print(const string& label, const vector<int>& v)
// print vector to cout
{
    cout << label << "( ";
    for (int i = 0; i<v.size(); ++i) cout << v[i] << ' ';
    cout << ")\n";
}

void reverse1(vector<int>& v)
// reverse by putting elements into a new vector in reverse order
{
    vector<int> v2;
    for (int i = v.size()-1; 0<=i; --i)	// copy "backwards"
        v2.push_back(v[i]);
    v = v2;
}

void reverse2(vector<int>& v)
// reverse by swapping "corresponding" elements
{
    for(int i = 0; i<v.size()/2; ++i)
        swap(v[i],v[v.size()-1-i]);	// first swaps with last, etc.
}


int main(){
    try
    {
        vector<int> val;

        cout << "Please enter a sequence of integers ending with any non-digit character: ";
        int i;
        while (cin>>i) val.push_back(i);
        print("\nInput:\n",val);
        reverse1(val);
        print("\nReversed once:\n",val);
        reverse2(val);
        print("\nReversed again:\n",val);


        keep_window_open("~");	// For some Windows(tm) setups
    }
    catch (runtime_error e) {	// this code is to produce error messages; it will be described in Chapter 5
        cout << e.what() << '\n';
        keep_window_open("~");	// For some Windows(tm) setups
    }
    catch (...) {	// this code is to produce error messages; it will be described in Chapter 5
        cout << "exiting\n";
        keep_window_open("~");	// For some Windows(tm) setups
    }

}