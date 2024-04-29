#include <bits/stdc++.h>
using namespace std;
int main()
{
    int e, v;
    cin >> e >> v;
    vector<vector<int>> abc(v);
    while (e--)
    {
        int s, d;
        cin >> s >> d;
        abc[s].push_back(d);
        abc[d].push_back(s);
    }
    for (int i = 0; i < abc.size(); i++)
    {
        cout << i << " ";
        for (int j = 0; j < abc[i].size(); j++)
        {
            cout << abc[i][j];
        }
        cout << endl;
    }

    return 0;
}
