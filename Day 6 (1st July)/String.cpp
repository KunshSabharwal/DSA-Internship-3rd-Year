#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string: "; // Input: Hello World
    cin >> s;                     // Cannot take multiple words input seperated by spaces
    cout << s;                    // Only prints Hello
    cin.ignore();                 // ignores the blankspace and 'World' entered after Hello in input
    getline(cin, s);              // gets the word left behind as input buffer during the input i.e. 'World'
    cout << s;                    // prints entire input without space (as space was ignored by cin.ignore()) -> o/p = HelloWorld

    string str = "Hello World!";
    int a = str.size();   // both are exactly same no difference
    int b = str.length(); // both are exactly same no difference
    if (a == b)
        cout << "size and length are same" << endl;

    string ans = str.substr(2, 4); // takes the position of start and end to extract the substring
    cout << ans << endl;

    int z = str.find("elli"); // returns 1 if it finds the substring and -1 if the substring is not found in the main string
    cout << z << endl;

    string str2 = " ";
    if (str2.empty()) // checks if string is empty or not (considers blankspace as not empty and a valid string)
        cout << "string is empty!" << endl;
    else
        cout << "string is not empty!" << endl;

    str.push_back('e'); // accepts only single character
    cout << str << endl;

    str.append("wow"); // can accept entire strings, substrings, character arrays, or multiple copies of a character
    cout << str << endl;

    return 0;
}