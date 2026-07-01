#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
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
    int v;
    cout << "Enter the target value to search for: ";
    cin >> v;
    int ans = binary_search(vec1, v);
    if (ans == -1)
        cout << "Entered target element not found in the array";
    else
        cout << "Target element found at: " << ans;
    return 0;
}