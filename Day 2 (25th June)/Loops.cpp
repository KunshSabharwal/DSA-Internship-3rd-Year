#include <iostream>
using namespace std;

int main()
{
    // type 1
    for (int i = 0; i < 3; i++)
    {
        cout << "Hello from type 1" << endl;
    }

    // type 2
    for (int j = 0; j < 3; j++)
        cout << "Hello from type 2" << endl;

    // type 3
    int z = 0;
    for (z; z < 3; z++)
        ;
    cout << "Value of Z becomes: " << z;
    return 0;
}