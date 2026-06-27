#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number N to count the number of factors till N: ";
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    cout << "The number of factors for N are: " << count;
    return 0;
}