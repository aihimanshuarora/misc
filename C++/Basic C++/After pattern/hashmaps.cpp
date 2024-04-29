#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> ab;
    for (int i = 0; i < 4; i++)
    {
        string s;
        int m;
        cin >> s >> m;
        pair<string, int> a;
        a.first = s;
        a.second = m;
        ab.insert(a);
    }
    // cout << ab.count("Himansh");
    cout << ab.at("Himanshu");
    map<string,int>::iterator it=ab.first();
    return 0;
}
