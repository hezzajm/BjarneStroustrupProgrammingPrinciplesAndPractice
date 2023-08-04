//
// Created by hezza on 8/4/2023.
//



#include "../std_lib_facilities.h"

using namespace std;

template <typename T>
void print(const string& label, const vector<T>& v)
{
    cout << label << "( ";
    for (const auto& i : v) cout << i << ' ';
    cout << ")\n";
}

vector<string> reverse1(vector<string>& v)
// reverse by putting elements into a new vector in reverse order
{
    vector<string> v2;
    for (int i = v.size()-1; 0<=i; --i)	// copy "backwards"
        v2.push_back(v[i]);
    v = v2;

    return v;
}

vector<string> reverse2(vector<string>& v)
// reverse by swapping "corresponding" elements
{
    for(int i = 0; i<v.size()/2; ++i)
        swap(v[i],v[v.size()-1-i]);	// first swaps with last, etc.

    return v;
}


int main(){
    try
    {
        vector<string> val;

        cout << "Please enter a sequence of strings ending with |";
        string s;
        while (cin>>s, s!="|")
            val.push_back(s);
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