// #include <bits/stdc++.h>
// using namespace std;
// int fib(int n, int arr[])
// {
//     if (n == 0 || n == 1)
//     {
//         // arr[n] = n;
//         return n;
//     }
//     if (arr[n] > 0)
//     {
//         return arr[n];
//     }
//     arr[n] = fib(n - 1, arr) + fib(n - 2, arr);
//     return arr[n];
// }
// int fibs(int arr[], int n)
// {
//     arr[0] = 0;
//     arr[1] = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         arr[i] = arr[i - 1] + arr[i - 2];
//     }
//     return arr[n];
// }
// int main()
// {
//     int arr[5] = {0};
//     cout << fibs(arr, 4);

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int minStepsToOne(int n, int arr[])
{
    if (n == 1)
    {
        return 0;
    }
    if (arr[n] > 0)
        return arr[n];
    int step = 1 + minStepsToOne(n - 1, arr);
    if (n % 2 == 0)
    {
        step = min(step, 1 + minStepsToOne(n / 2, arr));
    }
    if (n % 3 == 0)
    {
        step = min(step, 1 + minStepsToOne(n / 3, arr));
    }
    arr[n] = step;
    return step;
}
int main()
{
    int arr[11] = {0};
    cout << minStepsToOne(10, arr);

    return 0;
}
