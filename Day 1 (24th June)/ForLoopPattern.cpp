#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3; // number of lines we want in the pyramid
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}