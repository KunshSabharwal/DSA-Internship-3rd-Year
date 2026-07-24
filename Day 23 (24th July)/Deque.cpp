#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> q;
    q.push_back(10);
    q.push_back(20);
    q.push_back(30);
    cout << "Queue: ";
    for (int x : q)
        cout << x << " ";
    cout << endl;
    cout << "Front: " << q.front() << endl;
    cout << "Rear: " << q.back() << endl;
    cout << "Size: " << q.size() << endl;
    q.pop_front();
    cout << "\nAfter Dequeue:\n";
    cout << "Queue: ";
    for (int x : q)
        cout << x << " ";
    cout << endl;
    cout << "Front: " << q.front() << endl;
    cout << "Rear: " << q.back() << endl;
    cout << "Size: " << q.size() << endl;

    return 0;
}