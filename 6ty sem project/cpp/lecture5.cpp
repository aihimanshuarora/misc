// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int c;
//     cin >> c;
//     int i = 0;
//     while (c--)
//     {
//         i++;

//         if ((3 * i + 2) % 4 == 0)
//         {
//             continue;
//         }
//         cout << 3 * i + 2;
//         c--;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n] = {0};
    int m = n - 1, e = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            arr[m--] = i;
        }
        else
            arr[e++] = i;
    }
for(int c:arr)cout<<c;
    // int arr[] = {1, 2, 3, 4};
    // int n = sizeof(arr) / sizeof(int);
    // for (int i = 0, j = n - 1; i < j; i++, j--)
    // {
    //     swap(arr[i], arr[j]);
    // }
    // for (int c : arr)
    //     cout << c;
    // int a, b;
    // a = 4;
    // b = 5;
    // a = a + b - (b = a);
    // cout << a << b;
    // int n;
    // cin >> n;
    // int r = 0;
    // while (n > 0)
    // {
    //     r = r * 10 + n % 10;
    //     n /= 10;
    // }
    // cout << r;
    return 0;
}
