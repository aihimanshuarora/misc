#include <iostream>
using namespace std;
void firstx()
{

    int x = 10;
    int c = 0;
    int i = 0;
    while (c < 10)
    {
        if ((3 * i + 2) % 4 == 0)
        {
            i++;
            continue;
        }
        cout << (3 * i) + 2 << endl;
        c++;
        i++;
    }
}
void swap()
{
    int a = 4, b = 1441;
    a = a + b - (b = a);
    cout << a << b;
}
void rev()
{
    int n = 123;
    int r = 0;
    while (n > 0)
    {
        r = r * 10 + n % 10;
        n /= 10;
    }
    cout << r;
}
void revArr(int *arr, int n)
{
    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        swap(arr[i++], arr[j--]);
    }
    for (int c = 0; c < n; c++)
    {
        cout << arr[c] << endl;
    }
}
int main()
{
    // int arr[] = {1, 2, 3};
    // revArr(arr, 3);
    int arr[10] = {0};
    int m = 0, j = 9;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            arr[m++] = i;
        else
            arr[j--] = i;
    }
    for (int c : arr)
        cout << c;

    return 0;
}
