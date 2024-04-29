#include <bits/stdc++.h>
using namespace std;
void ls(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            cout << i << endl;
            return;
        }
    }
}
void bs(int arr[], int s, int e, int k)
{

    while (s <= e)
    {
        int mid = s + e;
        mid /= 2;
        if (arr[mid] == k)
        {
            cout << mid << endl;
            return;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
}
void ses(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i], mini = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }
}
void bus(int arr[], int s)
{
    for (int i = 0; i < s - 1; i++)
    {
        for (int j = 0; j < s - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
void is(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int temp=arr[i];
        int j;
        for(j=i-1;j>=0;j++){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else break;
        }
        arr[j+1]=temp;
    }
}
int main()
{
    int arr[] = {21, 234, 32, 4, 5};
    bus(arr, 5);
    for (int c : arr)
        cout << c << endl;
    return 0;
}
