#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number to convert to binary: ";
    cin >> n;
    int ans = 0;
    int a = 1;
    while (n != 0)
    {
        int digit = n % 2;
        ans = ans + digit * a;
        a = a * 10;
        n = n / 2;
    }
    cout << ans;
    return 0;
}