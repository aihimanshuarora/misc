#include <bits/stdc++.h>
using namespace std;
void mergesort(int *arr, int s, int m, int n)
{
    int i = s, j = m + 1;
    int temp[n - s + 1] = {0};
    int k = 0;
    while (i <= m && j <= n)
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
    while (j <= n)
    {

        temp[k++] = arr[j++];
    }
    for (int i = 0; i < k; i++)
    {
        arr[i + s] = temp[i];
    }
    return;
}
void merge(int arr[], int s, int n)
{
    if (s < n)
    {
        // return;
        cout << "ok";
        int mid = (s + n) / 2;
        merge(arr, s, mid);
        merge(arr, mid + 1, n);
        mergesort(arr, s, mid, n);
    }
}
int partition(int arr[], int s, int e)
{
    int i = s, j = e;
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
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[s], arr[j]);
    return j;
}
void quick(int arr[], int s, int n)
{
    if (s < n)
    {
        int j = partition(arr, s, n);
        quick(arr, s, j - 1);
        quick(arr, j + 1, n);
    }
}
int main()
{
    int arr[] = {3, 4, 2, 1};
    int n = 4;
    quick(arr, 0, 3);
    for (int c : arr)
        cout << c << endl;
    return 0;
}
