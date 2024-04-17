#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node *next;
    node(int s) {
        data = s;
        next = NULL;
    }
};

node *takeInput() {
    int c;
    cin >> c;
    node *head = NULL, *tail = NULL;
    while (c > 1) {
        node *newnode = new node(c);
        if (head == NULL) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = tail->next;
        }
        cin >> c;
    }
    return head;
}

void print(node *head) {
    if (head == NULL)
        return;
    cout << head->data;
    print(head->next);
}

node *mergeSort(node *l, node *r) {
    node *head = NULL, *tail = NULL;
    if (l->data > r->data) {
        head = r;
        r = r->next;
    } else {
        head = l;
        l = l->next;
    }
    tail = head;
    while (l != NULL && r != NULL) {
        if (l->data > r->data) {
            tail->next = r;
            tail = r;
            r = r->next;
        } else {
            tail->next = l;
            tail = l;
            l = l->next;
        }
    }
    if (r != NULL) {
        tail->next = r;
    }
    if (l != NULL) {
        tail->next = l;
    }
    return head;
}

node *mid(node *head) {
    node *slow = head, *fast = head->next;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

node *merge(node *head) {
    if (head->next == NULL)
        return head;
    node *mp = mid(head);
    node *l = head, *r = mp->next;
    l = merge(l);
    r = merge(r);
    return mergeSort(l, r);
}

int main() {
    // print(takeInput());
    print(merge(takeInput()));
    return 0;
}
