#include<bits/stdc++.h>
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
bool cycle(node *head){
    node *slow=head;
    node *fast=head->next;
    while(slow!=NULL&&fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return 0;
        }
    }
    return 1;
}
int main()
{
cout<<cycle(takeInput());
return 0;
}
