#include <bits/stdc++.h>
using namespace std;
class a
{
public:
    static int ts;
    int n, d;
    a(int a, int b)
    {
        ts++;
        n = a;
        d = b;
    }
    void add(a b)
    {
        this->n += b.n;
        this->d += b.d;
    }
    void print()
    {
        cout << n << "/" << d << endl
             << ts;
    }
    void mul(a c)
    {
        this->d = this->d * c.d;
        this->n = (this->d / this->d) * this->n;
        c.n = (this->d / c.d) * this->n;
    }
    void operator+(a b)
    {
        this->n = 2 * b.n;
        this->d = 22 * b.d;
    }
};
int a::ts = 0;
int main()
{
    a ok(1, 2);
    a no(1, 2);
    ok + no;
    // ok.mul(no);
    ok.print();

    return 0;
}
