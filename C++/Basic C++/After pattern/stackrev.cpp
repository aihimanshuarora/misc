// #include <bits/stdc++.h>
// using namespace std;
// void insert(stack<int> &s, int e)
// {
//     if (s.empty() == 1)
//     {
//         s.push(e);
//     }
//     else
//     {
//         int a = s.top();
//         s.pop();
//         insert(s, e);
//         s.push(a);
//     }
// }
// void rev(stack<int> &stackk)
// {
//     if (stackk.size() == 0)
//     {
//         return;
//     }
//     int temp = stackk.top();
//     stackk.pop();
//     rev(stackk);
//     insert(stackk, temp);
// }
// void print(stack<int> s)
// {
//     if (s.empty())
//         return;
//     cout << s.top();
//     s.pop();
//     print(s);
// }
// int main()
// {
//     stack<int> abc;
//     abc.push(1);
//     abc.push(2);
//     abc.push(3);
//     abc.push(4);
//     abc.push(5);
//     abc.push(6);
//     rev(abc);
//     print(abc);
//     return 0;
// }

#include <bits/stdc++.h>
#include <stack>
using namespace std;
void insert(stack<int> &s,int e){
    if(s.empty()){
        s.push(e);
    }
    else{
        int t=s.top();
        s.pop();
        insert(s,e);
        s.push(t);
    }
}
void rev(stack<int>&s){
    if(s.empty())return;
    int ss=s.top();
    s.pop();
    rev(s);
    insert(s,ss);
}
void print(stack<int> s)
{
    if(s.empty())return;
    cout << s.top();
    s.pop();
    print(s);
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    print(s);
    cout<<endl;
    rev(s);
    print(s);
    return 0;
}
