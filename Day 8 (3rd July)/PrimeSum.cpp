#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = n; i > 0; i--)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
        {
            cout << "Prime Number: " << i << endl;
            sum += i;
        }
    }
    cout << sum;
    return 0;
}