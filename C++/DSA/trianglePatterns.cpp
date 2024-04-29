#include <iostream>
using namespace std;
/*
 *
 **
 ***
 ****
 */
void p1()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
/*
 *
 **
 ***
 ****
 */
void p2()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
            cout << " ";
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
/*
****
***
**
*
*/
void p3()
{
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5 - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
/*
 ****
 ***
 **
 *
 */
void p4()
{
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 5 - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    p4();

    return 0;
}
