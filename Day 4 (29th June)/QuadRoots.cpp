#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    float d = (b * b) - 4 * a * c;
    if (d < 0)
    {
        cout << "Imaginary roots";
    }
    else
    {
        float root1 = (-b + sqrt(d)) / (2 * a);
        float root2 = (-b - sqrt(d)) / (2 * a);
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    return 0;
}