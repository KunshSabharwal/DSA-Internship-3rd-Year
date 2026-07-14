#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    TrieNode *child[26];
    bool is_word;
    TrieNode()
    {
        is_word = false;
        for (int i = 0; i < 26; i++)
        {
            child[i] = NULL;
        }
    }
};

class Trie
{
public:
    TrieNode *root;
    Trie()
    {
        root = new TrieNode();
    }
    void insert(string word)
    {
        TrieNode *curr = root;
        for (char c : word)
        {
            int index = c - 'a';
            if (curr->child[index] == NULL)
            {
                curr->child[index] = new TrieNode();
            }
            curr = curr->child[index];
        }
        curr->is_word = true;
    }

    bool search(string word)
    {
        TrieNode *curr = root;
        for (char c : word)
        {
            int index = c - 'a';
            if (curr->child[index] == NULL)
                return false;
            curr = curr->child[index];
        }
        return curr->is_word;
    }

    bool startsWith(string prefix)
    {
        TrieNode *curr = root;
        for (char c : prefix)
        {
            int index = c - 'a';
            if (curr->child[index] == NULL)
                return false;
            curr = curr->child[index];
        }
        return true;
    }
};

int main()
{
    Trie trie;
    int n;
    cout << "Enter number of words: ";
    cin >> n;
    cout << "\nEnter " << n << " lowercase words:\n";
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        trie.insert(word);
    }
    int choice;
    do
    {
        cout << "\n========== MENU ==========\n";
        cout << "1. Insert Word\n";
        cout << "2. Search Word\n";
        cout << "3. Search Prefix\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        if (choice == 1)
        {
            string word;
            cout << "Enter word: ";
            cin >> word;
            trie.insert(word);
            cout << "Word inserted successfully.\n";
        }
        else if (choice == 2)
        {
            string word;
            cout << "Enter word to search: ";
            cin >> word;
            if (trie.search(word))
                cout << "Word found in Trie.\n";
            else
                cout << "Word not found in Trie.\n";
        }
        else if (choice == 3)
        {
            string prefix;
            cout << "Enter prefix: ";
            cin >> prefix;
            if (trie.startsWith(prefix))
                cout << "Prefix exists in Trie.\n";
            else
                cout << "Prefix does not exist in Trie.\n";
        }
        else if (choice == 4)
        {
            cout << "Exiting...\n";
        }
        else
        {
            cout << "Invalid choice!\n";
        }
    } while (choice != 4);
    return 0;
}