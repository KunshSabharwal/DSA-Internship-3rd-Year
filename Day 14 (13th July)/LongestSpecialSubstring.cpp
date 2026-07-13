#include <bits/stdc++.h>
using namespace std;

int &minVal(int &a, int &b, int &c)
{
    if (a <= b && a <= c)
        return a;
    if (b <= a && b <= c)
        return b;
    return c;
}
int maximumLength(string s)
{
    int maxLen = -1;
    int currLen = 0;
    char prev = '*';
    vector<vector<int>> map(26, vector<int>(3, -1)); // 26 x 3 table
    for (char ch : s)
    {
        int ind = ch - 'a';
        currLen = (prev == ch) ? currLen + 1 : 1;
        prev = ch;
        int &mini = minVal(map[ind][0], map[ind][1], map[ind][2]);
        if (currLen > mini)
            mini = currLen;
    }
    for (int i = 0; i < 26; i++)
    {
        int temp = min({map[i][0], map[i][1], map[i][2]});
        maxLen = max(maxLen, temp);
    }
    return maxLen;
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << "Maximum Length = " << maximumLength(s) << endl;
    return 0;
}