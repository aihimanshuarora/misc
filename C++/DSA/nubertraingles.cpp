#include <iostream>
using namespace std;
/*
1
21
321
*/
void p1()
{
    for (int i = 1; i < 4; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}
/*
333
22
1
*/
void p2()
{
    for (int i = 1; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            cout << 4 - i;
        }
        cout << endl;
    }
}
/*
    1
   12
  123
 1234
*/
void p3()
{
    int num = 1;
    for (int i = 1; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << num++;
        }
        cout << endl;
    }
}
int main()
{
    p3();
    return 0;
}
