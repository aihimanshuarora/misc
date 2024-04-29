#include <bits/stdc++.h>
using namespace std;
void print(vector<vector<int>> al)
{
}
int main()
{
    int edges, vertices;
    cin >> edges >> vertices;
    vector<vector<int>> al(vertices);
    // vector<vector<int>> vis;
    // for (int i = 0; i < vertices; i++)
    // {
    //     // vis.push_back(0);
    //     for (int j = 0; j < vertices; j++)
    //     {
    //         vis[i].push_back(0);
    //     }
    // }

    while (edges--)
    {
        int s, d;
        cin >> s >> d;
        al[s].push_back(d);
        al[d].push_back(s);
    }
    for (int i = 0; i < al.size(); i++)
    {
        cout << i << " ";

        for (int j = 0; j < al[i].size(); i++)
        {

            cout << "element:" << al[i][j] << endl;
            ;
            // vis[i][j] = 1;
        }
        cout << endl;
    }
    // print(al);
    return 0;
}
