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
        right = left = NULL;
    }
};
node *take()
{
    int data;
    cin >> data;
    if (data < 1)
        return NULL;
    node *root = new node(data);
    root->left = take();
    root->right = take();
    return root;
}
void print(node *root)
{
    if (root == NULL)
        return;
    cout << root->data;
    if (root->left != NULL)
    {
        cout << root->left->data;
    }
    if (root->right != NULL)
    {
        cout << root->right->data;
    }
    cout << endl;
    if (root->left != NULL)
    {
        print(root->left);
    }
    if (root->right != NULL)
    {
        print(root->right);
    }
}
int diameter(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = 0, rh = 0;
    int diam = lh + rh + 1;

    lh = diameter(root->left);
    rh = diameter(root->right);
    diam = max(diam, lh + rh);

    return diam;
}
bool isBST(node *head)
{
    if (head == NULL)
    {
        return 1;
    }
    if (head->left == NULL)
    {
        if (head->right != NULL && head->right->data < head->data)
        {
            return 0;
        }
    }
    if (head->right == NULL)
    {
        if (head->left != NULL && head->left->data > head->data)
        {
            return 0;
        }
    }
    if (head->data < head->left->data || head->data > head->right->data)
    {
        return 0;
    }
    return isBST(head->left) && isBST(head->right);
}
bool isBSTs(node *root)
{
    if (root == NULL)
    {
        return 1;
    }
    bool s = isBSTs(root->left);
    bool sa = isBSTs(root->right);
    if (s != 1 || sa != 1)
    {
        return 0;
    }
    return 1;
}
node *fn(node *head, int e)
{
    if (head == NULL)
    {
        return head;
    }
    if (head->data == e)
    {
        return head;
    }
    else if (head->data > e)
    {
        return fn(head->left, e);
    }
    else
    {
        return fn(head->right, e);
    }
}
node *insert(node *head, int elem)
{
    if (head == NULL)
    {
        node *newnode = new node(elem);
        return newnode;
    }
    if (head->data > elem)
    {
        head->left = insert(head->left, elem);
    }
    else
    {
        head->right = insert(head->right, elem);
    }
    return head;
}
int main()
{
    node *temp = fn(take(), 2);
    cout << temp->data;
    return 0;
}
