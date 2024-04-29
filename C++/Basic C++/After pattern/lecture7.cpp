// #include <bits/stdc++.h>
// #include <vector>
// #include <math.h>
// using namespace std;
// vector<int> d2b(int n)
// {
//     vector<int> *ref = new vector<int>;
//     while (n > 0)
//     {
//         ref->push_back(n % 2);
//         n /= 2;
//     }
//     return *ref;
// }
// int b2d(vector<int> abc)
// {
//     int sum = 0;
//     for (int i = 0; i < abc.size(); i++)
//     {
//         if (abc[i] == 1)
//         {
//             sum += pow(2, i);
//         }
//     }
//     return sum;
// }
// int tower(int arr[], int n)
// {
//     int lsum[n] = {0};
//     int rsum[n] = {0};
//     for (int i = 1; i < n; i++)
//     {
//         lsum[i] = lsum[i - 1] + arr[i - 1];
//     }
//     rsum[n - 1] = 0;
//     for (int i = n - 2; i >= 0; i--)
//     {
//         rsum[i] = rsum[i + 1] + arr[i + 1];
//     }
//     int actual[n] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         actual[i] = lsum[i] + rsum[i] - ((n - i - 1) * arr[i]);
//     }
//     int mins = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         // /mins = min(mins, actual[i]);
//         cout << actual[i];
//         cout << endl;
//     }
//     return mins;
// }
// int main()
// {
//     // cout << b2d(d2b(10));
//     // int arr[] = {1,2,3};
//     // int n = 3;
//     // for (int i = 1; i < 3; i++)
//     // {
//     //     int temp = arr[i], j = 0;
//     //     for (j = i - 1; j >= 0; j--)
//     //     {
//     //         if (arr[j] > arr[j + 1])
//     //         {
//     //             arr[j + 1] = arr[j];
//     //         }
//     //         else
//     //             break;
//     //     }
//     //     arr[j + 1] = temp;
//     // }
//     // for (int c : arr)
//     // {
//     //     cout << c;
//     // }
//     // cout << tower(arr, n);
//     // char arr[] = "Himansu";
//     // cout << &arr;
//     // char c;
//     // cin>>c;
//     // int count=0;
//     // while(c!='a'){
//     //     count++;cin>>c;
//     // }
//     // cout<<count;
//     char c;
//     c = cin.get();
//     int s = 0;
//     while (c != 'a')
//     {
//         c = cin.get();
//         s++;
//     }
//     cout << s;

//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    // string s="modi hatao desh bachao";
    // for(int i=0;s[i]!='\0';i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<s[j];
    //     }
    //     cout<<endl;
    // }

    // int arr[][3] = {
    //     {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j];
    //     }
    //     cout << endl;
    // }

    int **arr = new int *[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = new int[10];
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = i + j;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < 10; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
