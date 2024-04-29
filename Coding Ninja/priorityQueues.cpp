//de;eteion , k smallest
#include <bits/stdc++.h>
using namespace std;
class pqc
{
    vector<int> pq;

public:
    pqc() {}
    bool isEmpty()
    {
        pq.size() == 0;
    }
    int getSize()
    {
        pq.size();
    }
    int getMin()
    {
        if (isEmpty())
            return -1;
        return pq[0];
    }
    void insert(int element)
    {
        pq.push_back(element);
        int ci = pq.size() - 1;
        while (ci > 0)
        {
            int pi = (ci - 1) / 2;
            if (pq[pi] > pq[ci])
            {
                swap(pq[pi], pq[ci]);
                ci = pi;
            }
            else
                break;
        }
    }
    void down(){
        int pi=0;
        int ci=2*pi+1,cii=ci+1;
        int min=(pi,ci,cii);
        while(pi!=NULL){
            if()
        }
    }
    void delete(){
        if(isEmpty())return;
        int temp=pq[0];
        pq[0]=pq[pq.size()-1];
        p.pop_back();
        down();
    }
};
int main()
{

    return 0;
}
