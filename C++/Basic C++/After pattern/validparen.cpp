#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> abc;
    string expression = "{{{{[}]}}}";
    if (expression.length() % 2 != 0)
    {
        cout << "No";
        return 0;
    }

    for (int i = 0; expression[i] != '\0'; i++)
    {
        if (expression[i] == '[' || expression[i] == '{' || expression[i] == '(')
        {
            abc.push(expression[i]);
        }
        else
        {
            if (expression[i] != '}' && abc.top() == '{' ||
                expression[i] != ')' && abc.top() == '(' ||
                expression[i] != ']' && abc.top() == '[')
            {
                cout << "End";
                return 0;
            }
            else
                abc.pop();
        }
    }
    cout << "WHoke";
    return 0;
}
