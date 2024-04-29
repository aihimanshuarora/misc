#include <bits/stdc++.h>
using namespace std;
class fraction
{
    const int c;

public:
    int n, d;
    fraction(int n, int d, int k) : c(k)
    {
        this->n = n;
        this->d = d;
        cout << c << endl;
    }
    // fraction(fraction *&f)
    // {
    //     cout << "Copuy COnsur";
    // }
    void add(fraction f2)
    {
        int temp = this->d;
        this->d = this->d * f2.d;
        this->n = (this->d / temp) * this->n;

        f2.n = (this->d / f2.d) * f2.n;
        cout << "fraction is " << this->n << "/" << this->d << endl;
    }
    void mul(fraction f2)
    {
        this->n *= f2.n;
        this->d *= f2.d;
        cout << "fraction is " << this->n << "/" << this->d << endl;
    }
    fraction operator+(fraction fr)
    {
        this->n = fr.n * 22;
        cout << this->n;
    }
};
int main()
{
    fraction *a = new fraction(10, 20, 33);
    fraction b(1, 2, 3);

    fraction c(4, 5, 6);
    b + c;

    // fraction b(a);
    // cout << b.n;
    // fractio(10,20);
    // a->add(b);
    // a->mul(b);
    // cout << a->n << endl
    //      << a->d;

    return 0;
}
