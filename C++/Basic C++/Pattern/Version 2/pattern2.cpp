#include <iostream>
using namespace std;
// 1111
void p1()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << 1;
        }
        cout << endl;
    }
}
// 111 222
void p2()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
// internal varsity
void p3()
{
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            if (j != 1 && i != 0 && i != 4)
                cout << "3";
            else
                cout << i;
        }
        cout << endl;
    }
}
// 1 s 10
void p4()
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << sum++;
            ;
        }
        cout << endl;
    }
}
// inverted right triangle
// exam//
void p5()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i; j++)
        {
            // cout <</2512
        }
        cout << endl;
    }
}
// 6666 5555 444 333
void p6()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            cout << 2 + 5 - i;
        }

        cout << endl;
    }
}
// rev rhombus
void p7()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << 3 + i + j;
        }

        cout << endl;
    }
}
// triangle 1
void p8()
{
    int sum = 3;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << sum++;
        }
        cout << endl;
    }
}
// pyramid
void p9()
{
    int num=2;
    for (int i = 0; i < 10; i++)
    {

        if (i < 5)
        {
            for (int j = 0; j < i; j++)
            {
                cout << 2 + i - j;
                num++;
            }
        }
        else
        {num--;
            for (int j = 0; j < 10 - i-1; j++)
            {
                // cout << 5 + 2 - i + j;
                cout<<num--;
            }
        }
        cout << endl;
    }
}
// hollow pyramid
void p10()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            if (i != 0 && i != 4 && j != 0 && j != 2 * i - 2)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
// inverted pyramid
void p11()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * 5 - 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
// invered hollow star
void p12()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << " ";
        for (int j = 0; j < 2 * 5 - 2 * i - 1; j++)
        {
            if (i != 0 && j != 0 && j != 2 * 5 - 2 * i - 2)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
// half diamond star pattern
void p13()
{
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < 10 - i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
}
// inverted 13
void p14()
{
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            for (int j = 0; j < 5 - i; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < i - 5; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < 10 - i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
}
// diamodn
void p15()
{
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            for (int j = 0; j < 5 - i; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            i -= 5;
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < 10 - 2 * i - 1; j++)
            {
                cout << "*";
            }
            cout << endl;
            i += 5;
        }
    }
}
void p16()
{
}
void p17()
{
}
void p18()
{
}
void p19()
{
}
int main()
{
    p1();
    cout << endl;
    p2();
    cout << endl;
    p3();
    cout << endl;
    p4();
    cout << endl;
    p5();
    cout << endl;
    p6();
    cout << endl;
    p7();
    cout << endl;
    p8();
    cout << endl;
    p9();
    cout << endl;
    p10();
    cout << endl;
    p11();
    cout << endl;
    p12();
    cout << endl;
    p13();
    cout << endl;
    p14();
    cout << endl;
    p15();
    cout << endl;
    p16();
    cout << endl;
    p17();
    cout << endl;
    p18();
    cout << endl;
    p19();

    return 0;
}
