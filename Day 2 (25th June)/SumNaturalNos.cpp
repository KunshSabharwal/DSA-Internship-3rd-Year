#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the number to find the sum of N natural numbers: ";
    cin >> a;
    int sum = 0;
    int flag = 0;
    if (a <= 0)
    {
        flag = 1;
    }
    else
    {
        sum = ((a * (a + 1)) / 2);
    }
    if (flag == 1)
    {
        cout << "Enter a valid non-zero postive number." << endl;
    }
    else
    {
        cout << "The sum of the given number is: " << sum << endl;
    }
    return 0;
}