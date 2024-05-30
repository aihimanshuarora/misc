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
    void display()
    {
        cout << endl;
        cout << n << "/" << d << endl;
    }
    int mul(fraction f)
    {
        this->n *= f.n;
        this->d *= f.d;
        display();
    }
    int add(fraction f)
    {
        int lcm = this->d * f.d;
        this->n = this->n * (lcm / this->d);
        f.n = f.n * (lcm / f.d);
        this->n += f.n;
        this->d = lcm;
        display();
    }
    void operator+(fraction f)
    {
        n = n * f.n;
        d = d * f.d;
        display();
    }
};
int main()
{
    fraction f1(10, 20);
    fraction f2(10, 20);
    // f1.add(f2);
    f1 + (f2);

    return 0;
}
