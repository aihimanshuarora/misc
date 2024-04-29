#include <bits/stdc++.h>
using namespace std;
class mapnode
{
public:
    string key;
    int value;
    mapnode *next;
    mapnode(string key, int val)
    {
        this->key = key;
        value = val;
        next = NULL;
    }
    ~mapnode()
    {
        delete next;
    }
};
class ourmap
{
    mapnode **bucket;
    int count;
    int numOfBuckets;

public:
    ourmap()
    {
        count = 0;
        numOfBuckets = 5;
        bucket = new mapnode(5);
        for (int i = 0; i < numOfBuckets; i++)
        {
            bucket[i] = NULL;
        }
    }
    ~ourmap()
    {
        for (int i = 0; i < bucketsize; i++)
        {
            delete bucket[i];
        }
        delete[] bucket;
    }

private:
    int getBucketIndex(string key)
    {
        int hashcode = 0;
        int coeff = 1;
        for (int i = key.length() - 1; i >= 0; i--)
        {
            hashcode += key[i] * coeff;
            coeff *= 37;
            hashcode %= numOfBuckets;
            coeff %= numOfBuckets;
        }
        return hashcode;
    }

public:
    int size()
    {
        return count;
    }
    int getValue(string key)
    {
        int index = getBucketIndex(key);
        mapnode *head = new bucket[index];
        while (head != NULL)
        {
            if (head->key == key)
            {
                return head->value;
            }
            else
                return head->next;
            return 0;
        }
    }

};
int main()
{
ourmap mp;
    return 0;
}
