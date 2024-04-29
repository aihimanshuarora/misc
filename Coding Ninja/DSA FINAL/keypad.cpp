#include <bits/stdc++.h>
using namespace std;
int ok(int num, string *output)
{
    string combinations[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    // int cnt=0;
    // if(num<10){
    //     for(int i=0;i<combinations[num].size();i++){
    //         output[cnt]=combination[num][i];
    //         cnt++;
    //     }
    //     return cnt;
    // }
    if (num == 0)
    {
        output[0] = "";
        return 1;
    }
    int o = num / 10;
    int small = ok(o, output);
    string extra = combinations[num % 10];
    for (int i = 1; i <= extra.size(); i++)
    {
        for (int j = 0; j < small; j++)
        {
            output[small * i + j] = output[j] + extra[i - 1];
        }
    }
    return (extra.size() + 1) * small;
}
int main()
{
    int num = 739;
    string output[4000];
    int s = ok(num, output);
    for (int i = 0; i < s; i++)
    {
        cout << output[i] << "  ";
    }
    return 0;
}
