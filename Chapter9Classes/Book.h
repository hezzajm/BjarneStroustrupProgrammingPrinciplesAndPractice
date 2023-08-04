//
// Created by hezza on 8/4/2023.
//


#include <utility>

#include "../std_lib_facilities.h"
#include "chrono.h"

using Chrono::Date;

enum class Genre{
    fiction, nonfiction, periodical, biography, children
};

class Book {

    public:
    Book(string ISBN, string title, string author,
         Date copyDate, bool checkOut, Genre genre );

    Book();

    // Non-modifying operations
    string author() const {return m_author;};
    string title() const {return m_title;};
    string ISBN() const {return m_ISBN;};
    Date date() const {return m_copyDate;};
    Genre genre() const {return m_genre;};
    bool checkOutStatus() const {return m_checkOut;};

    // Modifying operations
    void checkin();
    void checkout();
    bool is_valid();


    private:
        Genre m_genre;
        string m_ISBN, m_title, m_author;
        Date m_copyDate;
        bool m_checkOut;
    };

//Helper functions

bool operator==(const Book& a, const Book& b);
bool operator!=(const Book& a, const Book& b);
ostream& operator<<(ostream& os, const Book& b);