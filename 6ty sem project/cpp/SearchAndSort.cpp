// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // int arr[] = {1, 2, 3, 4};
//     // int n = 4;
//     // int key = 2;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     if (arr[i] == key)
//     //     {
//     //         cout << i;
//     //         break;
//     //     }
//     // }

//     int arr[] = {1, 2, 3, 4};
//     int n = 4;
//     int key=2;
//     int i = 0, j = n - 1;
//     while (i <= j)
//     {
//         int mid = (i + j) / 2;
//         if (key == arr[mid])
//         {
//             cout << mid;break;
//         }
//         else if (arr[mid] < key)
//         {
//             i = mid + 1;
//         }
//         else
//             j = mid - 1;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3, 2, 4, 1};
    int n = 4;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     int min = arr[i], mini = i;
    //     for (int j = i; j < n; j++)
    //     {
    //         if (arr[j] < min)
    //         {
    //             mini = j;
    //             min = arr[j];
    //         }
    //     }
    //     swap(arr[mini], arr[i]);
    // }
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < n - 1; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             swap(arr[j], arr[j + 1]);
    //         }
    //     }
    // }
    for (int i = 1; i < n ; i++)
    {
        int temp = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] < temp)
            {
                break;
            }
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = temp;
    }
    for (int c : arr)
    {
        cout << c << endl;
    }
    return 0;
}
