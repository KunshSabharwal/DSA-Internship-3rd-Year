#include <bits/stdc++.h>
using namespace std;

int Selection_Sort(vector<int> &nums, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_ind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[min_ind])
            {
                min_ind = j;
            }
        }
        if (nums[i] > nums[min_ind])
            swap(nums[i], nums[min_ind]);
    }
}
int main()
{
    int n;
    cout << "Enter the total number of elements in the array to sort: ";
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element: ";
        cin >> nums[i];
    }

    Selection_Sort(nums, n); // T.C. = O(NxN) OR O(N^2) and is not stable

    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}