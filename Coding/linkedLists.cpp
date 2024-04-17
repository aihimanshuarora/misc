#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
node *takeInput()
{
    node *head = NULL;
    node *tail = NULL;
    int input;
    cin >> input;
    while (input != 0)
    {
        node *newnode = new node(input);
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
        cin >> input;
    }
    return head;
}
void print(node *ref)
{
    if (ref == NULL)
        return;
    cout << ref->data;
    print(ref->next);
}
void inserti(node *head, int pos, int data)
{

    node *newnode = new node(data);
    if (pos == 0)
    {
        newnode->next = head;
        head = newnode;
    }
    node *temp = head;
    while (pos--)
    {
        temp = temp->next;
        if (temp == NULL && pos != 0)
        {
            cout << "Error";
        }
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void deletei(node *head, int pos)
{

    if (pos == 0)
    {
        head = head->next;
    }
    node *temp = head;
    while (pos--)
    {
        temp = temp->next;
        if (temp == NULL && pos != 0)
        {
            cout << "Error";
        }
    }
    temp->next = temp->next->next;
}
// int main()
// {
//     node *head = takeInput();
//     deletei(head, 2);
//     print(head);
//     return 0;
// }
void insr(node *head, int data, int pos)
{
    if (head == NULL)
        return;
    if (pos == 0)
    {
        node *newnode = new node(data);
        newnode->next = head->next;
        head->next = newnode;
    }
    insr(head->next, data, pos - 1);
}
void delr(node *head, int pos)
{
    if (head == NULL || head->next == NULL && pos != 0)
        return;
    if (pos == 0)
    {
        head->next = head->next->next;
    }
    delr(head->next, pos - 1);
}
node *midpointll(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    node *slow = head;
    node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
node *rev(node *head)
{
    node *prev = NULL, *curr = head, *next = head->next;
    while (curr != NULL && curr->next != NULL)
    {
        curr->next = prev;
        prev = curr;
        curr = next;
        next = next->next;
    }
    curr->next = prev;

    return curr;
}
node *rrev(node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        return head;
    }
    node *temp = rrev(head->next);
    node *tempp = temp;
    while (tempp->next != NULL)
    {
        tempp = tempp->next;
    }
    tempp->next = head;
    head->next = NULL;
    return temp;
}
bool palindrom(node *head)
{
    node *mids = midpointll(head);
    node *left = head, *right = mids->next;
    mids->next = NULL;
    right = rev(right);
    // cout<<"ok";
    while (right != NULL && left != NULL)
    {
        if (right->data != left->data)
            return false;
        right = right->next;
        left = left->next;
    }
    // cout<<"F";
    if (right != NULL || left != NULL)
        return 0;
    return 1;
}
int main()
{

    node *head = takeInput();
    // delr(head, 2);
    cout << palindrom(head);
    // cout << midpointll(head);
    // print(rrev(head));
    // print(head);
}