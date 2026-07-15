#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int ans = -~n;
    cout << ans;
    return 0;
}