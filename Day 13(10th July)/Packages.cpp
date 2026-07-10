#include <bits/stdc++.h>
using namespace std;

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
    int max_weight;
    cout << "Enter the max weight that can be carried in a single trip: ";
    cin >> max_weight;

    int left = 0;
    int right = n - 1;
    int trips = 0;

    sort(vec1.begin(), vec1.end());

    while (left <= right)
    {
        if (vec1[left] + vec1[right] <= max_weight)
        {
            left++;
            right--;
        }
        else
        {
            right--;
        }

        trips++;
    }
    cout << "The minimum number of trips required are: " << trips;
    return 0;
}