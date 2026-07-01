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
    int currentSum = vec1[0];
    int maxSum = vec1[0];
    for (int i = 1; i < vec1.size(); i++)
    {
        currentSum = max(vec1[i], currentSum + vec1[i]);
        maxSum = max(maxSum, currentSum);
    }
    cout << "The sum of the maximum subarray is: " << maxSum;
    return 0;
}