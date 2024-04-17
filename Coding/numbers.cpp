#include <bits/stdc++.h>
using namespace std;
void a1()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << "1";
        }
        cout << endl;
    }
}
void a2()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
void a3()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i != 0 && i != 3)
            {
                if (j == 1)
                    cout << i;
                else
                    cout << "3";
            }
            else
            {
                cout << "3";
            }
        }
        cout << endl;
    }
}
void a4()
{
    int num = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << num++;
        }
        cout << endl;
    }
}
void a5()
{
    int num = 55;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i; j++)
        {
            cout << num--;
        }
        cout << endl;
    }
}
void a6()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            cout << 3 + 4 - i;
        }
        cout << endl;
    }
}
void a7()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <  i; j++)
        {
            cout << 3 + i;
        }
        cout << endl;
    }
}
void a8()
{
    int num = 4;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << num++;
        }
        cout << endl;
    }
}
int main()
{
    a8();
    return 0;
}