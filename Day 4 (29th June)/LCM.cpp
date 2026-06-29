#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;

    int num, gcd, lcm;

    cout << "Enter number 1: ";
    cin >> gcd;
    lcm = gcd;

    for (int i = 2; i <= n; i++)
    {
        cout << "Enter number " << i << ": ";
        cin >> num;
        int a = gcd, b = num;
        while (b != 0)
        {
            int rem = a % b;
            a = b;
            b = rem;
        }
        gcd = a;
        a = lcm;
        b = num;
        while (b != 0)
        {
            int rem = a % b;
            a = b;
            b = rem;
        }
        lcm = (lcm * num) / a;
    }

    cout << "\nGCD = " << gcd << endl;
    cout << "HCF = " << gcd << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}