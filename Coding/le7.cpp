// #include <bits/stdc++.h>
// using namespace std;
// void de2bin(int n)
// {
//     int arr[32] = {0};
//     int i = 0;
//     while (n > 0)
//     {
//         if (n % 2 == 1)
//         {
//             arr[i] = 1;
//         }
//         i++;
//         n = n / 2;
//     }
//     int sum = 0;
//     for (int i = 0; i < 32; i++)
//     {
//         sum = sum + pow(2, i) * arr[i];
//     }
//     cout << sum;
// }
// int main()
// {
//     de2bin(10);
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[100] = "himanshu";
    // cout << a[1];
    for (int i = 0; i < 4; i++)
    {
        swap(a[i], a[8 - i - 1]);
    }
    cout << a;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << a[j] << " ";
        }
        cout << endl;
    }
    return 0;
}