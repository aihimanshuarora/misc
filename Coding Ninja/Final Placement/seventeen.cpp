#include <bits/stdc++.h>
using namespace std;
class i
{
public:
    int a;
    i(int s)
    {
        a = s;
    }
    void operator+(i b)
    {
        a = a * 7 + b.a;
        cout << a;
    }
};
int main()
{
    i m(2);
    i k(3);
    m+k;

    return 0;
}
