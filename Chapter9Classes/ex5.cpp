//
// Created by hezza on 8/4/2023.
//
#include "../std_lib_facilities.h"
#include "Book.h"
#include "Patron.h"
using namespace std;
using Chrono::Date;
using Chrono::Month;


int main(){
    try{
        Book cryptonomicon{"1-5-3-3-5-4-7-2-9-f", "Cryptonomicon",
                       "Neal Stephenson",
                       Date(1999,Month::apr, 1),true, Genre::fiction};
        Book cryptonomicon1{"1-5-3-3-5-4-7-2-9-f", "Cryptonomicon",
                           "Neal Stephenson",
                           Date(1999,Month::apr, 1),true , Genre::fiction};
        Book anathem{"1-5-3-3-5-6-6-6-9-f", "Anathem",
                            "Neal Stephenson",
                            Date(1999,Month::apr, 1),true, Genre::fiction };
        Patron Henry{"Henry", 2702, 20};
        cout << Henry.owesFees() << endl;








    }

    catch (runtime_error& e) {
        cerr << "runtime error: " << e.what() << '\n';
        return 1;         // 1 indicates failure
    }
}