#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left, *right;
    node(int dd)
    {
        data = dd;
        left = NULL;
        right = left;
    }
};
node *takeInput()
{
    int data;
    cout << "Enter Data";
    cin >> data;
    if (data < 1)
        return NULL;
    node *root = new node(data);
    root->left = takeInput();
    root->right = takeInput();
    return root;
}
void print(node *ref)
{
    if (ref == NULL)
        return;
    cout << ref->data;
    if (ref->left != NULL)
    {
        cout << ref->left->data;
    }
    if (ref->right != NULL)
    {
        cout << ref->right->data;
    }
    cout << endl;
    if (ref->left != NULL)
    {
        print(ref->left);
    }
    if (ref->right != NULL)
    {
        print(ref->right);
    }
}
node *takeInputLv()
{
    int data;
    cin >> data;
    if (data < 1)
        return NULL;
    node *root = new node(data);
    queue<node *> kyu;
    kyu.push(root);
    while (kyu.size() != 0)
    {
        node *ref = kyu.front();
        kyu.pop();
        for (int i = 0; i < 2; i++)
        {
            int data;
            cin >> data;
            if (data < 1)
            {
                continue;
            }
            node *newnode = new node(data);
            kyu.push(newnode);
            if (i == 0)
            {
                ref->left = newnode;
            }
            else
                ref->right = newnode;
        }
    }
    return root;
}
void printLv(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data;
    if (root->left != NULL)
    {
        cout << root->left->data;
    }
    if (root->right != NULL)
    {
        cout << root->right->data;
    }
    printLv(root->left);
    printLv(root->left);
}
bool isbst(node *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }
    if (root->data > root->right->data || root->data < root->left->data)
    {
        return false;
    }
    // cout<<
    bool a = isbst(root->left);
    a = a && isbst(root->right);
    return a;
}
bool isNodwe(node *root, int data)
{
    bool a = 0;

    if (root == NULL)
    {
        return false;
    }
    if (root->data == data)
    {
        return 1;
    }
    else if (root->data > data)
    {
        a = isNodwe(root->left, data);
    }
    else
    {
        a = isNodwe(root->right, data);
    }
}
// vector<node *> nodebtwn(node *head, int a, int b)
//  {
//      vector<node *> *nod = new vector<node *>;
//      if (head == NULL)
//      {
//          return {};
//      }
//      if (head->data < a)
//      {
//          // nod = nodebtwn(head->right, a, b);
//          nod->push_back(nodebtwn(head->right, a, b));
//      }
//      else if (head->data > b)
//  //     {
//          nod->push_back(nodebtwn(head->left, a, b));
//          // nod = nodebtwn(head->left, a, b);
//      }
//      else
//      {
//          nod->push_back(head);
//          nod->push_back(nodebtwn(head->left, a, b));
//          nod->push_back(nodebtwn(head->right, a, b));
//      }
//      return nod;
//  }
node *insertAt(node *root, int data)
{
    if (root == NULL)
    {
        node *newnode = new node(data);
        return newnode;
    }
    if (root->data < data)
    {
        // if (root->right == NULL)
        // {
        //     node *newnode = new node(data);
        //     root->right=newnode;
        //     return newnode;
        // }
        root->right = insertAt(root->right, data);
    }
    else
    {
        // if (root->left == NULL)
        // {
        //     node *newnode = new node(data);
        //     root->left=newnode;
        //     return newnode;
        // }
        root->left = insertAt(root->left, data);
    }
    return root;
}
node *deleteNode(node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == data)
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        else if (root->left != NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        else if (root->right != NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }
        else
        {

            // will not consider the case for now
        }
    }
    else if (root->data > data)
    {
        root->left = deleteNode(root->left, data);
    }
    else
    {
        root->right = deleteNode(root->right, data);
    }
    return root;
}
int main()
{
    node *head = (takeInputLv());
    print(head);
    cout << endl;
    print(deleteNode(head,2));
    // print(head);
    return 0;
}