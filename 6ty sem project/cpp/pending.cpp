
#include <bits/stdc++.h>
using namespace std;
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
        // else
        // {
        // }
    }
    swap(arr[i], arr[j]);
    return j;
}
void quicksort(int arr[], int s, int e)
{
    if (s >= e)
        return;
    int j = partition(arr, s, e);
    quicksort(arr, s, j - 1);
    quicksort(arr, j + 1, e);
}
int main()
{

    int arr[] = {1, 3, 2};
    int n = 3;
    quicksort(arr, 0, n - 1);
    for (int c : arr)
        cout << c;
    return 0;
}
