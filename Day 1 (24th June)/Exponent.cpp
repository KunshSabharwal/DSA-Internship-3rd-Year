#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Input value of X (Base):";
    cin >> x;
    cout << "Input value of Y (Exponent):";
    cin >> y;
    double ans = 1;
    if (y >= 0)
    {
        for (int i = 0; i < y; i++)
        {
            ans = ans * x;
        }
    }
    else
    {
        for (int i = 0; i < -y; i++)
        {
            ans = ans * x;
        }
        ans = 1.0 / ans;
    }
    cout << ans;
}