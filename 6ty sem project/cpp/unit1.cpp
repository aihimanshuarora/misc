// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {

// // //     // int a, b;
// // //     // cin >> a >> b;
// // //     // cout << a + b << endl;
// // //     // int p, r, t;
// // //     // cin >> p >> r >> t;
// // //     // cout << (p * r * t) / 100 << endl;
// // //     // int sp, cp;
// // //     // ;
// // //     // cin >> sp >> cp;
// // //     // cout<<sp-cp<<" is the profit"<<endl;
// // //     // cout<<(sp-cp)/cp<<"is th %"<<endl;
// // //     // int num;
// // //     // cin >> num;
// // //     // if (num % 2 == 0)
// // //     // {
// // //     //     cout << "Even";
// // //     // }
// // //     // else
// // //     // {
// // //     //     cout << "Odd";
// // //     // }
// // //     // cout << endl;
// // //     // int a, b;
// // //     // cin >> a >> b;
// // //     // if (a > b)
// // //     // {
// // //     //     cout << a;
// // //     // }
// // //     // else if (a < b)
// // //     // {
// // //     //     cout << b;
// // //     // }
// // //     // else
// // //     // {
// // //     //     cout << "Equal";
// // //     // }

// // //     int sal;
// // //     cin >> sal;
// // //     if (sal < 25000)
// // //     {
// // //         cout << "0";
// // //     }
// // //     else if (sal < 50000)
// // //     {
// // //         cout << " 6 ";
// // //     }
// // //     else
// // //         cout << "12";
// // //     return 0;
// // // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     for (int i = 0; i < 10; i++)
// //     {
// //         cout << i;
// //     }
// //     int i = 0;
// //     while (i < 10)
// //     {
// //         cout << i;
// //         i++;
// //     }
// //     int j = 0;
// //     do
// //     {
// //         cout << j;
// //         j++;
// //     } while (j < 0);
// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // int n;
//     // cin >> n;
//     // int sum = 0, pro = 1;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout << i;
//     //     sum += i;
//     //     pro = pro * (i + 1);
//     // }
//     // cout << sum << endl
//     //      << pro;

//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         bool ok = 1;
//         for (int j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 ok = 0;
//                 break;
//             }
//         }
//         if (ok)
//             cout << i;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nl;
    cin >> nl;
    int a = 0, b = 1;
    int sum = a + b;
    cout << a << b << sum;
    for (int i = 2; i <= nl; i++)
    {
        a = b;
        b = sum;
        sum = a + b;
        cout << sum;
    }
    return 0;
}
