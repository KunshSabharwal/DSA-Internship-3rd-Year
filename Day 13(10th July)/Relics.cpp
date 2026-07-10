#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the total number of elements in the array/size of the array: ";
    cin >> n;
    vector<int> relics(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element: ";
        cin >> relics[i];
    }

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[relics[i]]++;
    }

    int remove = 0;
    for (auto it : mp)
    {
        int value = it.first;
        int count = it.second;
        if (count == value)
            continue;
        else if (count > value)
            remove += count - value;
        else
            remove += count;
    }
    cout << "The minimum number of remove moves to made in the relics is: " << remove;
}