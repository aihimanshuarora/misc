#include <bits/stdc++.h>
using namespace std;
void primeUptoN(int n)
{
    for (int i = 1; i <= n; i++)
    {
        bool ok = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                ok = 0;
                break;
            }
        }
        if (ok)
            cout << i << " ";
    }
}
void fibonacci(int n)
{
    int a = 0, b = 1, sum = a + b;
    cout << endl;
    for (int i = 2; i <= n; i++)
    {
        cout << sum << endl;
        ;
        a = b;
        b = sum;
        sum = a + b;
    }
}
int main()
{

    primeUptoN(20);
    fibonacci(5);
}
int masin()
{
    int n;
    cin >> n;
    int sum = 0, prod = 1;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        prod *= i;
    }
    cout << sum << endl
         << prod << endl;
}
int maisn()
{
    int a, b;
    cin >> a >> b;
    cout << (a > b) ? a : b;
    return 0;
}
int mains()
{
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
    int p, r, t;
    cin >> p >> r >> t;
    cout << (p * r * t) / 100 << endl;
    int sp, cp;
    cin >> sp >> cp;
    cout << (sp - cp) << endl;
    cout << ((sp - cp) / cp) * 100 << endl;
    int num;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
    return 0;
}
