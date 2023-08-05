//
// Created by hezza on 8/4/2023.
//
#include "../std_lib_facilities.h"

#include "Library.h"

using namespace std;
using Chrono::Date;
using Chrono::Month;

template <typename T>
void print(const string& label, const vector<T>& v)
{
    cout << label << ":" << endl;
    for (const auto& i : v) cout << "( " <<  i << ' '<< ")\n";
}

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
        Patron Henry{"Henry", 2702, 0};
        Patron Lawrence{"Lawrence Waterhouse", 2703, 100000};
        Patron Bobby{"Bobby Shaftoe", 2703, 1000000};

        cryptonomicon.checkin();
        cout << Henry.owesFees() << endl;
        cout << cryptonomicon << endl;
        vector<Book> books;
        books.push_back(cryptonomicon);
        books.push_back(anathem);
        vector<Patron> patrons;
        patrons.push_back(Henry);
        patrons.push_back(Lawrence);
        patrons.push_back(Bobby);
        vector<Transaction> transactions;
        Library science(books,patrons, transactions );
        science.addBook(cryptonomicon1);
        science.checkout(cryptonomicon, Henry, Date(2023, Month::aug, 5));
        print("debtors", science.debtors());
    }

    catch (runtime_error& e) {
        cerr << "runtime error: " << e.what() << '\n';
        return 1;         // 1 indicates failure
    }
}