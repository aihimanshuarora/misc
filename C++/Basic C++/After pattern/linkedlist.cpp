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
    int n;
    cout << "Enter Data For Node";
    cin >> n;

    node *head, *tail;
    head = tail = NULL;
    while (n > 0)
    {
        node *newnode = new node(n);
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
        cin >> n;
    }
    return head;
}
void printLL(node *head)
{
    if (head == NULL)
        return;
    cout << head->data << endl;
    printLL(head->next);
}
void insertI(node *head, int p, int d)
{
    if (p < 0)
        return;
    node *newnode = new node(d);
    if (p == 0)
    {
        newnode->next = head->next;
        head = newnode;
    }
    node *temp = head;
    int s = 0;
    while (s < p - 1)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            return;
        }
        s++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void deleteI(node *head, int pos)
{
    if (pos == 0)
    {
        head = head->next;
    }
    node *temp = head;
    int i = 0;
    while (i < pos)
    {
        temp = temp->next;
        i++;
    }
    temp->next = temp->next->next;
    ;
}
node *midpoint(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *slow, *fast;
    slow = head;
    fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
node *rev(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
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
node *revr(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *ahead = revr(head->next);
    node *temp = ahead;
    if (temp != NULL)
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
bool isPalindrome(node *left, node *right)
{
    right = rev(right);
    while (right != NULL)
    {
        if (right->data != left->data)
        {
            return false;
        }
        else
        {
            right = right->next;
            left = left->next;
        }
    }
    if (left==NULL||left->next == NULL)
    {
        return 1;
    }
    return 0;
}
int main()
{
    node *head = takeInput();
    node *mp = midpoint(head);
    node *right = head, *left = mp->next;
    mp->next = NULL;
    cout << isPalindrome(right, left);

    // cout << mp->data << endl;
    return 0;
}
