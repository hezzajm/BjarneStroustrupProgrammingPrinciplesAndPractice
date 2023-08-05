//
// Created by hezza on 8/4/2023.
//

#include "Book.h"

using Chrono::Month;

Book::Book(string ISBN, string title, string author, Date copyDate, bool checkOut, Genre genre ):
m_ISBN((ISBN)), m_title(title), m_author(author), m_copyDate(copyDate), m_checkOut(checkOut), m_genre(genre){
    if(!is_valid()) error("Invalid book") ;
}

const Book& default_book()
{
    static Book b{"0-0-0-0-0-0-0-0-0-X", "Quicksilver",
                  "Neal Stephenson",
                  Date(2012,Month::may, 31),false ,Genre::fiction};
    return b;
}

Book::Book()
       :m_ISBN(default_book().ISBN()), m_title(default_book().title())
       , m_author(default_book().author()), m_copyDate(default_book().date())
       ,m_checkOut(default_book().checkOutStatus())
       ,m_genre(default_book().genre()){}


void Book::checkin(){m_checkOut=false;
}
void Book::checkout(){m_checkOut=true;}

bool Book::is_valid() {
    string s = ISBN();

    if(s.size()<1) return false;

    if (!isdigit(s[s.size()-1]) && !isalpha(s[s.size()-1])) return false;

    for(int i = 0; i<s.size()-2; i+=2 ) {
        if (!isdigit(s[i])) {
            return false;
        };
    }

    for(int i = 1; i<s.size()-1; i+=2 ) {
        if (s[i]!='-') {
            return false;
        };
    }

    return true;

}
bool operator==(const Book& a, const Book& b){
    return a.ISBN()==b.ISBN();
}
bool operator!=(const Book& a, const Book& b){
    return a.ISBN()!=b.ISBN();
}

ostream& operator<<(ostream& os, const Book& b)
{
    return os << "Title: " << b.title() << '\n'
    << "Author: " << b.author() << '\n' << "ISBN: " << b.ISBN();
}


