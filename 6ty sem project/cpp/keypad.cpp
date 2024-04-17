#include <bits/stdc++.h>
using namespace std;
int keypad(int n, vector<string> *op, string ip[], int s)
{
    if (n == 0)
    {
        op->push_back(" ");
    }
    int small=n/10;
    int smallAns=keypad(small,op,ip,s);
    for(int i=0;i<smallAns;i++){
        op.push_back()
    }
}
int main()
{
    string combinations[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int number;
    cin >> number;
    vector<string> output;
    keypad(number, &output, combinations, 10);
    return 0;
}
