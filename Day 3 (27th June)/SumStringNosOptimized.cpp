#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cout << "Enter first number: ";
    cin >> s1;
    cout << "Enter second number: ";
    cin >> s2;

    int i = s1.length() - 1;
    int j = s2.length() - 1;
    int carry = 0;
    string ans = "";

    while (i >= 0 || j >= 0 || carry)
    {
        int sum = carry;

        if (i >= 0)
            sum += s1[i--] - '0';

        if (j >= 0)
            sum += s2[j--] - '0';

        ans += char((sum % 10) + '0');
        carry = sum / 10;
    }
    reverse(ans.begin(), ans.end());
    cout << "Sum = " << ans << endl;
    return 0;
}