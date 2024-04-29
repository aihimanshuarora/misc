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
node *insert()
{
    int d;
    cin >> d;
    node *root = new node(d);
    int nc;
    cin >> nc;
    for (int i = 0; i < nc; i++)
    {
        root->link.push_back(insert());
    }
    return root;
}
void print(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << "   ";
    for (int i = 0; i < root->link.size(); i++)
    {
        cout << root->link[i]->data;
    }
    cout << endl;
    for (int i = 0; i < root->link.size(); i++)
    {
        print(root->link[i]);
    }
    // for (int i = 0; i < root->link.size(); i++)
    // {
    //     print(root->link[i]);
    // }
}
node *insertlv()
{
    int d;
    cin >> d;
    node *root = new node(d);
    queue<node *> kyu;
    kyu.push(root);
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
            kyu.push(newnode);
            temp->link.push_back(newnode);
        }
    }
    return root;
}
int nnode(node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    int s = 0;
    for (int i = 0; i < head->link.size(); i++)
    {
        s += nnode(head->link[i]);
    }
    return 1 + s;
}
int hnode(node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    int s = 0;
    for (int i = 0; i < head->link.size(); i++)
    {
        s =max(s,nnode(head->link[i]));
    }
    return 1 + s;
}
int diameter (node *root){
    if(root==NULL){
        return 0;
    }
    int a=hnode(root->left);
    int b=hnode(root->right);
    int d=max(d,a+b);
    diam
}
int main()
{

    cout << hnode(insertlv());
    return 0;
}
