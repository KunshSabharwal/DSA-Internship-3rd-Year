#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the number to find count of odd and even numbers: ";
    cin >> a;
    int sum = 0;
    if (a <= 0)
    {
        cout << "Enter a valid non-zero postive number." << endl;
    }
    else
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}