#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int binary;
    int decimal = 0;
    int i = 0;
    int rem;
    cout << "Enter a binary number: ";
    cin >> binary;
    while (binary != 0)
    {
        rem = binary % 10;
        decimal += rem * pow(2, i);
        binary /= 10;
        i++;
    }
    cout << "Decimal number is: " << decimal;
    return 0;
}