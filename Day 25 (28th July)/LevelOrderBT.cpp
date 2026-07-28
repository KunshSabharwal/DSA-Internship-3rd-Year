#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

class BinaryTree
{
public:
    Node *root;
    BinaryTree()
    {
        root = NULL;
    }

    void insert(int value) // Insert using Level Order
    {
        Node *newNode = new Node(value);
        if (root == NULL)
        {
            root = newNode;
            return;
        }
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            Node *temp = q.front();
            q.pop();
            if (temp->left == NULL)
            {
                temp->left = newNode;
                return;
            }
            else
                q.push(temp->left);
            if (temp->right == NULL)
            {
                temp->right = newNode;
                return;
            }
            else
                q.push(temp->right);
        }
    }

    void levelOrder() // Level Order Traversal
    {
        if (root == NULL)
        {
            cout << "Tree is empty.\n";
            return;
        }
        queue<Node *> q;
        q.push(root);
        cout << "Level Order Traversal: ";
        while (!q.empty())
        {
            Node *temp = q.front();
            q.pop();
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        cout << endl;
    }
};

int main()
{
    BinaryTree tree;
    int n, value;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter node values:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        tree.insert(value);
    }
    tree.levelOrder();
    return 0;
}