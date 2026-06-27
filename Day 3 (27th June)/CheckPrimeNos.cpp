#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number to check whether its prime or not: ";
    cin >> n;
    bool isPrime = true;
    if (n <= 1)
        isPrime = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "Prime";
    else
        cout << "Not Prime";
    return 0;
}

/*
we may also use a simpler logic

for (int n = 1; n <= num; n++)
{
    if (n % i == 0)
        count++;   only increment at 1 & the number itself for primes, so count = 2 for prime and higher for others.
}
if (count == 2)
    cout << n << endl;
*/