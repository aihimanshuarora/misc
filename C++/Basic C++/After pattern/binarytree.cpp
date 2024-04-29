#include <bits/stdc++.h>
using namespace std;
class n
{
public:
    int d;
    n *l, *r;
    n(int s)
    {
        d = s;
        l = r = NULL;
    }
};
n *ip()
{
    int c;
    cin >> c;
    if (c < 1)
        return NULL;
    n *nn = new n(c);
    nn->l = ip();
    nn->r = ip();
    return nn;
}
void p(n *s)
{
    if (s == NULL)
        return;
    cout << s->d;
    if (s->l != NULL)
    {
        cout << s->l->d;
    }
    if (s->r != NULL)
    {
        cout << s->r->d;
    }
    cout << endl;
    if (s->l != NULL)
    {
        p(s->l);
    }
    if (s->r != NULL)
    {
        p(s->r);
    }
}
n *lip()
{
    int a;
    cin >> a;
    n *nn = new n(a);
    queue<n *> q;
    q.push(nn);
    while (q.size() != 0)
    {
        n *r = q.front();
        q.pop();
        int m;
        cin >> m;
        if (m < 1)
        {
            r->l = NULL;
        }
        else
        {
            r->l = new n(m);
            q.push(r->l);
        }
        cin >> m;
        if (m < 1)
        {
            r->r = NULL;
        }
        else
        {
            r->r = new n(m);
            q.push(r->r);
        }
    }
    return nn;
}
int nnode(n *r)
{
    if (r == NULL)
        return 0;
    int small = 0;
    small = nnode(r->l) + nnode(r->r);
    return 1 + small;
}
bool isbst(n *r)
{
    if (r == NULL || r->l == NULL && r->r == NULL)
    {
        return 1;
    }
    bool a = isbst(r->r) && isbst(r->l);
    if (r->d > r->l->d && r->d < r->r->d)
    {
        return 1;
    }
    return 0;
}
int findnode(n *r, int e)
{
    if (r == NULL)
    {
        return -1;
    }
    if (r->d == e)
    {
        return 1;
    }
    else if (r->d > e)
    {
        return findnode(r->l, e);
    }
    else
    {
        return findnode(r->r, e);
    }
}
n *insert(n *r, int d)
{
    if (r == NULL)
    {
        r = new n(d);
        // r = nn;
        return r;
    }
    if (r->d > d)
    {
        r->l = insert(r->l, d);
    }
    else if (r->d < d)
    {
        r->r = insert(r->r, d);
    }
    else
    {
    }
    return r;
}
int main()
{
    n *a = lip();
    a = insert(a, 37);
    p(a);
    return 0;
}
