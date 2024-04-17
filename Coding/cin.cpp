// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int ount = 0;
//     char c;
//     cin >> c;
//     ount++;
//     while (c != 'a')
//     {
//         ount++;
//         cin >> c;
//     }
//     cout << "en" << ount << endl;
//     int count = 0;
//     char ch;
//     ch = cin.get();
//     while (ch != 'a')
//     {
//         ch = cin.get();
//         count++;
//     }
//     cout << count + 1;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    int x;
    cin>>x;
    int ok=0;
    for(int i=0;ok<x;i++){
        if((3*i+2)%4!=0){
            cout<<3*i+2;
            ok++;
        }
    }
return 0;
}