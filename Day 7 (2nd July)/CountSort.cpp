#include <bits/stdc++.h>
using namespace std;

int Count_Sort(vector<int> &nums, int n)
{
    int maxi = INT_MIN;
    for (int i : nums)
    {
        maxi = max(maxi, i);
    }
    vector<int> map(maxi + 1, 0);
    for (int i : nums)
    {
        map[i] += 1;
    }
    vector<int> res;
    for (int i = 0; i < map.size(); i++)
    {
        if (map[i] > 0)
        {
            int count = map[i];
            for (int j = 0; j < count; j++)
            {
                res.push_back(i);
            }
        }
    }
    nums = res;
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

    Count_Sort(nums, n); // T.C. = O(NxN) OR O(N^2) and is not stable

    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}