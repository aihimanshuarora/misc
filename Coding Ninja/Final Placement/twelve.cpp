// #include <bits/stdc++.h>
// using namespace std;
// int fact(int n)
// {
//     if (n < 2)
//     {
//         return n;
//     }
//     return n * fact(n - 1);
// }
// int fib(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return n;
//     }
//     return fib(n - 1) + fib(n - 2);
// }
// bool isSorted(int arr[], int s)
// {
//     if (s < 2)
//         return 1;
//     if (arr[0] > arr[1])
//         return 0;
//     return isSorted(arr + 1, s - 1);
// }
// int le(string s)
// {
//     if (s[0] == '\0')
//         return 0;
//     return 1 + le(s.substr(1));
// }
// int main()
// {
//     int arr[] = {1, 25, 3, 4};
//     // cout<<isSorted(arr,4);
//     cout << le("himanshu");
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
void remove(char arr[], int l)
{
    if (l == 0)
        return;
    if (arr[0] == 'x')
    {
        for (int i = 0; i < l; i++)
        {
            arr[i] = arr[i + 1];
        }
        remove(arr, l);
    }
    else
    {
        remove(arr + 1, l - 1);
    }
}
int main()
{
    char ar[] = "himanxshxxhux";
    remove(ar, sizeof(ar) / sizeof(char));
    cout << ar;
    return 0;
}
