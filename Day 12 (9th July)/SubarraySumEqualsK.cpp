#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    unordered_map<int, int> mp;
    mp[0] = 1;
    int prefixSum = 0;
    int count = 0;
    for (int num : nums)
    {
        prefixSum += num;

        if (mp.find(prefixSum - k) != mp.end())
        {
            count += mp[prefixSum - k];
        }
        mp[prefixSum]++;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the total number of elements in the array/size of the array: ";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element: ";
        cin >> nums[i];
    }
    int k;
    cout << "Enter the value of K: ";
    cin >> k;
    cout << "Number of subarrays: " << subarraySum(nums, k);
    return 0;
}