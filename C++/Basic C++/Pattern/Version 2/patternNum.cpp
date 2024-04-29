#include <iostream>
#include <math.h>
using namespace std;
void a()
{
    int num = 0;
    for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 14; j++)
        {
            if (j % 2 == 0)
            {
                cout << num++;
            }
            else
                cout << "*";
        }
        cout << endl;
    }
}
void b()
{
    int m = 4, r = 7;
    int num = (m - 1) * r;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < r; j++)
        {

            if (j % 2 == 0)
            {
                cout << num++;
            }
            else
                cout << "*";
        }
        num -= 8;
        cout << endl;
    }
}
void c()
{
    int num = 9;
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            num = num - 8;
        else if (i % 2 != 0)
            num = num + 4;
        for (int j = 0; j < 7; j++)
        {
            if (j % 2 == 0)
                cout << num++;
            else
                cout << "*";
        }
        cout << endl;
    }
}
void d()
{
    int num = 1;
    for (int i = 0; i < 4; i++)
    {
        if (i == 3)
        {
            num = 5;
        }
        else if (i != 0)
        {
            num = 4 * (i + 1) + 1;
        }
        for (int j = 0; j < 7; j++)
        {
            if (j % 2 == 0)
            {
                cout << num++;
            }
            else
                cout << "*";
        }
        cout << endl;
    }
}
void e()
{
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            
        }
        else
        {
        }
        for (int j = 0; j < 7; j++)
        {
            if (j % 2 == 0)
            {
                cout << num++;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
int main()
{
    // starmix;
    e();
    return 0;
}
