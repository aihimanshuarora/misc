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
int count(node *head){
    if(head==NULL){
        return 0;
    }
    return 1+count(head->next);
}
void knode(node *head,int k){
    if(head==NULL){
        return;
    }
    int s=count(head);
    
    if(s<k){
        return;
    }
    int ak=s-k;
    while(ak>0){
        head=head->next;
        ak--;
    }
    cout<<head->data;

}
int main()
{
    knode(takeInput(),2);

return 0;
}
