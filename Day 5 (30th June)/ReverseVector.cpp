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
        cout << "Enter the element: ";
        cin >> vec1[i];
    }
    for (int j = 0; j < n / 2; j++)
    {
        int temp = vec1[j];
        vec1[j] = vec1[n - 1 - j];
        vec1[n - 1 - j] = temp;
    }
    for (int k = 0; k < n; k++)
    {
        cout << k + 1 << " element: ";
        cout << vec1[k] << endl;
    }
    return 0;
}