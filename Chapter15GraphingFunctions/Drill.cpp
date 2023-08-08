//
// Created by hezza on 8/8/2023.
//

#include "../std_lib_facilities.h"

using namespace std;

class B1{
public:
    virtual void vf(){
        cout << "B1::vf()" << '\n';
    }
    void f(){
        cout << "B1::f()" << '\n';
    }
    virtual void pvf() = 0{
        cout << "B1::pvf()" << '\n';
    }
};

class D1 : public B1{
public:
    void vf() override{
        cout << "D1::vf()" << '\n';
    }
    void f(){
        cout << "D1::f()" << "\n";
    }
};

class D2 : public D1{
public:
    void pvf() override{
        cout << "D2::pvf()" << "\n";
    }
};

class B2 {
public:
    virtual void pvf() = 0{
        cout << "B2::pvf()" << "\n";
    }
};

class D21 : public B2{
public:
    void pvf() override{
        cout << s << endl;
    }
private:
    string s{"D21 string"};
};

class D22 : public B2{
public:
    void pvf() override{
        cout << v << endl;
    }
private:
    int v{8};
};


void f(B2& b2){
    b2.pvf();
}



int main(){
    /*
     B1 b1;
     b1.vf();
     b1.f();

     D1 d1;
     d1.vf();
     d1.f();

     B1& bref = d1;
     bref.f();
     bref.vf();

    D2 d2;
    d2.pvf();
    d2.vf();
    d2.f();
    */
    D21 d21;
    d21.pvf();
    D22 d22;
    f(d21);
    f(d22);


}