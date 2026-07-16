#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> zFunction(string &s)
    {
        int n = s.length();
        vector<int> z(n);
        int l = 0, r = 0;
        for (int i = 1; i < n; i++)
        {
            if (i <= r)
            {
                int k = i - l;
                z[i] = min(r - i + 1, z[k]);
            }
            while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            {
                z[i]++;
            }
            if (i + z[i] - 1 > r)
            {
                l = i;
                r = i + z[i] - 1;
            }
        }
        return z;
    }

    vector<int> solve(string &text, string &pat)
    {
        string s = pat + '$' + text;
        vector<int> z = zFunction(s);
        vector<int> pos;
        int m = pat.size();
        for (int i = m + 1; i < z.size(); i++)
        {
            if (z[i] == m)
                pos.push_back(i - m - 1);
        }
        return pos;
    }

    int strStr(string haystack, string needle)
    {
        vector<int> matches = solve(haystack, needle);
        for (int ans : matches)
            return ans;
        return -1;
    }
};

int main()
{
    Solution obj;
    string haystack, needle;
    cout << "Enter haystack: ";
    cin >> haystack;
    cout << "Enter needle: ";
    cin >> needle;
    int ans = obj.strStr(haystack, needle);
    cout << "Answer: " << ans << endl;
    return 0;
}