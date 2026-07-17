#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int a;
    string st;
    double d;
    // Default Constructor
    A()
    {
        a = 0;
        st = "Default";
        d = 0.0;
    }
    // Parameterized Constructor
    A(int a, string st, double d)
    {
        this->a = a;
        this->st = st;
        this->d = d;
    }
    // Member Function
    void print()
    {
        cout << "Integer : " << a << endl;
        cout << "String  : " << st << endl;
        cout << "Double  : " << d << endl;
    }
};

int main()
{
    // -----------------------------
    // Object created on Stack
    // -----------------------------
    A obj1;
    cout << "Default Constructor (Stack Object)\n";
    obj1.print();
    cout << "\n";
    // -----------------------------
    // Parameterized Constructor
    // Object on Stack
    // -----------------------------
    A obj2(10, "Hello", 99.5);
    cout << "Parameterized Constructor (Stack Object)\n";
    obj2.print();
    cout << "\n";
    // -----------------------------
    // Object created on Heap
    // -----------------------------
    A *obj3 = new A(20, "World", 85.75);
    cout << "Parameterized Constructor (Heap Object)\n";
    obj3->print();            // Access function using ->
    cout << obj3->st << endl; // Access member variable using ->
    // Free heap memory
    delete obj3;
    return 0;
}