
#include "../std_lib_facilities.h"
using namespace std;

int main()
{
        cout << "Please enter two integer values" << endl;
        int val1 = 0;
        int val2 = 0;
        cin >> val1 >> val2;

        if (!cin) {
            error("something went wrong, couldn't read values");
        }
        cout << (val1 < val2 ? val1 : val2) << " is the smallest value" << endl;
        cout << (val1 > val2 ? val1 : val2) << " is the largest value" << endl;
        cout << val1 + val2 << " is the sum" << endl;
        cout << val1 - val2 << " is the difference" << endl;
        cout << val1 * val2 << " is the product" << endl;
        if (val2 == 0) {
            error("Cannot divide by zero");
        } else {
            cout << val1 / val2 << " is the ratio of val 1 to val 2" << endl;
        }
}

