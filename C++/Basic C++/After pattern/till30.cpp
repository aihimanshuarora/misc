#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    char c;
    node **next;
    bool isTerminal;
    node(char c)
    {
        this->c = c;
        isTerminal = false;
        next = new node *[26];
        for (int i = 0; i < 26; i++)
        {
            next[i] = NULL;
        }
    }
};
class trie
{
    node *root;

public:
    trie()
    {
        root = new trienode('\0');
    }
    void word(string s, node *root)
    {
        if (r[0] == '\0')
        {
            root->isTerminal = 1;
            return;
        }
        int h = s[0] - 'a';
        if (root[h] == NULL)
        {
            root[h] = new node(s[0]);
        }
        word(s.substr(1), root);
    }
    void insert(string s)
    {
        word(s, root);
    }
} int main()
{

    return 0;
}
