#include <bits/stdc++.h>
using namespace std;

class LRUCache
{
public:
    class Node
    {
    public:
        int key, val;
        Node *prev, *next;

        Node(int key, int val)
        {
            this->key = key;
            this->val = val;
            prev = next = NULL;
        }
    };

    int cap;
    unordered_map<int, Node *> mp;
    Node *head, *tail;

    LRUCache(int capacity)
    {
        cap = capacity;
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next = tail;
        tail->prev = head;
    }

    void remove(Node *node)
    {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    void insert(Node *node)
    {
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;
    }

    int get(int key)
    {
        if (mp.find(key) == mp.end())
            return -1;
        Node *node = mp[key];
        remove(node);
        insert(node);
        return node->val;
    }

    void put(int key, int value)
    {
        if (mp.find(key) != mp.end())
        {
            Node *node = mp[key];
            remove(node);
            mp.erase(key);
        }
        Node *node = new Node(key, value);
        insert(node);
        mp[key] = node;
        if (mp.size() > cap)
        {
            Node *del = tail->prev;
            remove(del);
            mp.erase(del->key);
            delete del;
        }
    }

    void display()
    {
        Node *temp = head->next;
        cout << "Cache (MRU -> LRU): ";
        while (temp != tail)
        {
            cout << "(" << temp->key << "," << temp->val << ") ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    LRUCache cache(2);
    cache.put(1, 1);
    cache.display();
    cache.put(2, 2);
    cache.display();
    cout << "get(1) = " << cache.get(1) << endl;
    cache.display();
    cache.put(3, 3); // Evicts key 2
    cache.display();
    cout << "get(2) = " << cache.get(2) << endl;
    cache.put(4, 4); // Evicts key 1
    cache.display();
    cout << "get(1) = " << cache.get(1) << endl;
    cout << "get(3) = " << cache.get(3) << endl;
    cout << "get(4) = " << cache.get(4) << endl;
    cache.display();
    return 0;
}