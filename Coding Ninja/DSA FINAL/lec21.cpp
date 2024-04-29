// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s = "{()}";
//     if (s.length() % 2 != 0)
//     {
//         cout << "Bha ";
//         return 0;
//     }
//     stack<char> a;
//     for (int i = 0; s[i] != '\0'; i++)
//     {
//         if (s[i] == '{' || s[i] == '(' || s[i] == '[')
//         {
//             a.push(s[i]);
//         }
//         else
//         {
//             char m = a.top();
//             if (s[i] == '}' && m == '{' || s[i] == ']' && m == '[' || s[i] == ')' && m == '(')
//             {
//                 a.pop();
//             }
//             else
//             {
//                 cout << "m";
//                 return 0;
//             }
//         }
//     }
//     cout<<"yaya";
//     return 0;
// }

// reverse stack using recursions

#include <bits/stdc++.h>
using namespace std;
void insert(stack<int> &st, int element)
{
    if (st.empty())
    {
        st.push(element);
    }
    else
    {
        int a = st.top();
        st.pop();
        insert(st, element);
        st.push(a);
    }
}
void revs(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int a = st.top();
    st.pop();
    revs(st);
    insert(st, a);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    revs(st);
    cout << st.top();
    st.pop();
    cout << st.top();
    st.pop();
    cout << st.top();
    st.pop();

    return 0;
}
