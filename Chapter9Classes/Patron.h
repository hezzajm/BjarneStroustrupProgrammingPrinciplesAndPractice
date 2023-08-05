//
// Created by hezza on 8/5/2023.
//

#ifndef BJARNESTROUSTRUPPROGRAMMINGPRINCIPLESANDPRACTICE_PATRON_H
#define BJARNESTROUSTRUPPROGRAMMINGPRINCIPLESANDPRACTICE_PATRON_H

#include "../std_lib_facilities.h"

class Patron {
public:

    Patron(string name, int cardNum, double fees);

    Patron();

    // Non-modifying operations
    string name() const {return m_name;};
    int cardNum() const {return m_cardNum;};
    double fees() const {return m_fees;};
    bool owesFees() const;


    // Modifying operations
    void addFees(double fees);
    void removeFees(double fees);

private:
    string m_name;
    int m_cardNum;
    double m_fees;
};
bool isValid(string m_name,int m_cardNum, double m_fees);




#endif //BJARNESTROUSTRUPPROGRAMMINGPRINCIPLESANDPRACTICE_PATRON_H
