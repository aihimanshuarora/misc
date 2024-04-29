#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>> arr, int s, vector<bool> visited)
{
    cout << s << " ";
    visited[s] = 1;
    for (int i = 0; i < arr[s].size(); i++)
    {
        if (visited[arr[s][i]] == 0)
        {
            dfs(arr, arr[s][i], visited);
        }
    }
}
int main()
{
    int e, v;
    cin >> e >> v;
    vector<vector<int>> arr(v);
    vector<bool> a(v, 0);
    while (e--)
    {
        int s, d;
        cin >> s >> d;
        arr[s].push_back(d);
        arr[d].push_back(s);
    }
    dfs(arr, 0, a);
    // for (int i = 0; i < v; i++)
    // {
    //     cout << i << " ";
    //     for (int j = 0; j < v; j++)
    //     {
    //         if (arr[i][j] != 0)
    //         {
    //             cout << j;
    //         }
    //     }
    //     cout << endl;
    // }
    return 0;
}
