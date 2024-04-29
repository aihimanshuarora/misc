#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left, *right;
    node(int d)
    {
        data = d;
        right = left = NULL;
    }
};
node *takeinput()
{
    int data;
    cin >> data;
    if (data < 1)
        return NULL;
    node *root = new node(data);
    root->left->takeinput();
    root->right->takeinput();
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
int main()
{
print(takeinput());
    return 0;
}
