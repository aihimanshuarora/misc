// #include <bits/stdc++.h>
// using namespace std;
// void sort(int arr[], int s, int m, int e)
// {
//     int i = s, j = m + 1;
//     int temp[e - s + 1] = {0};
//     int k = 0;
//     while (i <= m && j <= e)
//     {
//         if (arr[i] > arr[j])
//         {
//             temp[k++] = arr[j++];
//         }
//         else
//         {
//             temp[k++] = arr[i++];
//         }
//     }
//     while (i <= m)
//     {

//         temp[k++] = arr[i++];
//     }
//     while (j <= e)
//     {

//         temp[k++] = arr[j++];
//     }
//     for (int i = 0; i < k; i++)
//     {
//         arr[i + s] = temp[i];
//     }
//     return;
// }
// void merge(int arr[], int s, int e)
// {
//     if (s >= e)
//         return;
//     int mid = (s + e) / 2;
//     merge(arr, s, mid);
//     merge(arr, mid + 1, e);
//     sort(arr, s, mid, e);
// }
// int main()
// {
//     int arr[] = {1, 23, 2, 4};
//     int n = 4;
//     merge(arr, 0, n);
//     for (int c : arr)
//         cout << c << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int s, int e)
{
    int i = s, j = e;
    int pivot = arr[s];
    while (i < j)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
            /* code */
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
        else
        {
            swap(arr[s], arr[j]);
        }
    }
    return j;
}
void quick(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int j = partition(arr, s, e);
    quick(arr, s, j - 1);
    quick(arr, j + 1, e);
}
int main()
{
    int arr[] = {1, 23, 2, 4};
    int n = 4;
    quick(arr, 0, n);
    for (int c : arr)
        cout << c << endl;
    {

        return 0;
    }
}