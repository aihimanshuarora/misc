#include <bits/stdc++.h>
using namespace std;
int alphacode(string s, int arr[])
{
    if (s.size() == 1 || s.size() == 0)
    {
        return 1;
    }
    if (arr[s.size()] > 0)
    {
        return arr[s.size()];
    }
    int ans = alphacode(s.substr(1), arr);
    int ans2 = 0;
    if (s[0] != 0 && (s[0] - '0' * 10 + s[1] - '0' <= 26))
    {
        ans2 = alphacode(s.substr(2), arr);
    }
    arr[s.size()] = ans + ans2;
    return ans + ans2;
}
int bin(int h)
{
    if (h == 0 || h == 1)
    {
        return h;
    }
    int small = bin(h - 1);
    int small2 = bin(h - 2);
    return (small * small) + 2 * (small * small2);
}
int main()
{
    cout << bin(2);
    // int arr[101] = {0};
    // string s = "411";
    // cout << alphacode(s, arr);
    return 0;
}