#include <iostream>
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

void printll(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

node *takeInput()
{
    int data;
    cin >> data;

    node *head = NULL;
    node *tail = NULL;

    while (data != 0)
    {
        node *newnode = new node(data);

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

        cin >> data;
    }

    return head;
}
bool cyc(node *head)
{
    node *slow = head;
    node *fast = head;
    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow->data == fast->data)
        {
            return true;
        }
        }
    return false;
}
int main()
{
    node *head = takeInput();
    cout << cyc(head);
    // printll(head);
    return 0;
}
