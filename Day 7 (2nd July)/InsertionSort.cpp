#include <bits/stdc++.h>
using namespace std;

void Insertion_Sort(vector<int> &nums, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] > key)
        {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = key;
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

    Insertion_Sort(nums, n); // T.C. = O(N^2) and it is stable

    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}