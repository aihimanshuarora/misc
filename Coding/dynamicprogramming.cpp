#include <bits/stdc++.h>
using namespace std;
int fact(int n, int arr[])
{
    // if (n == 1)
    // {

    //     return 1;
    // }
    // if (arr[n] > 0)
    //     return arr[n];
    // arr[n] = n * fact(n - 1, arr);
    // return arr[n];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        arr[i] = i * arr[i - 1];
    }
    return arr[n];
}
int minStepsToOne(int starts, int arr[])
{
    if (starts == 1)
    {
        return 1;
    }
    if (starts == 2)
    {
        return 2;
    }
    if (starts == 3)
    {
        return 4;
    }
    if (arr[starts] > 0)
    {
        return arr[starts];
    }
    arr[starts] = minStepsToOne(starts - 1, arr) + minStepsToOne(starts - 2, arr) + minStepsToOne(starts - 3, arr);
    return arr[starts];
}
int staircase(int n, int arr[])
{
    if (n == 1)
    {
        return 0;
    }
    if (arr[n] > 0)
        return arr[n];
    int asn = 1 + staircase(n - 1, arr);
    if (n % 2 == 0)
    {
        asn = min(asn, 1 + staircase(n / 2, arr));
    }
    if (n % 3 == 0)
    {
        asn = min(asn, 1 + staircase(n / 3, arr));
    }
    arr[n] = asn;
    return asn;
}
int main()
{
    int arr[100] = {0};

    cout << staircase(10, arr);
    return 0;
}