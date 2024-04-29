#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int s)
    {
        data = s;
        next = NULL;
    }
};
void print(node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data;
    print(head->next);
}
node *takeInput()
{
    int data;
    cin >> data;
    node *head = NULL, *tail = NULL;
    while (data > 0)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = tail = newnode;
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
void insert(node *head, int i, int v)
{
    if (i == 1)
    {
        node *newnode = new node(v);
        newnode->next = head->next;
        head->next = newnode;
    }
    else
    {
        insert(head->next, i - 1, v);
    }
}
void deletse(node *head, int i)
{
    if (i == 1)
    {
        head->next = head->next->next;
    }
    else
    {
        head = head->next;
        i--;
        deletse(head, i);
    }
}
node *midPoint(node *head)
{
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
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *temp = rev(head->next);
    node *a = temp;
    while (a->next != NULL)
    {
        a = a->next;
    }
    a->next = head;
    head->next = NULL;
    return temp;
}
node *rev2(node *head)
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
bool isPalindrome(node *hed)
{
    node *mid = midPoint(hed);
    node *left = hed, *right = mid->next;
    mid->next = NULL;
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
    if (right == left && right == NULL)
        return 1;
    else if (right != NULL && right->next == NULL || left != NULL && left->next == NULL)
    {
        return 1;
    }
    return 0;
}
bool cycle(node *head)
{
    node *slow = head;
    node *fast = head->next;
    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return 1;
    }
    return 0;
}
int k(node *head, int n)
{
    node *slow = head;
    node *fast = head->next;
    int i = 0;
    while (i < n && slow != NULL && fast != NULL)
    {
        i++;
        slow = slow->next;
        fast = fast->next;
    }
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}
int main()
{
    node *head = takeInput();
    // print(rev2(head));
    cout << k(head, 2);

    // print(head);
    // cout << endl;
    // cout << midPoint(head);

    return 0;
}
