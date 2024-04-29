#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int m = 2;
    int j = 4;
    while (m < j)
    {
        swap(arr[m++], arr[j--]);
    }
    for (int c : arr)
        cout << c;
    return 0;
}
