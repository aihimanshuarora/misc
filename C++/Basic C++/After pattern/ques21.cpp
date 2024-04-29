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
node *midpoint(node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    node *slow = head, *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
node *merge(node *head, node *m)
{

    node *heads = NULL, *tails = NULL;
    if (head->data > m->data)
    {
        heads = m;
        m = m->next;
    }
    else
    {
        heads = head;
        head = head->next;
    }
    tails = heads;
    while (head != NULL && m != NULL)
    {
        if (head->data > m->data)
        {
            tails->next = m;
            m = m->next;
            tails->next->next = NULL;
            tails = tails->next;
        }
        else
        {
            tails->next = head;
            head = head->next;
            tails->next->next = NULL;
            tails = tails->next;
        }
    }
    if (m != NULL)
    {
        tails->next = m;
    }
    if (head != NULL)
    {
        tails->next = head;
    }
    // heads=head;
    return heads;
}
void display(node *head)
{
    if (head == NULL)
        return;
    cout << head->data << "  ";
    display(head->next);
}
void mergeSort(node *&head)
{
    if (head->next == NULL)
        return;
    node *mp = midpoint(head);
    cout << "mp is" << mp->data << endl;
    node *m = mp->next;
    mp->next = NULL;
    mergeSort(head);
    mergeSort(m);
    head = merge(head, m);
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(2);
    head->next->next->next = new node(3);
    mergeSort(head);
    display(head);

    return 0;
}
