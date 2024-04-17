#include <bits/stdc++.h>
using namespace std;
void rev()
{
    int arr[] = {1, 2, 3, 4, 44};
    int m = 0;
    int j = 4;
    for (int i = m; i < j; i++)
    {
        swap(arr[i], arr[j--]);
    }
    for (int i : arr)
    {
        cout << i << endl;
    }
}
int main()
{
    rev();
    return 0;
}