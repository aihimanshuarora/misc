// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // {
// // //     int n;
// // //     cin >> n;
// // //     // for (int i = 0; i < n; i++)
// // //     // {
// // //     //     for (int j = 0; j < n; j++)
// // //     //     {
// // //     //         // cout << "*";
// // //     //         // cout<<i;
// // //     //         // cout << j;
// // //     //         cout<<n-j;
// // //     //     }
// // //     //     cout << endl;
// // //     // }
// // //     // cout << endl;
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         for (int j = i; j >= 1; j--)
// // //         {
// // //             cout << j;
// // //             // cout << "*";
// // //             // cout << n - (i + j) + 1;
// // //         }
// // //         // for (int j = 0; j < i; j++)
// // //         // {
// // //         //     // cout << "*";
// // //         //     // cout << n - (i + j) + 1;
// // //         // }
// // //         cout << endl;
// // //     }
// // //     cout << endl;
// // //     // for (int i = 0; i < n; i++)
// // //     // {
// // //     //     for (int j = 0; j < i; j++)
// // //     //     {
// // //     //         cout << " ";
// // //     //     }
// // //     //     for (int j = 0; j < n - i; j++)
// // //     //     {
// // //     //         cout << "*";
// // //     //     }
// // //     //     cout << endl;
// // //     // }
// // //     // for (int i = 0; i < n; i++)
// // //     // {
// // //     //     for (int j = 0; j < n - i; j++)
// // //     //     {
// // //     //         cout << " ";
// // //     //     }
// // //     //     for (int j = 0; j < i; j++)
// // //     //     {
// // //     //         cout << "*";
// // //     //     }
// // //     //     cout << endl;
// // //     // }
// // //     return 0;
// // // }
// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     // for (int i = 0; i < 5; i++)
// //     // {
// //     //     for (int j = 0; j < i; j++)
// //     //     {
// //     //         cout << char('A' + i - j - 1);
// //     //     }
// //     //     cout << endl;
// //     // }
// //     for (int i = 0; i < 5; i++)
// //     {
// //         for (int j = 0; j < i; j++)
// //         {
// //             cout << char('A' + 5-i+j);
// //         }
// //         cout << endl;
// //     }
// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5 - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < 2 * i - 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < 2 * 5 - 2 * i - 1; j++)
//         {
//             cout << "*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << i + j + 1;
        }
        for (int j = 2 * (i + 1) - 1; j > i; j--)
        {
            cout << j;
        }
        cout<<endl;
    }
    return 0;
}
