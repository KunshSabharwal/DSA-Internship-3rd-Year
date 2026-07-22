#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Stack
{
    Node *head;

public:
    Stack()
    {
        head = NULL;
    }

    void push(int val)
    {
        cout << "Adding value : " << val << " to the stack" << endl;
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void pop()
    {
        if (head == NULL)
        {
            cout << "Stack Underflow\n";
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    int peek()
    {
        if (head == NULL)
        {
            cout << "Stack is Empty\n";
            return -1;
        }
        return head->data;
    }

    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << "Top: " << st.peek() << endl;
    st.pop();
    cout << "Top after pop: " << st.peek() << endl;
    if (st.empty())
        cout << "Stack is Empty\n";
    else
        cout << "Stack is Not Empty\n";

    return 0;
}