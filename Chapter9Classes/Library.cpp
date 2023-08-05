//
// Created by hezza on 8/5/2023.
//


#include "Library.h"


using namespace std;

Library::Library(vector<Book> books, vector<Patron> patrons,
        vector<Transaction> transactions) : m_books(books),
        m_patrons(patrons),m_transactions(transactions){

}

void Library::addBook(const Book& book){
    books().push_back(book);
}

void Library::addPatrons(const Patron& patron){
    patrons().push_back(patron);
}

bool const Library::isInBooks(const Book& book) {
    for (auto x: books()) {
        if (x == book) {
            return true;
        }
        return false;
    }

}

vector<string> Library::debtors() const{
    vector<string> debtors;
    for(auto x : patrons()){
        if(x.owesFees()){
            debtors.push_back(x.name());
        }
    }
    return debtors;
}

bool const Library::isInPatrons(const Patron &patron) {
    for (auto x: patrons()) {
        if (x == patron) {
            return true;
        }
        return false;
    }

}
void Library::checkout( Book& book,const Patron& patron, const Date& date){

    if(isInBooks(book) && isInPatrons(patron)) {
        if (patron.owesFees()){
            error("Patron needs to pay fees before checking out book");
        }
        book.checkout();
        makeTransaction(book, patron, date);
    }
    else error("Book cannot be checked out");

}
void Library::makeTransaction(const Book& book,const Patron& patron, const Date& date ){
    Transaction t;
    t.patron= patron;
    t.book= book;
    t.date = date;
    transactions().push_back(t);
}


