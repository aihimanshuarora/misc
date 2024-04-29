#include <bits/stdc++.h>
using namespace std;
class mapnode
{
public:
    string key;
    int value;
    mapnode *next;
    mapnode(string s, int k)

    {
        key = s;
        value = k;
        next = NULL;
    }
    ~mapnode()
    {
        delete next;
    }
};
class ourmap(){
    mapnode * *bucket;
    int count;
    int numOfBuckets;
    public:
    ourmap(){
        count=0;
        numOfBuckets=5;
        bucket=new mapnode(numOfBuckets);
        for(int i=0;i<numOfBuckets;i++){
            bucket[i]=NULL;
        }
    }
    ~ourmap(){
        for(int i=0;i<numOfBuckets;i++){
            delete bucket[i];
        }
        delete []bucket;
    }
    int getSize(){
        return count;

    }
    int getElement(string key){
        int index=
        
    }
}
int main()
{

    return 0;
}
