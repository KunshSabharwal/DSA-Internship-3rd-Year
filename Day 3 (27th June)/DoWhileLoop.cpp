#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number N to find sum upto N natural numbers: ";
    cin >> n;
    int i = 1;
    int sum = 0;
    do
    {
        sum = sum + i;
        i++;
    } while (i <= n);
    cout << "The sum of the first " << n << " natural numbers is: " << sum;
    return 0;
}