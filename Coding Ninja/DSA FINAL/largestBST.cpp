// // #include <bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //     int n, e;
// //     cin >> n >> e;
// //     vector<vector<int>> adj(n);
// //     while (e--)
// //     {
// //         int s, d;
// //         cin >> s >> d;
// //         adj[s].push_back(d);
// //         adj[d].push_back(s);
// //     }
// //     for (int i = 0; i < adj.size(); i++)
// //     {
// //         cout << i << " ";
// //         for (int j = 0; j < adj[i].size(); j++)
// //         {
// //             cout<<adj[i][j];
// //         }
// //         cout << endl;
// //     }
// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, e;
//     cin >> n >> e;
//     int arr[n][n] = {0};
//     while(e--){
//         int s,d;
//         cin>>s>>d;
//         arr[s][d]=1;
//         arr[d][s]=1;
//     }
//     for(int i=0;i<n;i++){
//         cout<<i<<" ";
//         for(int j=0;j<n;j++){
//             if(arr[i][j]==1){
//                 cout<<arr[i][j];
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }
