#include <iostream>
using namespace std;
//****
//****
//****
//****
void pattern1()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
/*
111
222
333
*/
void pattern2()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
/*
123
123
123
*/
void pattern3()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
/*
123
456
789
*/
void pattern4()
{int sum=0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << sum++;
        }
        cout << endl;
    }
}
/*
4321
4321
4321
4321
*/
void pattern5()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << 4-j;
        }
        cout << endl;
    }
}
int main()
{
    pattern5();

    return 0;
}
