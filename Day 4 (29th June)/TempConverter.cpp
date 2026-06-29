#include <iostream>
using namespace std;

int main()
{
    float c, f;
    cout << "Enter temperature in Celsius: ";
    cin >> c;
    f = (9.0 / 5.0) * c + 32;
    cout << "Temperature in Fahrenheit = " << f;
    return 0;
}