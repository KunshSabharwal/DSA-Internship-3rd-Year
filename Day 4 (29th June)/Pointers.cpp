#include <iostream>
using namespace std;

int main()
{
    int a; // data type of value and the created pointer must be same
    a = 5;
    int *p = &a; // p stores address of a and *p points to the value at that address (*p is dereferencing the pointer)
    cout << a << endl;
    a = 6;              // value changes from 5 to 6 at the address of a
    cout << p << endl;  // prints value of p i.e the address of a
    cout << *p << endl; // prints the value at the address a i.e. updated value of 6
    int *p2 = nullptr;  // stores a null value in the pointer i.e. a pointer pointing to nothing
    cout << sizeof(p);  // prints size of the pointer
    cout << sizeof(a);  // prints size of the variable according to the data type
    return 0;
}