#include <bits/stdc++.h>
using namespace std;
int main()
{
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