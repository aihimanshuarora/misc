#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    // cin >> c;
    c = cin.get();
    int count = 0;
    while (c != 'a')
    {
        count++;
        // cin >> c;
        c = cin.get();
    }
    cout << count;
    return 0;
}
