#include <bits/stdc++.h>
using namespace std;
class fraction
{
public:
    int n, d;
    fraction(int a, int b)
    {
        n = a;
        d = b;
    }
    void add(fraction b)
    {
        this->n = this->n + b.n;
        this->d = this->d + b.d;
        cout << this->n << endl
             << this->d << endl;
    }
    void multiply(fraction b)
    {
        int lin = d * b.d;
        n *= lin / d;
        b.n *= lin / b.d;
        cout << n + b.n << "/"
             << lin << endl;
    }
};
int main()
{

    fraction a(1, 2);
    fraction *b = new fraction(1, 2);
    a.multiply(*b);
    // cout << a.n;
    return 0;
}
