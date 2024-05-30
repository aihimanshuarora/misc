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
    int a;
    cin >> a;
    node *head = NULL, *tail = NULL;
    while (a > 0)
    {
        node *newnode = new node(a);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> a;
    }
    return head;
}
void display(node *head)
{
    if (head == NULL)
        return;
    cout << head->data;
    display(head->next);
}
void in(node *head, int d, int p)
{
    if (p == 0)
    {
        node *newnode = new node(d);
        newnode->next = head->next;
        head->next = newnode;
    }
    else
    {
        in(head->next, d, p - 1);
    }
}
void din(node *head, int p)
{
    while (p >= 1)
    {
        head = head->next;
    }
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    head->next = head->next->next;
}
node *mid(node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    node *slow = head, *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
node *rev(node *head)
{
    node *prev = NULL, *curr = head, *next = head->next;
    while (curr != NULL)
    {
        curr->next = prev;
        prev = curr;
        curr = next;
        if (next != NULL)
            next = next->next;
    }
    return prev;
}
node *hort(node *left, node *right)
{
    node *head = NULL;
    if (left == NULL)
    {
        return right;
    }
    if (right == NULL)
    {
        return left;
    }
    if (left->data > right->data)
    {
        head = right;
        right = right->next;
    }
    else
    {
        head = left;
        left = left->next;
    }
    node *tail = head;
    while (left != NULL && right != NULL)
    {
        if (left->data > right->data)
        {
            tail->next = right;
            tail = tail->next;
            right = right->next;
        }
        else
        {
            tail->next = left;
            tail = tail->next;
            left = left->next;
        }
    }
    if (left != NULL)
    {
        tail->next = left;
    }
    if (right != NULL)
    {
        tail->next = right;
    }
    while (tail != NULL)
        tail = tail->next;
    return head;
}
void merge(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    node *midp = mid(head);
    node *right = midp->next;
    // cout<<midp->data<<endl;
    node *left = head;
    midp->next = NULL;
    merge(left);
    merge(right);
    hort(left, right);
}
node *revs(node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    node *temp = revs(head->next);
    node *a = temp;
    while (a->next != NULL)
    {
        a = a->next;
    }
    a->next = head;
    head->next = NULL;
    return temp;
}
bool palindrome(node *head)
{
    node *mids = mid(head);
    node *left = head, *right = mids->next;
    mids->next = NULL;
    right = rev(right);
    while (right != NULL && left != NULL)
    {
        if (right->data != left->data)
        {
            return 0;
        }
        right = right->next;
        left = left->next;
    }
    if (left == NULL && right == NULL)
        return 1;
    if (right == NULL && left->next == NULL)
        return 1;
    if (left == NULL && right->next == NULL)
        return 1;
    return 0;
}
int sa()
{
    node *head = takeInput();
    // cout << palindrome(head);
    merge(head);
    display(head);
    // display(revs(head));
    // node *mp = mid(head);
    // cout << mp->data;
    return 0;
}
bool isCycle(node *head)
{
    node *s = head;
    node *f = s->next;
    while (s != NULL && f != NULL && f->next != NULL)
    {
        s = s->next;
        f = f->next->next;
        if (s == f)
            return 1;
    }
    return 0;
}
node *knode(node *head, int k)
{
    node *temp = head;
    while (k--)
    {
        temp = temp->next;
        if(temp==NULL)return NULL;
    }
    while (temp != NULL)
    {
        temp = temp->next;
        head = head->next;
    }
    return head;
}
int main()
{
    node *s=knode(takeInput(),2);
    cout<<s->data;
}
