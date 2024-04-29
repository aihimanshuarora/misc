// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         next = NULL;
//         this->data = data;
//     }
// };
// void print(node *head)
// {
//     if (head == NULL)
//         return;
//     cout << head->data;
//     print(head->next);
// }
// node *midPoint(node *head)
// {
//     node *slow = head;
//     node *fast = head->next;
//     while (fast != NULL && fast->next != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     return slow;
// }
// void sortt(node *l, node *r)
// {
//     node *head = NULL, *tail = NULL;
//     if (l->data > r->data)
//     {
//         head = r;
//         tail = r;
//         r = r->next;
//     }
//     else
//     {
//         head = tail = l;
//         l = l->next;
//     }
//     while (l != NULL && r != NULL)
//     {
//         if (l->data > r->data)
//         {
//             tail->next = r;
//             tail = r;
//             r = r->next;
//         }
//         else
//         {
//             tail->next = l;
//             tail = l;
//             l = l->next;
//         }
//     }
//     if (l != NULL)
//     {
//         tail->next = l;
        
//     }
//     if (r != NULL)
//     {
//         tail->next = r;
//     }
//     while(tail!=NULL){
//         tail=tail->next;
//     }
//     // cout<<"ok";
// }
// node *merge(node *head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }
//     node *mid = midPoint(head);
//     node *left = head, *right = mid->next;
//     mid->next = NULL;
//     merge(left);
//     merge(right);
//     sortt(left, right);
// }
// int main()
// {
//     node *a = new node(1);
//     a->next = new node(27);
//     a->next->next = new node(20);
//     a->next->next->next = new node(30);
//     a->next->next->next->next = new node(203);
//     a->next->next->next->next->next = new node(130);
//     merge(a);
//     print(a);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        next = NULL;
        this->data = data;
    }
};
void print(node *head)
{
    if (head == NULL)
        return;
    cout << head->data;
    print(head->next);
}
bool cycle(node *head){
    node *slow=head;
    node *fast=head->next;
}
int main(){

}