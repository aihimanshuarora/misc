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
    int d;
    cin >> d;
    node *head, *tail;
    head = tail = NULL;
    while (d > 1)
    {
        node *newnode = new node(d);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> d;
    }
    return head;
}
node *midPoint(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    node *slow = head, *fast = head->next;
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
    while (curr != NULL)
    {
        curr->next = prev;
        ;
        prev = curr;
        curr = next;
        if (next != NULL)
            next = next->next;
    }
    return prev;
}
void print(node *head)
{
    if (head == NULL)
        return;
    cout << head->data << endl;
    print(head->next);
}
node *revr(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *ahead = revr(head->next);
    node *temp = ahead;
    if (ahead != NULL)
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = head;
        head->next = NULL;
    }
    return ahead;
}
// node *revr(node *head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }
//     node *temp = revr(head->next);
//     node *tail = temp;
//     if (tail != NULL)
//     {
//         while (tail->next != NULL)
//         {
//             tail = tail->next;
//         }
//         tail->next = head;
//         head->next = NULL;
//     }
//     return temp;
// }
bool pal(node *head)
{
    node *mp = midPoint(head);
    cout<<"mid"<<mp->data;
    node *l = head, *right = mp->next;
    cout<<"left"<<l->data;
    mp->next = NULL;
    right = rev(right);
    cout<<"right"<<right->data;
    while (l != NULL)
    {
        if (right->data != l->data)
        {
            return false;
        }
        else
        {
            right = right->next;
            l = l->next;
        }
    }
    if (right != NULL && right->next != NULL &&right->next->next!=NULL)
    {
        return 0;
    }
    return 1;
}
int main()
{
    cout << pal(takeInput());

    return 0;
}
