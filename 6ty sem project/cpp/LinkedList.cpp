#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int a)
    {
        data = a;
        next = NULL;
    }
};
node *takeInput()
{
    int data;
    cin >> data;
    node *head, *tail;
    head = tail = NULL;
    while (data > 1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = head;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}
void pirnt(node *head)
{
    if (head == NULL)
        return;
    cout << head->data << endl;
    pirnt(head->next);
}
node *insert(node *head, int i)
{
    node *temp = head;
    if (i == 0)
    {
        node *newnode = new node(40);
        newnode->next = head;
        head = newnode;
    }
    while (i > 1)
    {
        i--;
        temp = temp->next;
        if (temp == NULL)
        {
            return head;
        }
    }
    node *newnode = new node(69);

    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}
node *del(node *head, int i)
{
    if (head == NULL)
    {
        return head;
    }
    if (i == 0)
    {
        head = head->next;
        return head;
    }
    node *temp = head;
    while (i--)
    {
        temp = temp->next;
    }
    node *t = temp->next;
    temp->next = t->next;
    delete t;
    return head;
}
void insRec(node *head, int n)
{
    if (head == NULL)
        return;
    if (n > 1)
    {
        insRec(head->next, n - 1);
    }
    node *temp = new node(40);
    temp->next = head->next;
    head->next = temp;
    pirnt(head);
}
int main()
{

    insRec(takeInput(), 2);
    return 0;
}
