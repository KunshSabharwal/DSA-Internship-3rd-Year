#include <iostream>
using namespace std;

int main()
{
    long long n;
    cout << "Enter the number to find the largest digit: ";
    cin >> n;
    int largest = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit > largest)
            largest = digit;
        n = n / 10;
    }
    cout << "The largest digit in the given number is: " << largest;
    return 0;
}