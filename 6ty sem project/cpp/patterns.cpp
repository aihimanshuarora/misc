// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // void a()
// // // {
// // //     int o = 0;
// // //     for (int i = 0; i < 5; i++)
// // //     {
// // //         for (int j = 0; j < 5; j++)
// // //         {
// // //             cout << 5 - j;
// // //             // cout << o++;
// // //             // cout << "*"; i and j can be tried too.
// // //         }
// // //         cout << endl;
// // //     }
// // // }
// // // void b()
// // // {
// // //     for (int i = 0; i < 5; i++)
// // //     {
// // //         for (int j = 0; j < i; j++)
// // //         {
// // //             cout << "*";
// // //         }
// // //         cout << endl;
// // //     }
// // // }
// // // void c()
// // // {
// // //     int num = 0;
// // //     for (int i = 0; i < 5; i++)
// // //     {
// // //         for (int j = 0; j < 5 - i; j++)
// // //         {
// // //             cout << " ";
// // //         }
// // //         for (int j = 0; j < i; j++)
// // //         {
// // //             cout << num++;
// // //             // cout << "*";
// // //         }
// // //         cout << endl;
// // //     }
// // // }
// // // void d()
// // // {
// // //     for (int i = 0; i < 5; i++)
// // //     {

// // //         for (int j = 0; j < 5 - i; j++)
// // //         {
// // //             // cout << "*";
// // //             cout << 5 - i;
// // //         }
// // //         cout << endl;
// // //     }
// // // }
// // // void e()
// // // {
// // //     for (int i = 0; i < 5; i++)
// // //     {
// // //         for (int j = 0; j < i; j++)
// // //             cout << " ";
// // //         for (int j = 0; j < 5 - i; j++)
// // //         {
// // //             cout << "*";
// // //         }
// // //         cout << endl;
// // //     }
// // // }
// // // void f()
// // // {
// // //     for (int i = 0; i < 5; i++)
// // //     {
// // //         for (int j = i + 1; j > 0; j--)
// // //         {
// // //             cout << j;
// // //         }
// // //         cout << endl;
// // //     }
// // // }
// // // void g()
// // // {
// // // }
// // // int main()
// // // {
// // //     c();
// // //     return 0;
// // // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {

// //     // for (int i = 0; i < 10; i++)
// //     // {
// //     //     for (int j = 0; j < i; j++)
// //     //     {
// //     //         cout << char('A' + 9 - i + j);
// //     //     }
// //     //     cout << endl;
// //     // }
// //     int n = 10;
// //     for (int i = 0; i < 5; i++)
// //     {
// //         for (int j = 0; j < 5 - i; j++)
// //         {
// //             cout << " ";
// //         }
// //         for (int j = 0; j < 2 * i - 1; j++)
// //         {
// //             cout << "*";
// //         }
// //         cout << endl;
// //         ;
// //     }
// //     for (int i = 0; i < 5; i++)
// //     {
// //         for (int j = 0; j < i; j++)
// //         {
// //             cout << " ";
// //         }
// //         for (int j = 0; j < 2 * 5 - 2 * i - 1; j++)
// //         {
// //             cout << "*";
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
//         for (int j = 0; j <= i; j++)
//         {
//             cout << i + j + 1;
//         }
//         for (int j = (i + 1) * 2 - 2; j > i; j--)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
for(int i=0;i<10;i++){
    for(int j=0;j<10-i;j++){
        cout<<" ";
    }
    for(int j=0;j<2*i-1;j++){
        cout<<"*";
    }
    cout<endl;
}
for(int i=0;i<10;i++){
    for(int j=0;j<2*i)
}
return 0;
}

