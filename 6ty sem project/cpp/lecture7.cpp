#include <bits/stdc++.h>
using namespace std;
void bin(int dec)
{
    int arr[32] = {0};
    int i = 0;
    while (dec > 0)
    {
        arr[i++] = dec % 2;
        dec /= 2;
    }
    for (int c : arr)
        cout << c;
    cout << endl;
    int num = 0;
    for (int i = 0; i < 32; i++)
    {
        if (arr[i] == 1)
        {
            num += pow(2, i);
        }
    }
    cout << num;
}
int main()
{
    bin(10);
    return 0;
}
