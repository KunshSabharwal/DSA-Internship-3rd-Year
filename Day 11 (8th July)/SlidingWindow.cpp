#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter window size: ";
    cin >> k;

    // Sum of first window
    int wsum = 0;
    for (int i = 0; i < k; i++)
    {
        wsum += arr[i];
    }
    int maxSum = wsum;
    // Slide the window
    for (int i = k; i < n; i++)
    {
        wsum = wsum - arr[i - k] + arr[i];
        maxSum = max(maxSum, wsum);
    }
    cout << "Maximum Sum = " << maxSum << endl;
    return 0;
}