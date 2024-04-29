#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    vector<node *> link;
    node(int a)
    {
        data = a;
    }
};
node *takeInput()
{
    int data;
    cin >> data;
    node *newnode = new node(data);
    int nc;
    cout << "child<<" << endl;
    cin >> nc;
    for (int i = 0; i < nc; i++)
    {
        newnode->link.push_back(takeInput());
    }
    return newnode;
}
void print(node *newnode)
{
    if (newnode == NULL)
        return;
    cout << newnode->data;
    for (int i = 0; i < newnode->link.size(); i++)
    {
        cout << newnode->link[i]->data;
    }
    cout << endl;
    for (int i = 0; i < newnode->link.size(); i++)
    {
        print(newnode->link[i]);
    }
}
int nnode(node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    int small = 0;
    for (int i = 0; i < head->link.size(); i++)
    {
        small += nnode(head->link[i]);
    }
    return 1 + small;
}
int hnode(node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    int small = 0;
    for (int i = 0; i < head->link.size(); i++)
    {
        small = max(small, nnode(head->link[i]));
    }
    return 1 + small;
}
node *takeInputl()
{
    int s;
    cin >> s;
    node *newnode = new node(s);
    queue<node *> q;
    q.push(newnode);

    while (q.empty()==0)
    {
        node *temp = q.front();
        q.pop();
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int d;
            cin >> d;
            node *tem = new node(d);
            temp->link.push_back(tem);
            q.push(temp);
        }
    }
    return newnode;
}
// void prit(node *head){
//     if(head==NULL){
//         return;
//     }
//     cout<<head->data;
//     for()
// }
int main()
{
    print(takeInputl());

    return 0;
}
