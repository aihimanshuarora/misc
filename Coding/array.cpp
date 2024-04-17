// #include <bits/stdc++.h>
// using namespace std;
// int max(int arr[], int n)
// {
//     int maxs = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         maxs = max(maxs, arr[i]);
//     }
//     return maxs;
// }
// void reva(int arr[],int n){
//     for(int i=0,j=n-1;i<j;i++,j--){
//         swap(arr[i],arr[j]);
//     }
// }
// int main()
// {
//     // int a, b;
//     // a = 3, b = 4;
//     // a = a + b - (b = a);
//     // cout << a << endl
//     //      << b << endl;
//     // int num = 123;
//     // int rev = 0;
//     // while (num > 0)
//     // {
//     //     rev = rev * 10 + num % 10;
//     //     num = num / 10;
//     // }
//     // cout << rev << endl;

//     int arr[] = {1, 2, 3, 4};
//     reva(arr,4);

//     // cout << max(arr, sizeof(arr) / sizeof(int));
//     for(int a:arr)cout<<a<<endl;
//     // cout<<arr<<endl<<&arr<<endl<<&arr[0]<<endl<<*arr<<endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m = 0, k = 9;
    int arr[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            arr[m++] = i;
        }
        else
            arr[k--] = i;
    }
    for(int c:arr)cout<<c;
    return 0;
}