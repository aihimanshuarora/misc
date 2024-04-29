#include <bits/stdc++.h>
using namespace std;
int arr[100] = {0};
int n = 100;
int c = 0;
void push(int element)
{
    if (c < 100)
    {
        arr[c] = element;
        c++;
    }
}
void pop()
{
    if (c >= 0)
    {
        arr[c - 1] = 0;
        c--;
    }
}
void display()
{
    for (int i = 0; i < c; i++)
    {
        cout << arr[i] << endl;
    }
}
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
void pushNode(int element, node *&head)
{
    node *newnode = new node(element);
    if (head == NULL)
    {
        head = newnode;
    }
    newnode->next = head;
    head = newnode;
}
void popNode(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    head = head->next;
}
void displayNode(node *head)
{
    if (head == NULL)
        return;
    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }
}
int main()
{
    node *head = new node(0);
    pushNode(10, head);
    pushNode(102, head);
    pushNode(120, head);
    pushNode(145, head);
    popNode(head);
    displayNode(head);

    return 0;
}
