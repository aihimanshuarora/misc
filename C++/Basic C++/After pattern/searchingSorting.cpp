#include <iostream>
using namespace std;
void ls(int arr[], int s, int k)
{
    for (int i = 0; i < s; i++)
    {
        if (arr[i] == k)
        {
            cout << i << endl;
            return;
        }
    }
    cout << "not Found";
}
void bs(int arr[], int s, int e, int k)
{
    if (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == k)
        {
            cout << mid << endl;
            return;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    cout << "Not FOund";
}
void ss(int arr[], int n)
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
        swap(arr[i], arr[mini]);
    }
}
void bs(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void is(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i;
        int temp = arr[i];
        for (j = i; j >= 0; j--)
        {
            if (arr[j] < temp)
            {
                break;
            }
            else
            {
                arr[j] = arr[j - 1];
            }
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 83, 4};
    is(arr, 4);
    for (int c : arr)
        cout << c;
    return 0;
}
