#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    vector<node *> *link;
    bool is;
    char c;
    node(char c)
    {
        this->c = c;
        is = 0;
        link = new vector<node *>(26);
        for (int i = 0; i < 25; i++)
        {
            link[i] = NULL;
        }
    }
};
class trie
{
    node *root;

public:
    trie()
    {
        root = new node('\0');
    }
    void insertword(string s, node *root)
    {
        if (s.size() <= 0)
        {
            root->is = 1;
            return;
        }
        int index = s[0] - 'a';
        node *child;
        if (root->link[index] == NULL)
        {
            child = new node(s[0]);
            root->link[index] = child;
        }
        else
        {
            child = root->link[index];
        }
        insertword(child, s.substr(1));
    }
    void insert(string s)
    {
        insertword(s, root);
    }
    bool search(node *root,string s){
        if(s.size()==0){
            if(root->is)return 1;
            return 0;
        }
        int index=s[0]-'a';
        if(root->link[index]==NULL){
            return 0;
        }
        return search(root->link[index],s.substr(1));
        
    }
    void remove(node *root,string s){
        if(root==NULL){
            return;
        }
        if(s.size()==0){
            root->is=0;
            return;
        }
        remove(root->link[s[0]-'a']);
        if(root->is==false){
            for(int i=0;i<25;i++){
                root->link[i]=NULL;
            }
        }
    }
};
int main()
{

    return 0;
}
