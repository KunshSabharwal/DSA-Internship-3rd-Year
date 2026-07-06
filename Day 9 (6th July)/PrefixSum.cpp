#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the total number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // For making prefix sum array
    vector<int> prefix(n);
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    // For making suffix sum array
    vector<int> suffix(n);
    suffix[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] + arr[i];
    }

    // Printing Prefix sum array
    cout << "\nPrefix Sum Array: ";
    for (int x : prefix)
        cout << x << " ";

    // Printing Suffix sum array
    cout << "\nSuffix Sum Array: ";
    for (int x : suffix)
        cout << x << " ";
    return 0;
}