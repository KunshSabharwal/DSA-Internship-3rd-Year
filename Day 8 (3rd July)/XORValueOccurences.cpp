#include <bits/stdc++.h>
using namespace std;

int XOR_01_Occurences_Values(vector<int> &arr, vector<vector<int>> &queries)
{
    int q = queries.size();
    int op = 0;
    for (int i = 0; i < q; i++)
    {
        int count = 0;
        int L = queries[i][0];
        int R = queries[i][1];
        int val = queries[i][2];

        for (int j = L; j <= R; j++)
        {
            if (arr[j] == val)
                count++;
        }
        op ^= count;
    }
    return op;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int q;
    cin >> q;
    vector<vector<int>> queries(q, vector<int>(3));
    for (int i = 0; i < q; i++)
    {
        cin >> queries[i][0] >> queries[i][1] >> queries[i][2];
    }
    cout << XOR_01_Occurences_Values(arr, queries);
    return 0;
}