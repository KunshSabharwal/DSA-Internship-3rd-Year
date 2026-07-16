#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void constructLps(string &pat, vector<int> &lps)
    {
        int len = 0;
        lps[0] = 0;
        int i = 1;
        while (i < pat.length())
        {
            if (pat[i] == pat[len])
            {
                len++;
                lps[i] = len;
                i++;
            }
            else
            {
                if (len != 0)
                    len = lps[len - 1];
                else
                {
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }

    vector<int> solve(string &text, string &pat)
    {
        int n = text.length();
        int m = pat.length();
        vector<int> lps(m);
        vector<int> res;
        constructLps(pat, lps);
        int i = 0;
        int j = 0;
        while (i < n)
        {
            if (text[i] == pat[j])
            {
                i++;
                j++;

                if (j == m)
                {
                    res.push_back(i - j);
                    j = lps[j - 1];
                }
            }
            else
            {
                if (j != 0)
                    j = lps[j - 1];
                else
                    i++;
            }
        }
        return res;
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