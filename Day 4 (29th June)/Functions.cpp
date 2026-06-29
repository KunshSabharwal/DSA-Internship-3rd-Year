#include <iostream>
using namespace std;
// any variable outside main or any function body have global scope (known throughout the code)
int function1(int a, int b, int c) // use the same name of the function for the function call in main
{
    int sum;
    sum = a + b + c; // a, b, c have a local scope (not known outside the function)
    return sum;
}

int main()
{
    int ans;                  // can create a variable to store the value, if the function returns any
    ans = function1(5, 8, 9); // either directly pass the values in function call inside main or pass variables having values
    cout << ans;
    return 0;
}