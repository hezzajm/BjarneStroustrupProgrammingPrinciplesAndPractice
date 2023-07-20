//
// Created by hezza on 7/20/2023.
//


#include "../std_lib_facilities.h"

using namespace std;


int main()
{


    vector<double> temps;                  // temperatures
    for (double temp; cin>>temp; )    // read into temp
        temps.push_back(temp);     // put temp into vector

    // compute mean temperature:
    double sum = 0;
    for (double x : temps) sum += x;
    cout << "Average temperature: " << sum/temps.size() << '\n';

    // compute median temperature:
    sort(temps);                                     // sort temperatures
    if(temps.size() % 2 !=0){
        cout << "Median temperature: " << temps[temps.size()/2] << '\n';
    }
    else {
        cout << "Median temperature: " << 0.5 * (temps[temps.size()/2-1]+temps[temps.size()/2]) << '\n';
    }




}