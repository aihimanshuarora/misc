// You’re given a string where multiple characters are repeated consecutively. You’re supposed to reduce the size of this string using mathematical logic given as in the example below :

// Input :
// aabbbbeeeeffggg

// Output:
// a2b4e4f2g3

// Input :
// abbccccc

// Output:
// ab2c5

//2 to 3 minutes taken
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "aaabcdddd";
    int c=1;
    cout<<s[0];
    for (int i = 1; i < s.length();i++){
        if(s[i]==s[i-1]){
            c++;
        }
        else{
            cout<<c<<s[i];
            c=1;
        }
    }
    cout<<c;

        return 0;
}
