#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    float x;
    float y;
    float z;
    cout << "Enter the first number:";
    cin >> x;
    cout << "Enter the second number:";
    cin >> y;
    cout << "Enter the third number:";
    cin >> z;
    float ans1 = ((pow(x, 2)) + (pow(y, 2)) + (pow(z, 2)));
    float ans2 = (x + y - z);
    float ans = ans1 / ans2; // or just use (((x * x) + (y * y) + (z * z)) / (x + y - z));
    cout << ans;
    return 0;
}