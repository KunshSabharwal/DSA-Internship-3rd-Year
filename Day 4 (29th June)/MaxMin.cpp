#include <iostream>
using namespace std;

int maximum_number(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int minimum_number(int a, int b)
{
    if (a > b)
        return b;
    else
        return a;
}

int main()
{
    int n1, n2;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    int max = maximum_number(n1, n2);
    int min = minimum_number(n1, n2);
    cout << "Maximum of the 2 input numbers is: " << max << endl;
    cout << "Minimum of the 2 input numbers is: " << min << endl;
    return 0;
}