#include <bits/stdc++.h>
using namespace std;
int maain()
{
    int arr[] = {1, 2, 3, 4};
    int k = 2;
    int s = 2, j = 4 - 1;
    while (s < j)
    {
        swap(arr[s++], arr[j--]);
    }
    for (int c : arr)
        cout << c;
    return 0;
}
int main()
{
    int arr[] = {1, 2, 3};
    // sort;
    int n = 3;
    int lsum[3] = {0};
    for (int i = 1; i < 3; i++)
    {
        lsum[i] = lsum[i - 1] + arr[i - 1];
    }
    int rsum[3] = {0};

    for (int i = n - 2; i >= 0; i--)
    {
        lsum[i] = lsum[i + 1] + arr[i + 1];
    }
    for (int sum = 0; sum < 3; sum++)
    {
        cout << lsum[sum] + rsum[sum] - (n - sum) * arr[sum];
    }
}
