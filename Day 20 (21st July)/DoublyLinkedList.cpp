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
    obj->insertEnd(10);
    obj->insertEnd(20);
    obj->insertEnd(30);
    cout << "After inserting at end:" << endl;
    obj->printList();
    obj->insertFront(5);
    obj->insertFront(1);
    cout << "After inserting at front:" << endl;
    obj->printList();
    obj->deleteFront();
    cout << "After deleting front:" << endl;
    obj->printList();
    obj->deleteEnd();
    cout << "After deleting end:" << endl;
    obj->printList();

    return 0;
}