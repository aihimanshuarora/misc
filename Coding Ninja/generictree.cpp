#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    vector<node *> link;
    node(int s)
    {
        data = s;
    }
};
node *takeInput()
{
    node *head = NULL;
    int data;
    cin >> data;
    node *newnode = new node(data);
    if (head == NULL)
    {
        head = newnode;
    }
    int nc;
    cin >> nc;
    for (int i = 0; i < nc; i++)
    {
        head->link.push_back(takeInput());
    }
    return head;
}
node *takeInputlv()
{
    node *root = NULL;
    int data;
    cin >> data;
    queue<node *> kyu;
    node *newnode = new node(data);
    if (root == NULL)
    {
        root = newnode;
        kyu.push(root);
    }
    while (kyu.size() != 0)
    {
        node *temp = kyu.front();
        kyu.pop();
        int nc;
        cin >> nc;
        for (int i = 0; i < nc; i++)
        {
            int data;
            cin >> data;
            node *newnode = new node(data);
            temp->link.push_back(newnode);
            kyu.push(newnode);
        }
    }
    return root;
}
void print(node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << "   ";
    for (int i = 0; i < head->link.size(); i++)
    {
        cout << head->link[i]->data;
    }
    cout << endl;
    for (int i = 0; i < head->link.size(); i++)
    {
        print(head->link[i]);
    }
}
int nnode(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int smallAns = 0;
    for (int i = 0; i < root->link.size(); i++)
    {
        smallAns += nnode(root->link[i]);
    }
    return 1 + smallAns;
}
int hnode(node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    int smallAns = 0;
    for (int i = 0; i < head->link.size(); i++)
    {
        smallAns = max(smallAns, hnode(head->link[i]));
    }
    return 1 + smallAns;
}
void depth(node *root, int k)
{
    if (root == NULL)
    {
        return ;
    }
    if (k == 0)
    {
        cout << root->data;
        return;
    }
    for (int i = 0; i < root->link.size(); i++)
    {
        depth(root->link[i], k - 1);
    }
}
int main()
{
    // cout << hnode(takeInputlv());
    depth(takeInputlv(),2);
    return 0;
}
