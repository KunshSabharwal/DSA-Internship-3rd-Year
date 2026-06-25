#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the number to find count of odd and even numbers: ";
    cin >> a;
    int odd_count = 0;
    int even_count = 0;
    int flag = 0;
    if (a <= 0)
    {
        flag = 1;
    }
    else
    {
        if (a % 2 == 0)
        {
            even_count = a / 2;
            odd_count = a / 2;
        }
        else
        {
            even_count = a / 2;
            odd_count = even_count + 1;
        }
    }
    if (flag == 1)
    {
        cout << "Enter a valid non-zero postive number." << endl;
    }
    else
    {
        cout << "The count of odd numbers is: " << odd_count << " and the count of even numbers is: " << even_count << endl;
    }
    return 0;
}