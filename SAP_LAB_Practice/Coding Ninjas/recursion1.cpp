#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if (n < 2)
        return n;
    return n + sum(n - 1);
}
int f(int n)
{
    if (n < 2)
        return 1;
    return n * f(n - 1);
}
int fb(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fb(n - 1) + fb(n - 2);
}
bool i(int arr[], int n)
{
    if (n == 1)
        return 1;
    if (arr[0] > arr[1])
        return 0;
    return i(arr + 1, n - 1);
}
int l(string s)
{
    if (s[0] == '\0')
    {
        return 0;
    }
    return 1 + l(s.substr(1));
}
void removes(string s)
{
    if (s[0] == '\0')
        return;
    if (s[0] == 'x')
    {
        for (int i = 0; s[i]!='\0'; i++)
        {
            s[i] = s[i +1];
        }
        removes(s);
    }
    removes(s.substr(1));
}
int main()
{
    // int arr[]={1,2,3};
    // // int n=3;
    // // cout<<i(arr,n);
    // string s="himanshu";
    // cout<<l(s);
    string s = "himaxxhxhux";
    removes(s);
    cout << s;
    return 0;
}
