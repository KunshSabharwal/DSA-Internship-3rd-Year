#include <iostream>
#include <map>
using namespace std;

int main()
{
    // CREATE
    map<string, int> marks;
    marks["Alice"] = 90;
    marks["Bob"] = 85;
    marks["Charlie"] = 95;
    // READ
    cout << "Students and Marks:\n";
    for (auto x : marks)
        cout << x.first << " : " << x.second << endl;
    // Find a key
    if (marks.find("Bob") != marks.end())
        cout << "Bob's Marks = " << marks["Bob"] << endl;
    // UPDATE
    marks["Bob"] = 99;
    cout << "\nAfter Update:\n";
    for (auto x : marks)
        cout << x.first << " : " << x.second << endl;
    // DELETE
    marks.erase("Alice");
    cout << "\nAfter Delete:\n";
    for (auto x : marks)
        cout << x.first << " : " << x.second << endl;
    return 0;
}