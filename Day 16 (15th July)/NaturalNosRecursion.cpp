#include <bits/stdc++.h>
using namespace std;

void natural(int n)
{
    if (n == 0)
        return;
    natural(n - 1);
    cout << n << endl;
}
int main()
{
    int n;
    cout << "Enter the number till which you want to display the natural numbers: ";
    cin >> n;
    natural(n);
    return 0;
}