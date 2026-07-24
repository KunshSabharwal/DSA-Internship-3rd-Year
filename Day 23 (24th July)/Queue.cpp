#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Queue
{
    Node *frontNode, *rearNode;
    int cnt;

public:
    Queue()
    {
        frontNode = rearNode = NULL;
        cnt = 0;
    }

    void enqueue(int x)
    {
        Node *temp = new Node(x);
        if (rearNode == NULL)
            frontNode = rearNode = temp;
        else
        {
            rearNode->next = temp;
            rearNode = temp;
        }
        cnt++;
    }

    void dequeue()
    {
        if (frontNode == NULL)
        {
            cout << "Queue Underflow\n";
            return;
        }
        Node *temp = frontNode;
        frontNode = frontNode->next;
        if (frontNode == NULL)
            rearNode = NULL;
        delete temp;
        cnt--;
    }

    int front()
    {
        if (frontNode == NULL)
        {
            cout << "Queue is Empty\n";
            return -1;
        }
        return frontNode->data;
    }

    int rear()
    {
        if (rearNode == NULL)
        {
            cout << "Queue is Empty\n";
            return -1;
        }
        return rearNode->data;
    }

    int size()
    {
        return cnt;
    }

    bool empty()
    {
        return cnt == 0;
    }

    void printQueue()
    {
        if (frontNode == NULL)
        {
            cout << "Queue is Empty\n";
            return;
        }
        Node *temp = frontNode;
        cout << "Queue: ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.printQueue();
    cout << "Front: " << q.front() << endl;
    cout << "Rear: " << q.rear() << endl;
    cout << "Size: " << q.size() << endl;
    q.dequeue();
    cout << "\nAfter Dequeue:\n";
    q.printQueue();
    cout << "Front: " << q.front() << endl;
    cout << "Rear: " << q.rear() << endl;
    cout << "Size: " << q.size() << endl;

    return 0;
}