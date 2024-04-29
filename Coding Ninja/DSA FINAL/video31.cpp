// // // // #include <bits/stdc++.h>
// // // // using namespace std;
// // // // // int fact(int n, int *arr)
// // // // // {
// // // // //     if (n == 1)
// // // // //     {
// // // // //         return n;
// // // // //     }
// // // // //     if (arr[n] > 0)
// // // // //     {
// // // // //         return arr[n];
// // // // //     }
// // // // //     return n * fact(n - 1, arr);
// // // // // }
// // // // int fact(int n)
// // // // {
// // // //     int arr[10] = {0};
// // // //     arr[0] = 1;
// // // //     for (int i = 1; i <= n; i++)
// // // //     {
// // // //         arr[i] = arr[i - 1] * i;
// // // //     }
// // // //     return arr[n];
// // // // }
// // // // int main()
// // // // {
// // // //     int arr[10] = {0};
// // // //     cout << fact(5);

// // // //     return 0;
// // // // }

// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // // int fib(int n, int arr[])
// // // // {
// // // //     if (n == 0 || n == 1)
// // // //     {
// // // //         return n;
// // // //     }
// // // //     if (arr[n] > 0)
// // // //     {
// // // //         return arr[n];
// // // //     }
// // // //     arr[n] = fib(n - 1, arr) + fib(n - 2, arr);
// // // //     return arr[n];
// // // // }
// // // int fib(int n){
// // //     int arr[100]={0};
// // //     arr[1]=1;
// // //     for(int i=2;i<=n;i++){
// // //         arr[i]=arr[i-1]+arr[i-2];
// // //     }
// // //     return arr[n];

// // // }
// // // int main()
// // // {
// // //     // int arr[100] = {0};
// // //     // cout << fib(5, arr);
// // //     cout<<fib(5);
// // //     return 0;
// // // }
// // #include <bits/stdc++.h>
// // using namespace std;
// // // int m(int n)
// // // {
// // //     if (n <= 1)
// // //     {
// // //         return 0;
// // //     }
// // //     int s = 1 + m(n - 1);
// // //     if (n % 2 == 0)
// // //     {
// // //         s = min(s, 1 + m(n / 2));
// // //     }
// // //     if (n % 3 == 0)
// // //     {
// // //         s = min(s, 1 + m(n / 3));
// // //     }
// // //     return s;
// // // }
// // int m(int n, int arr[])
// // {
// //     if (n < 2)
// //     {
// //         arr[n] = 0;
// //         return 0;
// //     }
// //     if (arr[n] > 0)
// //         return arr[n];
// //     int s = 1 + m(n - 1, arr);
// //     if (n % 2 == 0)
// //     {
// //         s = min(s, 1 + m(n / 2, arr));
// //     }
// //     if (n % 3 == 0)
// //     {
// //         s = min(s, 1 + m(n / 3, arr));
// //     }
// //     arr[n] = s;
// //     return s;
// // }
// // int main()
// // {
// //     int arr[100] = {0};
// //     cout << m(10, arr);
// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// int m(int n)
// {
//     int arr[100] = {0};
//     for (int i = 2; i <= n; i++)
//     {
//         int s = 1 + m(n - 1);
//         if (n % 2 == 0)
//         {
//             s = min(s, 1 + m(n / 2));
//         }
//         if (n % 3 == 0)
//         {
//             s = min(s, 1 + m(n / 3));
//         }
//         arr[i] = s;
//     }
//     return arr[n];
// }
// int main()
// {
//     cout << m(10);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int st(int n,int arr[]){
    if(n==0){
        arr[n]=1;
        return 1;
    }
    if(n==1){arr[n]=2;
        return 2;
    }
    if(n==2){arr[n]=4;
        return 4;
    }
    if(arr[n]>0)return arr[n];
    arr[n]= st(n-1,arr)+st(n-2,arr)+st(n-3,arr);
    return arr[n];
}
int main()
{
cout<<st(10);
return 0;
}
