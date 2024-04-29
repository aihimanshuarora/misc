#include <iostream>
using namespace std;
void a()
{
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            for (int j = 0; j < i; j++)
            {
                cout << 2 + i;
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < 10 - i; j++)
            {
                cout << 8 - i + 4;
            }
            cout << endl;
        }
    }
}
void b()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << 2 + i + 1;
        }
        cout << endl;
    }
}
void c()
{
    int sum = 3;
    // for (int j = 1; j <= 5; j++)
    // {
    //     sum += j;
    // }
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            for (int j = 0; j < i; j++)
            {
                cout << sum++;;
            }
            cout << endl;
        }
        else
        {
            

            for (int j = 0; j < 10 - i-1; j++)
            {
                cout << sum--;
            }
            cout << endl;
        }
    }
}
int main()
{
    c();

    return 0;
}
