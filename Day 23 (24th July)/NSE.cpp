#include <bits/stdc++.h>
using namespace std;

vector<int> NSE(vector<int> &a)
{
    int n = a.size();
    vector<int> ans(n);
    stack<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() >= a[i])
            s.pop();
        ans[i] = s.empty() ? -1 : s.top();
        s.push(a[i]);
    }
    return ans;
}

vector<int> PSE(vector<int> &a)
{
    int n = a.size();
    vector<int> ans(n);
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && s.top() >= a[i])
            s.pop();
        ans[i] = s.empty() ? -1 : s.top();
        s.push(a[i]);
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element: ";
        cin >> a[i];
    }
    vector<int> nse = NSE(a);
    vector<int> pse = PSE(a);
    cout << "\nNext Smaller Elements:\n";
    for (int x : nse)
        cout << x << " ";
    cout << "\nPrevious Smaller Elements:\n";
    for (int x : pse)
        cout << x << " ";

    return 0;
}