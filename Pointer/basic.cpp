#include <bits/stdc++.h>
using namespace std;

int main() {
    float a = 45;
    float *ptr1 = &a;

    cout << "Pointer value is: " << *ptr1 << endl;
    cout << "Address of a: " << &a << " = ptr1: " << ptr1 << endl;

    double p = 45.9;
    double *ptr2 = &p;
    double **ptr3 = &ptr2;        //the store pointer to pointer address

    cout << "Value of p: " << **ptr3 << endl;
    cout << "Address stored in ptr2 (address of p): " << *ptr3 << endl;
    cout << "Address of ptr2: " << ptr3 << endl;

    return 0;
}
