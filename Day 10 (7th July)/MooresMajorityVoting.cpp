#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int candidate = 0;
    int count = 0;
    // Find potential majority element
    for (int num : nums)
    {
        if (count == 0)
            candidate = num;
        if (num == candidate)
            count++;
        else
            count--;
    }
    return candidate;
}
int main()
{
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Enter a valid array size!";
        return 0;
    }
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << "Majority Element in the given array is: " << majorityElement(nums) << endl;
    return 0;
}