//
// Created by hezza on 8/5/2023.
//

#include "Patron.h"

Patron::Patron(string name, int cardNum, double fees):
    m_name(name), m_cardNum(cardNum), m_fees(fees){
        if (!isValid(name,cardNum,fees))  error("Invalid Patron details");
}

Patron::Patron():m_name("John Smith"),m_cardNum(0000), m_fees(0){};

void Patron::addFees(double fees) {
    m_fees+=fees;
}

void Patron::removeFees(double fees) {
    if(fees <= m_fees) m_fees-=fees;
    else error("Fees cannot be negative");
}

bool isValid(string m_name,int m_cardNum, double m_fees){
    if (m_fees<0) error("Fees cannot be negative");
    return true;
}

bool Patron::owesFees() const{
    if(m_fees > 0) return true;
    else return false;
}

bool operator==(const Patron& a, const Patron& b){
    return a.cardNum()==b.cardNum();
}