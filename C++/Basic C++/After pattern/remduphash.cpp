#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> a;
    int arr[] = {1, 2, 3, 4, 4, 4, 4, 2, 2, 2, 3};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        if (a.count(i) == 1)
        {
            continue;
        }
        a.insert(1, i);
    }
    map<int, int>::iterator it = a.begin();
    while (it != a.end())
    {
        cout << it.key << endl;
        it++;
    }
    return 0;
}
