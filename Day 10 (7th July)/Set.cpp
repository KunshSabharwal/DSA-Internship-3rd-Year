#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(20); // Duplicate ignored
    // READ
    cout << "Elements: ";
    for (int x : s)
        cout << x << " ";
    cout << endl;
    // Check if an element exists
    if (s.find(20) != s.end())
        cout << "20 Found\n";
    else
        cout << "20 Not Found\n";
    // UPDATE
    // Sets cannot directly update values so we remove old value and insert new one.
    s.erase(20);
    s.insert(25);
    cout << "After Update: ";
    for (int x : s)
        cout << x << " ";
    cout << endl;
    // DELETE
    s.erase(30);
    cout << "After Delete: ";
    for (int x : s)
        cout << x << " ";
    cout << endl;
    return 0;
}