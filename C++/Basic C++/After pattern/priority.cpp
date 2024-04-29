#include <bits/stdc++.h>
using namespace std;
class tree
{
    vector<int> a;
    public:
    tree()
    {
    }
    bool isEmpty()
    {
        return a.size();
    }
    int size()
    {
        return a.size();
    }
    int fron()
    {
        if (isEmpty())
            return -1;
        return a[0];
    }

    void insert(int element)
    {
        a.push_back(element);
        int ci = a.size() - 1;
        while (ci > 0)
        {
            int pi = (ci - 1) / 2;
            if (a[ci] < a[pi])
            {
                swap(a[ci], a[pi]);
                ci = pi;
            }
            else
            {
                break;
            }
        }
    }
    void print()
    {  
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << ":";
        }
    }
};
int main()
{
    tree *tre = new tree();
    tre->insert(10);
    tre->insert(20);
    tre->insert(40);
    tre->insert(50);
    tre->insert(30);
    tre->print();
    return 0;
}
