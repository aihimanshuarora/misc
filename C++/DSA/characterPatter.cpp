#include <iostream>
using namespace std;
/*
A
BC
DEF
*/
void f1()
{
    int num = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << char('A' + num++);
        }
        cout << endl;
    }
}
/*
A
BA
CBA
*/
void f2()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << char('A' + i - j - 1);
        }
        cout << endl;
    }
}
/*
E
DE
CDE
*/
void f3(){
    for(int i=0;i<4;i++){
        for(int j=0;j<i;j++){
            cout<<char('E'-i+j+1);
        }
        cout<<endl;
    }
}
int main()
{
    f3();
    return 0;
}
