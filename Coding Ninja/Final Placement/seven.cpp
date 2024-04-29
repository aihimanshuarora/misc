// #include <bits/stdc++.h>
// using namespace std;
// void dec2bin(int n)
// {
//     int arr[32] = {0};
//     int i = 0;
//     while (n > 0)
//     {
//         arr[i++] = n % 2;
//         n /= 2;
//     }
//     int sum = 0;
//     for (int i = 0; i < 32; i++)
//     {
//         sum = sum + pow(2, i) * arr[i];
//     }
//     cout << sum;
// }
// void tower(int arr[], int n)
// {
//     int ssum[n] = {0};
//     ssum[0] = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         ssum[i] = ssum[i - 1] + arr[i];
//     }
//     int psum[n] = {0};
//     psum[n - 1] = arr[n - 1];
//     for (int i = n - 2; i >= 0; i--)
//     {
//         psum[i] = psum[i + 1] + arr[i];
//     }
//     for (int c : ssum)
//     {
//         cout << c << " ";
//     }
//     cout << endl;
//     for (int c : psum)
//     {
//         cout << c << " ";
//     }
//     cout << endl;
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = ssum[i] + psum[i] - (arr[i] * (n - i + 1));
//     }
//     for (int c = 0; c < n; c++)
//     {
//         cout << arr[c];
//     }
// }
// int main()
// {
//     // dec2bin(10);
//     int arr[] = {4, 3, 6};
//     int n = 3;
//     for (int i = 0; i < 2; i++)
//     {
//         int min = arr[i], mini = i;
//         for (int j = i; j < 3; j++)
//         {
//             if (arr[j] < min)
//             {
//                 min = arr[j];
//                 mini = j;
//             }
//         }
//         swap(arr[mini], arr[i]);
//     }
//     tower(arr, n);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "i love you gunna";
    for (int i = 0; s[i] != '\0'; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << s[j];
        }
        cout << endl;
    }
    return 0;
}
