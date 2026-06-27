#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cout << "Enter the string s1 with numbers: ";
    cin >> s1;
    cout << "Enter the second string of numbers to add: ";
    cin >> s2;
    int num1 = 0;
    int num2 = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        char a = s1[i];
        int digit1 = a - '0';
        num1 = num1 * 10 + digit1;
    }
    for (int j = 0; j < s2.length(); j++)
    {
        char b = s2[j];
        int digit2 = b - '0';
        num2 = num2 * 10 + digit2;
    }
    int ans = num1 + num2;
    cout << ans;

    return 0;
}