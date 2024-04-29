#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "{({})}";
    if (s.length() % 2 != 0)
    {
        cout << "No:";
        return 0;
    }
    stack<char> abc;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[')
        {
            abc.push(s[i]);
        }
        else
        {

            char c = abc.top();
            if (c == '(' && s[i] == ')')
            {
                abc.pop();
            }
            else if (c == '{' && s[i] == '}')
            {
                abc.pop();
            }
            else if (c == '[' && s[i] == ']')
            {
                abc.pop();
            }
            if (abc.size() == 0)
            {
                cout << "yayyy";
            }
        }
    }
    return 0;
}
