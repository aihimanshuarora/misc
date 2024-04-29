#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        int val = i + 1;
        int diff = 4;
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
                cout << val;
            else
            {
                val += diff;
                diff--;
                cout << val;
            }
        }
        cout << endl;
    }
    return 0;
}

// cout << val + diff - j + 1;