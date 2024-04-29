#include <bits/stdc++.h>
using namespace std;
#define ok 1e9;
int alpha(string s)
{
    if (s.size() == 1)
    {
        return 1;
    }
    int s1 = alpha(s.substr(1));
    int s2 = 0;
    if ((s[0] - '0' * 10 + s[1] - '0') <= 26 && s[0] != 0)
    {
        s2 = alpha(s.substr(2));
    }
    return int((s1 + s2) % ok);
}
int main()
{
    string s;
    cin >> s;
    int sk = alpha(s);
    return 0;
}
