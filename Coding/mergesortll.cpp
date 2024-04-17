// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int d)
//     {
//         data = d;
//         next = NULL;
//     }
// };
// node *findmid(node *head)
// {
//     if (head == NULL || head->next == NULL)
//         return head;
//     node *slow = head;
//     node *fast = head->next;
//     while (fast != NULL && fast->next != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     return slow;
// }
// node *takeInput()
// {
//     int data;
//     cin >> data;
//     node *head = NULL, *tail = NULL;
//     while (data != 0)
//     {
//         node *newnode = new node(data);
//         if (head == NULL)
//         {
//             head = newnode;
//             tail = newnode;
//         }
//         else
//         {
//             tail->next = newnode;
//             tail = newnode;
//         }
//         cin >> data;
//     }

//     return head;
// }
// void printll(node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     // if (head == NULL)
//     //     return;
//     // cout << head->data;
//     // printll(head->next);
// }
// node *merge(node *left, node *right)
// {
//     // cout << "F";
//     if (left == NULL)
//         return right;
//     if (right == NULL)
//         return left;
//     node *head = NULL;
//     node *tail = NULL;
//     if (left->data <= right->data)
//     {
//         head = left;
//         tail = left;
//         left = left->next;
//     }
//     else
//     {
//         head = right;
//         tail = right;
//         right = right->next;
//     }
//     while (left != NULL && right != NULL)
//     {
//         if (left->data <= right->data)
//         {
//             tail->next = left;
//             tail = left;
//             left = left->next;
//         }
//         else
//         {
//             tail->next = right;
//             tail = right;
//             right = right->next;
//         }
//     }

//     if (left != NULL)
//     {
//         tail->next = left;
//     }
//     // cout << endl

//     if (right != NULL)
//     {
//         tail->next = right;
//     }
//     // cout << endl
//     //      << head->data << endl;
//     while (tail->next != NULL)
//     {
//         tail = tail->next;
//     }
//     return head;
// }
// node *m(node *head)
// {

//     if (head == NULL || head->next == NULL)
//         return head;
//     node *midnode = findmid(head);
//     node *left = head;
//     node *right = midnode->next;
//     midnode->next = NULL;
//     left = m(left);
//     right = m(right);
//     return merge(left, right);
// }
// int main()
// {
//     node *head = takeInput();
//     head = m(head);
//     // printll(head);
//     // cout << endl;
//     printll(head);
//     // printll(head);
//     return 0;
// }\\
#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;

    node(int d) {
        data = d;
        next = NULL;
    }
};

node *findmid(node *head) {
    if (head == NULL || head->next == NULL)
        return head;

    node *slow = head;
    node *fast = head->next;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

node *merge(node *left, node *right) {
    if (left == NULL)
        return right;
    if (right == NULL)
        return left;

    node *head = NULL;
    node *tail = NULL;

    if (left->data <= right->data) {
        head = left;
        tail = left;
        left = left->next;
    } else {
        head = right;
        tail = right;
        right = right->next;
    }

    while (left != NULL && right != NULL) {
        if (left->data <= right->data) {
            tail->next = left;
            tail = left;
            left = left->next;
        } else {
            tail->next = right;
            tail = right;
            right = right->next;
        }
    }

    if (left != NULL)
        tail->next = left;
    if (right != NULL)
        tail->next = right;

    while (tail->next != NULL) {
        tail = tail->next;
    }

    return head;
}

node *mergeSort(node *head) {
    if (head == NULL || head->next == NULL)
        return head;

    node *midnode = findmid(head);
    node *left = head;
    node *right = midnode->next;
    midnode->next = NULL;

    left = mergeSort(left);
    right = mergeSort(right);

    return merge(left, right);
}

void printll(node *head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

node *takeInput() {
    int data;
    cin >> data;

    node *head = NULL;
    node *tail = NULL;

    while (data != 0) {
        node *newnode = new node(data);

        if (head == NULL) {
            head = newnode;
            tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }

        cin >> data;
    }

    return head;
}

int main() {
    node *head = takeInput();
    head = mergeSort(head);
    printll(head);
    return 0;
}
