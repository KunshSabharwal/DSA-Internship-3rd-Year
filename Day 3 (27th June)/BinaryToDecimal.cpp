#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int binary;
    int decimal = 0;
    int i = 1;
    int rem;
    cout << "Enter a binary number: ";
    cin >> binary;
    while (binary != 0)
    {
        rem = binary % 10;
        decimal += rem * i;
        i *= 2;
        binary /= 10;
    }
    cout << "Decimal number is: " << decimal;
    return 0;
}