//
// Created by hezza on 8/8/2023.
//

#include "../std_lib_facilities.h"

/* How can we deal with varying amounts of memory?
 In particular how can different vectors have different numbers of elements and
 how can a single vector have different numbers of elements at different times?
 */

struct Link {
    string value;
    Link* prev;
    Link* succ;
    Link(const string&v, Link* p = nullptr,
         Link* s = nullptr):value{v}, prev{p}, succ{s}{}
};

/*
 Note that this has a specific meaning:
 it points to the object for which a member function is called.
 It does not point to any old object. The compiler ensures
 that we do not change the value of this in a member function. For example:
 */

Link* insert(Link* p, Link* n){
    if (n== nullptr) return p;
    if (p== nullptr) return n;
    n->succ = p; //p comes before n
    p->prev->succ = n; //n comes after what used to be p's predecessor

    n->prev = p->prev; //p's predecesor becoems n's predecessor
    p->prev = n;
    return n;
}
using namespace std;

void print_array10(ostream& os, int* a){
    for(int i=0; i<=9;++i){
        os << a[i] << '\n';
    }
}

void print_array(ostream& os, int* a, int n) {
    for (int i = 0; i<n; ++i)
        os << a[i] << "\n";
}


int main(){
    //1. Allocate an array of ten ints on the free store using new.
    int *p = new int[10];
    for(int i=0; i<=9;++i){
        p[i] = 1;
    }
    //2. Print the values of the ten ints to cout.

    for(int i=0; i<=9;++i){
        cout << p[i] << '\n';
    }

    //3. Deallocate the array (using delete[]).
    delete[] p;

    //4. Write a function print_array10(ostream& os, int* a)
    // that prints out the values of a (assumed to have ten elements) to os.



    // 5. Allocate an array of ten ints on the free store;
    // initialize it with the values 100, 101, 102, etc.;
    // and print out its values.

    int* x = new int[10];
    for(int i=0; i<=9;++i){
        x[i] = 100 + i;
    }
    cout << "Question 5 " << '\n';
    print_array10(cout, x);
    delete[] x;



    //1. Allocate an int, initialize it to 7, and assign its address
    // to a variable p1.
    int z = 7;
    int *p1 = &z;
    //2. Print out the value of p1 and of the int it points to.
    cout << "p1 = " << p1 << '\n';
    cout << "*p1= " << *p1 << '\n';


   //3. Allocate an array of seven ints; initialize it to 1, 2, 4, 8, etc.; and assign its address to a variable p2.

   int* p2 = new int[7];
   for(int i=0; i<=6;++i){
       p2[i] = pow(i,2);
   }


   //4. Print out the value of p2 and of the array it points to.
   cout << p2 << endl;
   cout << "Question 4" << endl;
    print_array(cout , p2, 7);

    //5. Declare an int* called p3 and initialize it with p2.
    int* p3 = p2;

   // 6. Assign p1 to p2.
   p1 = p2;
  // 7. Assign p3 to p2.
   p3 = p2;

    //8. Print out the values of p1 and p2 and of what they point to.
    cout << p1 << '\n';
    cout << p2 << '\n';

    //9. Deallocate all the memory you allocated from the free store.
    delete[] p2;
    p1 = nullptr;
    p3 = nullptr;

    //10. Allocate an array of ten ints; initialize it to 1, 2, 4, 8, etc.; and assign its address to a variable p1.
    p1 = new int[10];
    for(int i=0; i<=9;++i){
        p1[i] = pow(i,2);
    }


    //11. Allocate an array of ten ints, and assign its address to a variable p2.
    p2 = new int[10];

    //12. Copy the values from the array pointed to by p1 into the array pointed to by p2.
    for(int i=0; i<=9;++i){
        p2[i] = p1[i];
    }



}