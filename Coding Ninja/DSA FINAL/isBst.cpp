#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left, *right;
    node(int s)
    {
        data = s;
        left = right = NULL;
    }
};
node *takeInput()
{
    int data;
    cin >> data;
    if (data < 1)
    {
        return NULL;
    }
    node *newnode = new node(data);
    newnode->left = takeInput();
    newnode->right = takeInput();
    return newnode;
    // newnode->left=takeInput();
}
void print(node *head)
{
    if (head == NULL)
        return;
    cout << head->data;
    print(head->left);
    print(head->right);
}
bool is(node *head)
{
    if (head == NULL)
    {
        return true;
    }
    bool a = is(head->left) && is(head->right);

    if (a != 1)
    {
        if (head->left != NULL && head->right != NULL && head->data < head->left->data && head->data > head->right->data)
        {
            // cout << "p";
            return 0;
        }
    }

    return 1;
}
bool isn(node *root, int data)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->data == data)
        return 1;
    else if (root->data > data)
    {
        return isn(root->left, data);
    }
    return isn(root->right, data);
}
class llnode
{
public:
    int data;
    llnode *next;
    llnode(int s)
    {
        data = s;
        next = NULL;
    }
};
llnode *bst2ll(node *root, llnode *head)
{
    if (root == NULL)
    {
        return NULL;
    }
    llnode *tail = NULL;
    llnode *newnode = new llnode(root->data);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else{
    tail->next = newnode;
    tail = newnode;}
    
    tail->next = bst2ll(root->left, head);
    if (tail->next == NULL)
    {
        tail->next = bst2ll(root->right, head);
    }
    return head;
}
int main()
{
    // cout << isn(takeInput(), 2);
    llnode *hea = NULL;
    llnode *head = bst2ll(takeInput(), hea);
    while (head != NULL)
    {
        cout << head->data;
        head = head->next;
    }

    return 0;
}
