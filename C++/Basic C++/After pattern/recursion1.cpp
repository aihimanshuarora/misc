// // #include <bits/stdc++.h>
// // using namespace std;
// // int fact(int n)
// // {
// //     if (n < 2)
// //         return 1;
// //     return n * fact(n - 1);
// // }
// // int fib(int n)
// // {
// //     if (n == 0 || n == 1)
// //     {
// //         return n;
// //     }
// //     return fib(n - 1) + fib(n - 2);
// // }
// // bool isSorted(int *arr, int n)
// // {
// //     if (n < 2)
// //         return 1;
// //     bool a = isSorted(arr + 1, n - 1);
// //     if (a == 0)
// //         return 0;
// //     if (arr[0] > arr[1])
// //         return 0;
// //     return 1;
// // }
// // int le(string s)
// // {
// //     if (s[0] == '\0')
// //     {
// //         return 0;
// //     }
// //     return 1 + le(s.substr(1));
// // }
// // int main()
// // {
// //     // cout << fib(7) << endl;
// //     int arr[] = {1, 2, 33, 4};
// //     int n = 4;
// //     // cout << isSorted(arr, n) << endl;
// //     cout << le("himanshu");

// //     return 0;
// // }
// __cpp_capture_star_this
#include <bits/stdc++.h>
using namespace std;
void ok(char s[], int n)
{
    if (s[0] == '\0')
        return;
    if (s[0] == 'x')
    {
        for (int i = 0; i < n; i++)
        {
            s[i] = s[i + 1];
        }
        s[n - 1] = '\0';
        // n--;
        ok(s, n);
    }
    else
        ok(s + 1, n);
}
int main()
{
    char s[] = "himanxshuxxhimanshuxxxhixxx";
    int n = sizeof(s) / sizeof(char);
    ok(s, n);
    cout << s;
    return 0;
}
