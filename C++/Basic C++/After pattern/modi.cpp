#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int val = -(n - 1), dec = n, k = 0;
    for (int i = 0; i < n; i++)
    {
        if (i <= n / 2)
        {

            val = val + dec;
        }
        else
        {
            dec = 10 + n * k;
            val = val - dec;
            k++;
        }
        for (int j = 0; j < n; j++)
        {
            cout << val++;
        }
        cout << endl;
    }
    return 0;
}
