// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<string, int> abc;
//     pair<string ,int> ap;
//     for(int i=0;i<3;i++){
//         int a;string s;
//         cin>>a>>s;
//         ap.first=s;
//         ap.second=a;
//         abc.insert(ap);
//     }
//     map<string,int>:: iterator it=abc.begin();
//     while(it!=abc.end()){
//         cout<<it->first<<it->second;
//         it++;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mymap;
    pair<int, int> ap;
    for (int i = 0; i < 10; i++)
    {
        int a;
        cin >> a;
        if (mymap.count(a) == 1)
        {
            continue;
        }
        ap.first = a;
        ap.second = 1;
        mymap.insert(ap);
    }
    map<int,int>:: iterator it=mymap.begin();
    while(it!=mymap.end()){
        cout<<it->first;
        it++;
    }
    return 0;
}
