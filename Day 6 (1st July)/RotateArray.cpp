#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k %= n;
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[(i + k) % n] = nums[i];
    }
    nums = ans;
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
    int r;
    cout << "Enter the number to decide how much to rotate: ";
    cin >> r;
    rotate(nums, r);
    cout << "Elements after rotation are: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
