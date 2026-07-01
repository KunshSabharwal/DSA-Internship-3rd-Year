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

int binary_search_first_occurence(vector<int> arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;
    int idx = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            idx = mid;
            right = mid - 1;
        }
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return idx;
}

int binary_search_last_occurence(vector<int> arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;
    int idx = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            idx = mid;
            left = mid + 1;
        }
        else if (arr[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return idx;
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
    int ans = binary_search_last_occurence(vec1, v);
    if (ans == -1)
        cout << "Entered target element not found in the array";
    else
        cout << "Target element found at: " << ans;
    return 0;
}