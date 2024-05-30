// // #include <bits/stdc++.h>
// // using namespace std;
// // void remove(char arr[],int n){
// //     if(arr[0]=='\0')return;
// //     if(arr[0]=='x'){
// //         for(int i=0;i<n;i++){
// //             arr[i]=arr[i+1];
// //         }
// //         remove(arr,n);
// //     }
// //     remove(arr+1,n-1);
// // }
// // int main()
// // {
// //     char arr[] = "himxxanxs";
// //     int n = sizeof(arr);
// //     remove(arr, n);
// //     cout<<arr;
// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string ex = "{)[])}";
//     stack<char> abc;
//     if (ex.length() % 2 != 0)
//     {
//         cout << "No";
//         return 1;
//     }
//     for (int i = 0; i < ex.length(); i++)
//     {
//         if (ex[i] == '{' || ex[i] == '(' || ex[i] == '[')
//         {
//             abc.push(ex[i]);
//         }
//         else
//         {
//             if (ex[i] == '}' && abc.top() == '{')
//             {
//                 abc.pop();
//             }
//             else if (ex[i] == ']' && abc.top() == '[')
//             {
//                 abc.pop();
//             }
//             else if (ex[i] == ')' && abc.top() == '(')
//             {
//                 abc.pop();
//             }
//             else
//             {
//                 cout << "Modi";
//                 return 1;
//             }
//         }
//     }cout<<"Done";
//     return 0;
// }

// reverse stack;
#include <bits/stdc++.h>
using namespace std;
void insert(stack<int> &abc, int e)
{
    if (abc.size() == 0)
    {
        abc.push(e);
    }
    else
    {
        int s = abc.top();
        abc.pop();
        insert(abc, e);
        abc.push(s);
    }
}
void rev(stack<int> &abc)
{
    if (abc.size() == 0)
        return;
    int tops = abc.top();
    abc.pop();
    rev(abc);
    insert(abc, tops);
}
int main()
{
    stack<int> abc;
    abc.push(1);
    abc.push(2);
    abc.push(3);
    rev(abc);
    cout << abc.top();
    abc.pop();
    cout << abc.top();
    abc.pop();
    cout << abc.top();
    abc.pop();
    return 0;
}
