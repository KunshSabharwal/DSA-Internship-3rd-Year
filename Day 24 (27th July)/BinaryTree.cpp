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

    void preorder(Node *node)
    {
        if (node == NULL)
            return;
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }

    void inorder(Node *node)
    {
        if (node == NULL)
            return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    void postorder(Node *node)
    {
        if (node == NULL)
            return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }
};

int main()
{
    BinaryTree tree;
    int choice, value;
    while (true)
    {
        cout << "\n===== Binary Tree Menu =====\n";
        cout << "1. Insert Node\n";
        cout << "2. Preorder Traversal\n";
        cout << "3. Inorder Traversal\n";
        cout << "4. Postorder Traversal\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            tree.insert(value);
            break;
        case 2:
            cout << "Preorder: ";
            tree.preorder(tree.root);
            cout << endl;
            break;
        case 3:
            cout << "Inorder: ";
            tree.inorder(tree.root);
            cout << endl;
            break;
        case 4:
            cout << "Postorder: ";
            tree.postorder(tree.root);
            cout << endl;
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid choice!\n";
        }
    }
    return 0;
}
