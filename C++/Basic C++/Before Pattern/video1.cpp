#include <iostream>
using namespace std;
void sumoftwo()
{
    int a, b;
    a = b = 0;
    cin >> a >> b;
    cout << a + b << " is the sum" << endl;
}
void simpleInterest()
{
    int p, r, t;
    cin >> p >> r >> t;
    cout << p + (p * r * t) / 100;
    // if we want to calculate only intrest then we could ignore adding p;
}
void profit()
{
    int cp, sp;
    cin >> cp >> sp;
    cout << sp - cp << " money you had transacted ";
    cout << (sp - cp) * 100 / cp;
}
void evenodd()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "odd";
    }
}
void relationNumber()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << a << " is greater";
    }
    else if (a == b)
    {
        cout << a << " and " << b << " are equal";
    }
    else
    {
        cout << b << " is greater";
    }
}
void tax()
{
    long long int tax;
    cin >> tax;
    if (tax < 50000)
    {
        cout << 0.06 * tax;
    }
    else if (tax < 5000000)
    {
        cout << 0.1 * tax;
    }
    else
    {
        cout << 0.5 * tax;
    }
}
void forloop()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "This Is FOr Loop";
        cout << endl;
    }
}
void whileloop()
{
    int i = 0;
    while (i < 10)
    {
        cout << "This Is While loop" << endl;
        i++;
    }
}
void dowhileloop()
{
    int i = 0;
    do
    {
        cout << "DO While";
        i++;
    } while (i < 10);
}
void firstn()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << i;
    }
}
void sumfirstn()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum;
}
void productsN()
{
    int pro = 1;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        pro *= i;
    }
    cout << pro;
}
void sumEvensN()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 2; i <= n; i += 2)
    {
        sum = sum + i;
    }
    cout << sum;
}
void threetriangle()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b + c && b < a + c && c < a + b)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
void primeUpton()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
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
        {
            cout << i;
        }
    }
}
void fib()
{
    int n;
    cin >> n;
    int a = 0, b = 1;
    int sum = 0;
    cout << a << b;
    for (int i = 2; i <= n; i++)
    {
        sum = a + b;
        cout << sum;
        a = b;
        b = sum;
    }
}
int main()
{
    // sumoftwo();
    // simpleInterest();
    // profit();
    // evenodd();
    // relationNumber();
    // tax();
    // forloop();
    // whileloop();
    // dowhileloop();
    // firstn();
    // sumfirstn();
    // productsN();
    // sumEvensN();
    // threetriangle();
    // primeUpton();
    fib();

    return 0;
}
