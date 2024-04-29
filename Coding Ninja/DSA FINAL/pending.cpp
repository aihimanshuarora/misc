// #include <bits/stdc++.h>
// using namespace std;
// int ok(string input, string *output)
// {
//     if (input.size() == 0)
//     {
//         output[0] = "";
//         return 1;
//     }
//     int s = ok(input.substr(1), output);
//     for (int i = 0; i < s; i++)
//     {
//         output[s + i] = input[0] + output[i];
//     }
//     return 2 * s;
// }
// int main()
// {
//     string input = "guna";
//     string *output = new string[100];
//     int a = ok(input, output);
//     for (int i = 0; i < a; i++)
//         cout << output[i] << endl;
//     return 0;
// }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// // int *a=new int[10];
// // for(int i=0;i<10;i++)cout<<a[i];
// // return 0;
// // }
#include <bits/stdc++.h>
using namespace std;
int ok(string input, string *output)
{
    if (input.size() == 0)
    {
        output[0] = "";
        return 1;
    }
    int s = ok(input.substr(1), output);
    for (int i = 0; i < s; i++)
    {
        output[s + i] = input[0] + output[i];
    }
    
    return 2 * s;
}
int main()
{
    string input = "himanshu";
    string output[1000];
    int s = ok(input, output);
    cout<<s;
    for (int i = 0; i < s; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}
