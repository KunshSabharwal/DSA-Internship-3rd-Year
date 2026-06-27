#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number to be reversed: ";
    cin >> n;
    int rev_num = 0;
    while (n != 0)
    {
        int digit = n % 10;
        rev_num = rev_num * 10 + digit;
        n = n / 10;
    }
    cout << "The reversed number is: " << rev_num;
    return 0;
}