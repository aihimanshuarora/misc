// #include <bits/stdc++.h>
// using namespace std;
// void merge(int arr[], int s, int m, int e)
// {
//     int temp[e - s + 1] = {0};
//     int k = 0;
//     int i = s, j = m + 1;
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
//         arr[s + i] = temp[i];
//     }
// }
// void mergesort(int arr[], int s, int e)
// {
//     if (s >= e)
//         return;
//     int mid = (s + e) / 2;
//     mergesort(arr, s, mid);
//     mergesort(arr, mid + 1, e);
//     merge(arr, s, mid, e);
// }
// int partition(int arr[], int s, int e)
// {
//     int i = s + 1, j = e;
//     while (i <= j)
//     {
//         while (arr[i] < arr[s])
//         {
//             i++;
//         }
//         while (arr[j] > arr[s])
//         {
//             j--;
//         }
//         if (i < j)
//         {
//             swap(arr[i], arr[j]);
//         }
//         else
//             swap(arr[s], arr[j]);
//     }
//     return j;
// }
// void quicksort(int arr[], int s, int e)
// {
//     if (s < e)
//     {
//         int j = partition(arr, s, e);
//         quicksort(arr, s, j - 1);
//         quicksort(arr, j + 1, e);
//     }
// }
// int main()
// {
//     int arr[] = {4, 3, 2, 5, 1};
//     int n = 5;
//     // mergesort(arr, 0, 5);
//     quicksort(arr, 0, 5);
//     for (int c : arr)
//         cout << c << " ";
//     return 0;
// }







//advanced
#include<bits/stdc++.h>
using namespace std;
int seq(string s,string *op){
    6+9+

}
int main()
{
string s="himanshu";
string op="";
int k=seq(s,op);
print(op);
return 0;
}

