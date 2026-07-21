#include <bits/stdc++.h>
using namespace std;

class DoublyLinkedList
{
public:
    class Node
    {
    public:
        int val;
        Node *prev;
        Node *next;
        Node(int val)
        {
            this->val = val;
            prev = NULL;
            next = NULL;
        }
    };
    Node *head = NULL;

    void insertFront(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    void insertEnd(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
        newNode->prev = temp;
    }

    void deleteFront()
    {
        if (head == NULL)
        {
            cout << "DLL is empty!" << endl;
            return;
        }
        if (head->next == NULL)
        {
            head = NULL;
            return;
        }
        head = head->next;
        head->prev = NULL;
    }

    void deleteEnd()
    {
        if (head == NULL)
        {
            cout << "DLL is empty!" << endl;
            return;
        }
        if (head->next == NULL)
        {
            head = NULL;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->prev->next = NULL;
    }

    void changeNtoFront(int n)
    {
        if (head == NULL || n <= 1)
            return;
        Node *temp = head;
        int cnt = 1;
        while (temp != NULL && cnt < n)
        {
            temp = temp->next;
            cnt++;
        }
        if (temp == NULL)
        {
            cout << "Invalid position!" << endl;
            return;
        }
        if (temp->next != NULL)
            temp->next->prev = temp->prev;
        if (temp->prev != NULL)
            temp->prev->next = temp->next;
        temp->prev = NULL;
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    void printList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    DoublyLinkedList *obj = new DoublyLinkedList();
    cout << "Initially:" << endl;
    obj->printList();
    // Insert at end
    obj->insertEnd(10);
    obj->insertEnd(20);
    obj->insertEnd(30);
    cout << "\nAfter insertEnd(10), insertEnd(20), insertEnd(30):" << endl;
    obj->printList();
    // Insert at front
    obj->insertFront(5);
    obj->insertFront(1);
    cout << "\nAfter insertFront(5), insertFront(1):" << endl;
    obj->printList();
    // Delete front
    obj->deleteFront();
    cout << "\nAfter deleteFront():" << endl;
    obj->printList();
    // Delete end
    obj->deleteEnd();
    cout << "\nAfter deleteEnd():" << endl;
    obj->printList();
    // Move 4th node to front
    obj->changeNtoFront(4);
    cout << "\nAfter changeNtoFront(4):" << endl;
    obj->printList();

    return 0;
}