//
// Created by hezza on 6/17/2023.
//

#include "Matrix.h"
#include <iostream>
#include <complex>
#include <cmath>

using cmplx = std::complex<double>;
using namespace Numeric_lib;
using namespace std;

void readMatrix(Matrix<double> &m);
void printMatrix(Matrix<double> &m);

int main(){
    //Drill 1:
    cout << "A char has size " << sizeof(char) << " bytes" << endl;
    cout << "An int has size " << sizeof(int) << " bytes" << endl;
    cout << "A long has size " << sizeof(long) << " bytes" << endl;
    cout << "A float has size " << sizeof(float) << " bytes" << endl;
    cout << "A double has size " << sizeof(double) << "bytes" << endl;
    cout << "An int* has size " << sizeof(int*) << " bytes" << endl;
    cout << "A double* has size " << sizeof(double*) << " bytes" << endl;
    //Drill 2:
    Matrix<int> a(10);
    Matrix<int> b(100);
    Matrix<double> c(10);
    Matrix<int,2> d(10,10);
    Matrix<int,3> e(10,10,10);
    cout << "a has size " << sizeof(a) << " bytes" << endl;
    cout << "b has size " << sizeof(b) << " bytes" << endl;
    cout << "c has size " << sizeof(c) << " bytes" << endl;
    cout << "d has size " << sizeof(d) << " bytes" << endl;
    cout << "e has size " << sizeof(e) << " bytes" << endl;
    //Drill 3:
    cout << "Matrix a has " << a.dim1() << " elements" << endl;
    cout << "Matrix b has " << b.dim1() << " elements" << endl;
    cout << "Matrix c has " << c.dim1() << " elements" << endl;
    cout << "Matrix d has " << d.dim1()*d.dim2() << " elements" << endl;
    cout << "Matrix e has " << e.dim1()*e.dim2()*e.dim3() << " elements" << endl;
    //Drill 4:
    /*
    int val = 0;
    cout << "Please enter a value to find the square root" << endl;
    while(cin >> val){
        if(val < 0 ){
            cout << "Cannot compute square root of negative number" << endl;
            continue;
        }
        cout << sqrt(val) << endl;
    }
    */
    Matrix<double> f(4);

    readMatrix(f);
    printMatrix(f);
}

void readMatrix(Matrix<double> &m){
    for(int i = 0; i<m.dim1(); ++i){
        cin >> m(i);
    }
}

void printMatrix(Matrix<double> &m){
    for(int i = 0; i<m.dim1(); ++i){
        cout << m(i) << "\n";
    }
}