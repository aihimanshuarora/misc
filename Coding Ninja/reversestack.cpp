#include <bits/stdc++.h>
using namespace std;
void insert(stack<int> &s, int e)
{
    if (s.size() == 0)
    {
        s.push(e);
    }
    else
    {
        int a = s.top();
        s.pop();
        insert(s, e);
        s.push(a);
    }
}
void reverse(stack<int> &a)
{
    if (a.size() == 0)
    {
        return;
    }
    int t = a.top();
    a.pop();
    reverse(a);
    insert(a, t);
}
int main()
{
    stack<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    reverse(a);
    while (a.size() != 0)
    {
        cout << a.top();
        a.pop();
    }

    return 0;
}
