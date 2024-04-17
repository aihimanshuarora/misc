#include <bits/stdc++.h>
using namespace std;
long long int fib(int n, long long int *arr)
{
    if (n == 0 || n == 1)
        return n;
    if (arr[n] > 0)
        return arr[n];
    arr[n] = fib(n - 1, arr) + fib(n - 2, arr);
    return arr[n];
}
// 0    1 1 2 3 5 8
long long int fibb(int n, long long int *arr)
{
    arr[0] = 0, arr[1] = 1;
    for (int i = 2; i <= n; i++)
        arr[i] = arr[i - 1] + arr[i - 2];
    return arr[n];
}
int minstept(int n, int *arr)
{
    if (n == 1)
    {
        // arr[n] = 0;
        return 0;
    }
    if (arr[n] > 0)
    {
        return arr[n];
    }

    int ans = 1 + minstept(n - 1, arr);
    if (n % 2 == 0)
    {
        ans = min(ans, 1 + minstept(n / 2, arr));
    }

    if (n % 3 == 0)
        ans = min(ans, 1 + minstept(n / 3, arr));
    arr[n] = ans;
    return arr[n];
    // return ans;
}
int staircase(int n, int *arr)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    if (n == 3)
    {
        return 4;
    }
    if (arr[n] > 0)
    {
        return arr[n];
    }
    arr[n] = staircase(n - 1, arr) + staircase(n - 2, arr) + staircase(n - 3, arr);
    return arr[n];
}
int main()
{
    int arr[100] = {0};
    cout << staircase(5, arr);
    // long long int *arr = new long long int[100];
    // for (int i = 0; i < 100; i++)
    // {
    //     arr[i] = 0;
    // }
    // cout << fibb(30, arr);
    return 0;
}