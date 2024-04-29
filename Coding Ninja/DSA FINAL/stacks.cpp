#include <bits/stdc++.h>
using namespace std;
int arr[10];
int t=0;
void push(int e){
    if(t==10){
        return ;
    }
    arr[t++]=e;

}
void pop(){
    if(t==0){
        return;
    }
    t--;
}
int main()
{
    return 0;
}
