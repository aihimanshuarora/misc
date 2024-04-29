#include <bits/stdc++.h>
using namespace std;
void a()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int m = 2;
    for (int i = m, j = n - 1; i < j; i++, j--)
    {
        swap(arr[i], arr[j]);
    }
    for (int c : arr)
        cout << c;
    sort(arr, arr + 4);
    cout << endl;
    for (int c : arr)
        cout << c;
}
void b()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int o, e;
    o = e = 0;
    for (int i = 0; i < 8; i++)
    {
        if (i % 2 == 0)
            o++;
        else
            e++;
    }
    if (o == e)
        cout << "Ok";
    else
        cout << "Not";
}
void c()
{
    int arr[] = {1, 2, 3, 4, 4};
    int n = 5;
    if (n % 2 == 0)
    {
        cout << n / 2;
    }
    else
        cout << (n / 2) + 1;
}
void d()
{
    int arr[] = {0, 2, 3, 4, 1, 5};
    int maxe = 0;
    for (int i = 0; i < 6; i++)
    {
        +
        maxe = max(maxe, arr[i] - i);
    }
    for (int i = 5; i >= 0; i--)
    {
        arr[i + maxe] = arr[i];
    }
    for (int i = 0; i < maxe; i++)
    {
        arr[i] = 0;
    }
    for (int c : arr)
        cout << c;
}
int main()
{
    d();
    return 0;
}
