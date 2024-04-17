#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    vector<node *> link;
    node(int d)
    {
        data = d;
    }
};
node *takeInput()
{
    int data;
    cin >> data;
    if (data < 1)
        return NULL;
    node *root = new node(data);
    int n;
    cout << "Enter the number of child of" << data;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        root->link.push_back(takeInput());
    }
    return root;
}
void print(node *root)
{
    if (root == NULL)
    {
        return;
        ;
    }
    cout << root->data;
    for (int i = 0; i < root->link.size(); i++)
    {
        print(root->link[i]);
    }
}
node *takeInputLv()
{
    int data;
    cin >> data;
    if (data < 1)
        return NULL;
    node *root = new node(data);

    queue<node *> kyu;
    kyu.push(root);
    while (kyu.size() != 0)
    {
        node *temp = kyu.front();
        kyu.pop();
        int n;
        cout << "Enter child of" << temp->data;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> data;
            node *ref = new node(data);
            temp->link.push_back(ref);
            kyu.push(ref);
        }
    }
    return root;
}
void printLv(node *head)
{
    if (head == NULL)
        return;
    cout << head->data << " ";
    for (int i = 0; i < head->link.size(); i++)
    {
        cout << head->link[i]->data << " ";
    }
    cout << endl;
    for (int i = 0; i < head->link.size(); i++)
    {
        printLv(head->link[i]);
    }
}
int nnode(node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    int smallAns = 0;
    for (int i = 0; i < head->link.size(); i++)
    {
        smallAns += nnode(head->link[i]);
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
int main()
{
    cout << hnode(takeInputLv());
    return 0;
}