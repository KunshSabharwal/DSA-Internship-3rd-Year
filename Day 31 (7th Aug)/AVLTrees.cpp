#include <iostream>
using namespace std;

class AVL
{
private:
    class Node
    {
    public:
        int data;
        Node *left;
        Node *right;
        int h;

        Node(int data)
        {
            this->data = data;
            left = right = NULL;
            h = 1;
        }
    };

    Node *root;

    int getHeight(Node *node)
    {
        if (node == NULL)
            return 0;
        return node->h;
    }

    int getBalance(Node *node)
    {
        if (node == NULL)
            return 0;
        return getHeight(node->left) - getHeight(node->right);
    }

    int max(int a, int b)
    {
        return (a > b) ? a : b;
    }

    Node *leftRotation(Node *node)
    {
        Node *tmp = node->right;
        node->right = tmp->left;
        tmp->left = node;
        node->h = 1 + max(getHeight(node->left), getHeight(node->right));
        tmp->h = 1 + max(getHeight(tmp->left), getHeight(tmp->right));
        return tmp;
    }

    Node *rightRotation(Node *node)
    {
        Node *tmp = node->left;
        node->left = tmp->right;
        tmp->right = node;
        node->h = 1 + max(getHeight(node->left), getHeight(node->right));
        tmp->h = 1 + max(getHeight(tmp->left), getHeight(tmp->right));
        return tmp;
    }

public:
    AVL()
    {
        root = NULL;
    }
};

int main()
{
    return 0;
}