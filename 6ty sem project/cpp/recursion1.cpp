#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if (n == 1)
    {
        return n;
    }
    return n * +fact(n - 1);
}
int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}
bool isSorted(int arr[], int n)
{
    if (n <= 1)
    {
        return 1;
    }
    if (arr[0] > arr[1])
        return 0;
    return isSorted(arr + 1, n - 1);
}
int mains()
{
    int arr[] = {1, 3, 222, 422};
    int n = 4;
    cout << isSorted(arr, n);
    return 0;
}
int len(string s)
{
    if (s[0] == '\0')
    {
        return 0;
    }
    return 1 + len(s.substr(1));
    // string s = "Himanshu";
    // cout << len(s);
}
void removeX(char arr[])
{
    if (arr[0] == '\0')
    {
        return;
    }
    if (arr[0] == 'x')
    {
        for (int i = 0; arr[i] != '\0'; i++)
        {
            if (arr[1] == 'x')
            {
                arr[i] = arr[i + 2];
            }
            else
                arr[i] = arr[i + 1];
        }
        // remove(arr);
    }
    // else
    removeX(arr + 1);
}
int main()
{
    char arr[] = "hixxmanshuxx";
    removeX(arr);
    cout << arr;
    return 0;
}
