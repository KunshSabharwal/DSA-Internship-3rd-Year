#include <bits/stdc++.h>
using namespace std;

int factorialuptoN(int n)
{
    int fact = 1;
    for (int i = n; i > 0; i--)
    {
        fact = fact * i;
    }
    return fact;
    return 0;
}
int main()
{
    int n;
    cout << "Enter the number N to print factorial upto N: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Enter a valid postive integer.";
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        int ans = factorialuptoN(i);
        cout << i << " factorial = " << ans << endl;
    }
    return 0;
}