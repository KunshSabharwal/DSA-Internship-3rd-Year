#include <bits/stdc++.h>
using namespace std;

int Bubble_Sort(vector<int> &nums, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (nums[j] > nums[j + 1])
                swap(nums[j], nums[j + 1]);
        }
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

    Bubble_Sort(nums, n); // T.C. = O(NxN) OR O(N^2) and not stable

    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}