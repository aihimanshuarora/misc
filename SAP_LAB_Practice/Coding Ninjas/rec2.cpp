#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int s, int m, int e)
{
    int i = s, j = m + 1;
    int temp[e - s + 1] = {0};
    int k = 0;
    while (i <= m && j <= e)
    {
        if (arr[i] > arr[j])
        {
            temp[k++] = arr[j++];
        }
        else
        {
            temp[k++] = arr[i++];
        }
    }
    while (i <= m)
    {

        temp[k++] = arr[i++];
    }
    while (j <= e)
    {

        temp[k++] = arr[j++];
    }
    for (int i = 0; i < k; i++)
    {
        arr[i + s] = temp[i];
    }
}
void mergesort(int arr[], int s, int e)
{
    if (s >= e)
        return;
    int mid = (s + e) / 2;
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
    // cout<<"ok";
    merge(arr, s, mid, e);
}
int part(int arr[], int s, int e)
{
    // cout << "ok";
    int i = 1 + s, j = e;
    while (i < j)
    {
        while (arr[i] < arr[s])
        {
            i++;
        }
        while (arr[j] > arr[s])
        {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[j], arr[s]);
    return j;
}
void qs(int *arr, int s, int e)
{
    if (s >= e)
        return;
    int j = part(arr, s, e);
    qs(arr, s, j - 1);
    qs(arr, j - 1, s);
}
int main()
{
    int arr[] = {4, 3, 1, 2};
    int n = 3;
    // mergesort(arr, 0, n);
    qs(arr, 0, n);
    for (int i : arr)
        cout << i;
    return 0;
}
