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
        left = right = NULL;
    }
};
node *takeInput()
{
    int data;
    cin >> data;
    if (data < 1)
        return NULL;
    node *root = new node(data);
    root->left = takeInput();
    root->right = takeInput();
    return root;
}
void print(node *root)
{
    if (root == NULL)
        return;
    cout << root->data;
    print(root->right);
    print(root->left);
}
node *in(node *root,int data){
    
}
int main()
{
    print(in(takeInput(),23));

    return 0;
}
