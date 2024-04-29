// // #include <bits/stdc++.h>
// // using namespace std;
// // void print(vector<vector<int>> adj){
// //     for(int i=0;i<adj.size();i++){
// //         for(int j=0;j<adj[i].size();j++){
// //             cout<<adj[i][j]<<" ";
// //         }
// //         cout<<endl;
// //     }
// // }
// // int main()
// // {
// //     int edges, vertices;
// //     cin >> edges >> vertices;
// //     vector<vector<int>> adj(vertices);
// //     while (edges--)
// //     {
// //         int s, d;
// //         cin >> s >> d;
// //         adj[s].push_back(d);
// //         adj[d].push_back(s);
// //     }
// //     print(adj);
// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;
// void print(vector<vector<int>> adj){
//     for(int i=0;i<adj.size();i++){
//         cout<<i<<" ";
//         for(int j=0;j<adj[i].size();j++){
//             cout<<adj[i][j];
//         }cout<<endl;
//     }
// }
// int main()
// {
//     int e, v;
//     cin >> e >> v;

//     vector<vector<int>> adj(v);
//     while(e--){
//         int s,d;
//         cin>>s>>d;
//         adj[s].push_back(d);
//         adj[d].push_back(s);
//     }
//     print(adj);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>> adj, vector<int> visited, int s)
{
    cout << s;
    visited[s] = true;
    for (int i = 0; i < adj[s].size(); i++)
    {
        if (visited[adj[s][i]] == false)
            dfs(adj, visited, adj[s][i]);
    }
}
int main()
{
    int e, v;
    cin >> e >> v;
    // int arr[v][v];
    vector<vector<int>> arr(v);

    while (e--)
    {
        int s, d;
        cin >> s >> d;
        arr[s].push_back(d);
        arr[d].push_back(s);
    }
    // for (int i = 0; i < v; i++)
    // {
    //     for (int j = 0; j < v; j++)
    //     {
    //         cout << arr[i][j];
    //     }
    //     cout << endl;
    // }
    vector<int> visited(v, 0);
    int s = 0;

    dfs(arr, visited, s);

    return 0;
}
