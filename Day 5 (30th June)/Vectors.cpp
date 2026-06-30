#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the total number of elements in the array/size of the array: ";
    cin >> n;
    vector<int> vec1(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element: ";
        cin >> vec1[i];
    }
    int k;
    cout << "Enter the scalar value to multiple with the array: ";
    cin >> k;
    cout << "New values for the array are: " << endl;
    for (int j = 0; j < n; j++)
    {
        cout << j + 1 << " element: ";
        cout << k * vec1[j] << endl;
    }
    return 0;
}