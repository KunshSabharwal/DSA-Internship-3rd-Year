#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = 4;
    a = a ^ b;
    cout << a << endl;
    cout << b << endl;
    b = a ^ b;
    cout << a << endl;
    cout << b << endl;
    a = a ^ b;
    cout << a << endl;
    cout << b << endl;
}