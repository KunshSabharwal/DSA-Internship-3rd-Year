#include <bits/stdc++.h>
using namespace std;

class LinkedList
{
public:
    class Node
    {
    public:
        int val;
        Node *next;
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
    };
    Node *head = NULL;

    void insertVal(int val) // to insert any value into the linked list
    {
        if (head == NULL)
        {
            head = new Node(val);
            return;
        }
        Node *newNode = new Node(val);
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void printList() // to print the linked list
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->val << "-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void deleteFront() // to delete the first element/node in the linked list
    {
        if (head == NULL)
        {
            cout << "Linked List is empty!" << endl;
            return;
        }
        head = head->next;
    }

    void deleteEnd() // to delete the final element/node in the linked list
    {
        if (head == NULL)
        {
            cout << "Linked List is empty!" << endl;
            return;
        }
        else if (head->next == NULL)
        {
            head = NULL;
        }
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
    }

    void reverseLinkedList() // to reverse the linked list
    {
        Node *prev = NULL;
        Node *current = head;
        Node *next = NULL;
        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    Node *reverseLinkedListUsingRecursion(Node *head) // to reverse the linked list using recursion
    {
        if (head == NULL || head->next == NULL)
            return head;
        Node *newHead = reverseLinkedListUsingRecursion(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
};

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    LinkedList *obj = new LinkedList();
    for (int i : arr)
    {
        obj->insertVal(i);
    }
    cout << "Adding all element 1, 2, 3, 4 from the vector to the Linked List: " << endl;
    obj->printList();
    cout << "Deleting the first/front element from the Linked List: " << endl;
    obj->deleteFront();
    obj->printList();
    cout << "Deleting the last/final element from the Linked List: " << endl;
    obj->deleteEnd();
    obj->printList();
    cout << "Reversing the element from the Linked List: " << endl;
    obj->reverseLinkedList();
    obj->printList();
    cout << "Reversing the element from the Linked List using Recursion: " << endl;
    obj->head = obj->reverseLinkedListUsingRecursion(obj->head);
    obj->printList();

    return 0;
}