//
// Created by hezza on 8/7/2023.
//


#include "../std_lib_facilities.h"
class B {                              // abstract base class
public:
    virtual void f() =0;         // pure virtual function
    virtual void g() =0;
};


class D2 : public B {
public:
    void f() override;
    // no g()
};

      // error: D2 is (still) abstract

class D3 : public D2 {
public:
    void g() override;
};

D3 d3;          // OK








/*
struct B{
    virtual void f() const {cout << "B::f";};
    void g() const{cout <<"B::g";};
};

struct D : B{
    void f() const {cout << "D::f";};
};

struct DD:D{
    void f() {cout << "DD::f";};
    void g() const {cout << "DD::g";};
};
*/
void call(const B& b)
// a D is a kind of B, so call() can accept a D
// a DD is a kind of D and a D is a kind of B, so call() can accept a DD
{
    b.f();
    b.g();
}

int main(){
    B b;
    D d;
    DD dd;
    call(b);
    call(d);
    call(dd);

    b.f();
    b.g();

    d.f();
    d.g();

    dd.f();
    dd.g();
}