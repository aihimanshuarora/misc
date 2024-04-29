#include<bits/stdc++.h>
using namespace std;
int main()
{
map<int,int> abc;
int arr[]={1,2,3,4,5,4,3,2,1,5};
int n=10;
for(int i=0;i<n;i++){
    if(abc.count(arr[i])==0){
        pair<int,int> a;
        a.first=arr[i];
        a.second=1;
        abc.insert(a);
    }
}
map<int,int>::iterator it=abc.begin();
while(it!=abc.end()){
    cout<<it->first<<" "<<it->second<<endl;
    it++;
}
return 0;
}
