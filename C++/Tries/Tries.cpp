#include <iostream>
#include <string>
using namespace std;

struct TrieNode
{
    TrieNode *child[26];
    bool isEnd;

    TrieNode()
    {
        isEnd = false;
        for (int i = 0; i < 26; i++)
        {
            child[i] = NULL;
        }
    }
};

void insert(struct TrieNode *root, string key)
{
    struct TrieNode *r = root;
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!r->child[index])
        {
            r->child[index] = new TrieNode();
        }
        r = r->child[index];
    }
    r->isEnd = true;
}

bool search(struct TrieNode *root, string key)
{
    struct TrieNode *r = root;
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!r->child[index])
        {
            return false;
        }
        r = r->child[index];
    }
    return (r != NULL && r->isEnd);
}

bool isEmpty(TrieNode *root)
{
    for (int i = 0; i < 26; i++)
        if (root->child[i])
            return false;
    return true;
}

TrieNode *remove(TrieNode *root, string key, int i)
{

    if (!root)
        return NULL;

    if (i == key.size())
    {

        if (root->isEnd)
            root->isEnd = false;

        if (isEmpty(root))
        {
            delete (root);
            root = NULL;
        }

        return root;
    }

    int index = key[i] - 'a';
    root->child[index] =
        remove(root->child[index], key, i + 1);

    if (isEmpty(root) && root->isEnd == false)
    {
        delete (root);
        root = NULL;
    }

    return root;
}

int main()
{
    string keys[] = {"bad", "bat", "geeks", "geeks", "cat", "cut", "zoo"};

    int n = sizeof(keys) / sizeof(keys[0]);

    struct TrieNode *root = new TrieNode();
    for (int i = 0; i < n; i++)
        insert(root, keys[i]);

    root = remove(root, "zoo", 0); 

    search(root, "zoo") ? cout << "Yes\n" : cout << "No\n";
    search(root, "cat") ? cout << "Yes\n" : cout << "No\n";
    return 0;
}