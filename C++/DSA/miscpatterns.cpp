#include <iostream>
using namespace std;
// upper triangle
void f1()
{
    for (int i = 0; i < 5; i++)
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
}
// lower triangle
void f2()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < 2 * 5 - 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
// pyramid
void f3()
{
    int n = 10;
    for (int i = 0; i < 5; i++)
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
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < 2 * 5 - 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
/*
  1
 232
34543
*/
void f4()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <=i; j++)
        {
            cout << i + j + 1;
        }
        for (int j = 2 * i; j > i; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}
int main()
{
    f1();
    cout << endl;
    f2();
    cout << endl;
    f3();
    cout << endl;
    f4();

    return 0;
}
