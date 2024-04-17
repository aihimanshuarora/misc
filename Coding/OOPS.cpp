#include <bits/stdc++.h>
using namespace std;
class fraction
{
public:
    int d, n;
    fraction(int d, int n)
    {
        this->d = d;
        this->n = n;
    }
    // fraction(fraction &c){
    //     this->string -ne stirng[len(c.string()-1)]
    //     this->strcpyt()
    // }
    void add(fraction f2)
    {
        this->d = this->d + f2.d;
        this->n = this->n + f2.n;
    }
    void p()
    {
        cout << this->n << "/" << this->d;
    }
    void operator+(fraction f2)
    {
        this->d = f2.d * 102;
    }
};
int main()
{
    fraction f(1, 2);
    fraction *fe = new fraction(1, 3);
    f.add(*fe);
    f + *fe;
    f.p();
    return 0;
}