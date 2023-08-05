//
// Created by hezza on 8/5/2023.
//


#include "../std_lib_facilities.h"
#include "Patron.h"
#include "Book.h"


struct Transaction{ //Make part of library class?
    Book book;
    Patron patron;
    Date date;
};
class Library {
public:

    Library(vector<Book> books, vector<Patron> patrons,
            vector<Transaction> transactions);

    Library();

    //Non-modifying function
    vector<Book> books() const {return m_books;};
    vector<Patron> patrons() const {return m_patrons;};
    vector<Transaction> transactions() const {return m_transactions;};
    vector<string> debtors() const;

    bool const isInBooks( const Book& book);
    bool const isInPatrons( const Patron& patrons);


    //Modifying functions
    void addBook(const Book& book);
    void addPatrons(const Patron& patron);
    void checkout(Book& book,const Patron& patron, const Date& date);

private:
    vector<Book> m_books;
    vector<Patron> m_patrons;
    vector<Transaction> m_transactions;
    void makeTransaction(const Book& book,const Patron& patron, const Date& date );
};

