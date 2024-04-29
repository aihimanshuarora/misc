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
    int dtaa;
    cin >> dtaa;
    node *head = NULL, *tail = NULL;
    while (dtaa > 0)
    {
        node *newnode = new node(dtaa);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    return head;
}
bool cycle(node *head)
{
    if (head == NULL || head->next == NULL)
        return 0;
    node *slow = head, *fast = head;
    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return 1;
        }
        else
        {
            bool a = cycle(head);
            return a;
        }
    }
}
int main()
{

    node *head = takeInput();
    cout << cycle(head);
    return 0;
}
