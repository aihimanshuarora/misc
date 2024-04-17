// #include <bits/stdc++.h>
// using namespace std;
// void merge(int arr[], int ss, int m, int e)
// {
//     int i = m + 1;
//     int s=ss;
//     int temp[e - s + 1] = {0};
//     int k = 0;
//     while (s <= m && i <= e)
//     {
//         if (arr[s] < arr[i])
//         {
//             temp[k++] = arr[s++];
//         }
//         else
//         {
//             temp[k++] = arr[i++];
//         }
//     }
//     while (s <= m)
//     {

//         temp[k++] = arr[s++];
//     }
//     while (i <= e)
//     {

//         temp[k++] = arr[i++];
//     }
//     for (int i = 0; i < k; i++)
//     {
//         arr[ss + i] = temp[i];
//     }
//     return;
// }
// void mergesort(int arr[], int start, int end)
// {
//     if (start >= end)
//         return;
//     int mid = (start + end) / 2;
//     mergesort(arr, start, mid);
//     mergesort(arr, mid + 1, end);
//     merge(arr, start, mid, end);
// }
// int main()
// {
//     int arr[] = {1, 4, 3, 2};
//     int n = 4;
//     mergesort(arr, 0, n-1);
//     cout<<arr[2];
//     for (int c : arr)
//     {
//         cout << c;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int i = start;
    int j = end;
    while (i < j)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
            // i++;j--;
        }
    }
    swap(arr[j], arr[start]);
    return j;
}
void quicksort(int arr[], int start, int end)
{
    if (start < end)
    {
        int j = partition(arr, start, end);
        quicksort(arr, start, j - 1);
        quicksort(arr, j + 1, end);
    }
}
int main()
{
    int arr[] = {4, 3, 1, 2};
    int n = 4;
    quicksort(arr, 0, n - 1);
    for (int c : arr)
    {
        cout << c << endl;
    }
    return 0;
}