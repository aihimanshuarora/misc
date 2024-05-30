// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;
// // // // // int ls(int arr[], int s, int k)
// // // // // {
// // // // //     for (int i = 0; i < s; i++)
// // // // //     {
// // // // //         if (arr[i] == k)
// // // // //         {
// // // // //             return i;
// // // // //         }
// // // // //     }
// // // // //     return -1;
// // // // // }
// // // // // int bs(int arr[], int s, int e, int k)
// // // // // {
// // // // //     int i = s, j = e - 1;
// // // // //     while (i < j)
// // // // //     {
// // // // //         int mid = (i + j) / 2;
// // // // //         if (arr[mid] == k)
// // // // //         {
// // // // //             return mid;
// // // // //         }
// // // // //         else if (arr[mid] < k)
// // // // //         {
// // // // //             i = mid + 1;
// // // // //         }
// // // // //         else
// // // // //         {
// // // // //             j = mid - 1;
// // // // //         }
// // // // //     }
// // // // //     return -1;
// // // // // }
// // // // // void bss(int arr[], int n)
// // // // // {
// // // // //     for (int i = 0; i < n - 1; i++)
// // // // //     {
// // // // //         for (int j = 0; j < n - i - 1; j++)
// // // // //         {
// // // // //             if (arr[j] > arr[j + 1])
// // // // //             {
// // // // //                 swap(arr[j], arr[j + 1]);
// // // // //             }
// // // // //         }
// // // // //     }
// // // // // }
// // // // // void ss(int arr[], int n)
// // // // // {
// // // // //     for (int i = 0; i < n - 1; i++)
// // // // //     {
// // // // //         int mini = i, min = arr[i];
// // // // //         for (int j = i + 1; j < n; j++)
// // // // //         {
// // // // //             if (arr[j] < min)
// // // // //             {
// // // // //                 mini = j;
// // // // //                 min = arr[j];
// // // // //             }
// // // // //         }
// // // // //         swap(arr[i], arr[mini]);
// // // // //     }
// // // // // }
// // // // // void is(int arr[], int n)
// // // // // {
// // // // //     for (int i = 1; i < n; i++)
// // // // //     {
// // // // //         int j = i - 1;
// // // // //         int temp = arr[i];
// // // // //         for (j; j >= 0; j--)
// // // // //         {
// // // // //             if (arr[j] > temp)
// // // // //             {
// // // // //                 arr[j + 1] = arr[j];
// // // // //             }
// // // // //             else
// // // // //             {
// // // // //                 break;
// // // // //             }
// // // // //         }
// // // // //         arr[j + 1] = temp;
// // // // //     }
// // // // // }
// // // // // int main()
// // // // // {
// // // // //     int arr[] = {1, 112, 23, 4, 5};
// // // // //     is(arr, 5);
// // // // //     for (int c : arr)
// // // // //         cout << c << " ";
// // // // //     return 0;
// // // // // }

// // // // // video 7
// // // // //  /decimal to __cpp_binary_literals
// // // // #include <bits/stdc++.h>
// // // // using namespace std;
// // // // int *d2b(int num)
// // // // {
// // // //     int *arr = new int[32];
// // // //     for (int i = 0; i < 32; i++)
// // // //     {
// // // //         arr[i] = 0;
// // // //     }
// // // //     int i = 0;
// // // //     while (num > 0)
// // // //     {
// // // //         arr[i++] = num % 2;
// // // //         num /= 2;
// // // //     }
// // // //     return arr;
// // // // }
// // // // int power(int a, int b)
// // // // {
// // // //     if (b == 0)
// // // //         return 1;
// // // //     if (b == 1)
// // // //         return a;
// // // //     if (b % 2 == 0)
// // // //     {
// // // //         return power(a, b / 2) * power(a, b / 2);
// // // //     }
// // // //     return power(a, b / 2) * power(a, b / 2) * a;
// // // // }
// // // // int b2d(int *arr)
// // // // {
// // // //     int num = 0;
// // // //     for (int i = 0; i < 32; i++)
// // // //     {
// // // //         num = num + power(2, i) * arr[i];
// // // //     }
// // // //     return num;
// // // // }
// // // // int main()
// // // // {
// // // //     int a[32] = {0};
// // // //     cout << b2d(d2b(12));
// // // //     // cout<<power(2,4);
// // // //     return 0;
// // // // }

// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // void prefixsum(int arr[], int n, int *psum)
// // // {
// // //     psum[0] = arr[0];
// // //     for (int i = 1; i < n; i++)
// // //     {
// // //         psum[i] = psum[i - 1] + arr[i];
// // //     }
// // // }
// // // void postsum(int arr[], int n, int *psum)
// // // {
// // //     psum[n - 1] = arr[n - 1];
// // //     for (int i = n - 2; i >= 0; i--)
// // //     {
// // //         psum[i] = psum[i + 1] + arr[i];
// // //     }
// // // }
// // // int recsol(int arr[], int n)
// // // {
// // //     sort(arr, arr + n);
// // //     int psum[n] = {0};
// // //     int posum[n] = {0};
// // //     prefixsum(arr, n, psum);
// // //     postsum(arr, n, posum);
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         psum[i] = psum[i] + posum[i] - (n - i + 1) * arr[i];
// // //     }
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         cout << psum[i] << " ";
// // //     }
// // //     return -1;
// // // }
// // // int main()
// // // {
// // //     // tower problem
// // //     int arr[] = {1, 30, 2};
// // //     int n = 3;
// // //     cout << recsol(arr, n);
// // //     return 0;
// // // }
// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     // char abc[2];
// //     // // cin >> abc;
// //     // // cout << abc;
// //     // cin.getline(abc, 20, 'p');
// //     // cout << abc;
// //     string ss = "himanshu";
// //     // int i = 0, s = ss.length() - 1;
// //     // while (i < s)
// //     // {
// //     //     swap(ss[i++], ss[s--]);
// //     // }
// //     for (int i = 0; i < ss.length(); i++)
// //     {
// //         for (int j = 0; j <= i; j++)
// //         {
// //             cout << ss[j];
// //         }
// //         cout << endl;
// //     }
// //     // cout<<ss;
// //     return 0;
// // }

// // video 8;
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // int arr[] = {1, 2, 4, 3, 5};
//     // int n = 5, k = 2;int j=n-1;
//     // //ek declare kr rhe ho to dusre waloko initilise ra prega
//     // for ( k; k < j; k++, j--)
//     // {
//     //     swap(arr[k], arr[j]);
//     // }
//     // for (int c : arr)
//     //     cout << c;
//     int **arr = new int *[3];
//     for (int i = 0; i < 3; i++)
//     {
//         arr[i] = new int[3];
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     for(int i=0;i<3;i++){
//         delete []arr[i];
//     }
//     delete []arr;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[3];
for(int i=0;i<6;i++){
    cin>>arr[i];
}
for(int i=0;i<6;i++){
    cout<<arr[i];
}
PS C:\Users\Tech User\Desktop\SAP_LAB_Practice> cd "c:\Users\Tech User\Desktop\SAP_LAB_Practice\Coding Ninjas\" ; if ($?) { g++ Video6to11.cpp -o Video6to11 } ; if ($?) { .\Video6to11 }
1 2 3 4 5 6
123364200976
return 0;
}
