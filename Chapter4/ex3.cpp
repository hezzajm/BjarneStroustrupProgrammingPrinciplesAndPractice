//
// Created by hezza on 7/21/2023.
//
#include "../std_lib_facilities.h"

using namespace std;


int main() {

    vector<double> distances;

    double too_large = 100000000;
    double distance;
    double totalDistance = 0;
    double smallestDistance =  too_large;
    double largestDistance = 0;

    cout << "Please enter some distances" << endl;

    while(cin>>distance){
            distances.push_back(distance); // Could add check to make sure distance is a reasonable number
    }
    if(distances.empty()) error ("no distances");
    for(double x : distances){
        totalDistance += x;
    }

    sort(distances);
    smallestDistance = distances[0];
    largestDistance = distances[distances.size()-1];

    cout << "Total distances are " << totalDistance << endl;
    cout << "The smallest distance between two cities is  " << smallestDistance << endl;
    cout << "The largest distance between two cities is  " << largestDistance << endl;
    cout << "The mean distance between two cities is  " << totalDistance/distances.size() << endl;







}
