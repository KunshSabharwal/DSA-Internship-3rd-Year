#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the number to find the factorial: ";
    cin >> a;
    long long fact = 1;
    int flag = 0;
    if (a <= 0)
    {
        flag = 1;
    }
    else
    {
        for (int i = a; i > 0; i--)
        {
            fact = fact * i;
        }
    }
    if (flag == 1)
    {
        cout << "Please enter a non-zero postive number.";
    }
    else
    {
        cout << "The factorial of the given number is: " << fact;
    }
    return 0;
}