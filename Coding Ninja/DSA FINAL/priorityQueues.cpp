// #include <bits/stdc++.h>
// using namespace std;
// class pq
// {
//     vector<int> pqv;

// public:
//     pq() {}
//     int getSize()
//     {
//         return pqv.size();
//     }
//     bool isEmpty()
//     {
//         return getSize() == 0;
//     }
//     int getFirst()
//     {
//         return pqv.front();
//     }
//     void insert(int element)
//     {
//         pqv.push_back(element);
//         int ci = pqv.size() - 1;
//         while (ci > 0)
//         {
//             int pi = ci - 1;
//             pi /= 2;
//             if (pqv[pi] > pqv[ci])
//             {
//                 swap(pqv[pi], pqv[ci]);
//                 ci = pi;
//             }
//             else
//                 break;
//         }
//     }
//     void display()
//     {
//         for (int i = 0; i < pqv.size(); i++)
//         {
//             cout << pqv[i] << " ";
//         }
//     }
//     void down()
//     {
//         int ci = pqv.size() - 1;
//         while (ci > 0)
//         {
//             int pi = ci - 1;
//             pi /= 2;
//             if (pqv[pi] > pqv[ci])
//             {
//                 swap(pqv[pi], pqv[ci]);
//                 ci = pi;
//             }
//             else
//                 break;
//         }
//     }
//     void deletee()
//     {
//         int temp = pqv[0];
//         swap(pqv[0], pqv[pqv.size() - 1]);
//         pqv.pop_back();
//         down();
//     }
// };
// int main()
// {
//     pq *abc = new pq;
//     abc->insert(1);
//     abc->insert(2);
//     abc->insert(3);
//     abc->insert(4);
//     abc->deletee();
//     abc->display();
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
//k smallest element

int main()
{
    priority_queue<int>pq;
    int arr[]={12,2,3,4,5};
    int n=5;
    pq.push(arr[0]);
    pq.push(arr[1]);
    pq.push(arr[2]);
    for(int i=3;i<n;i++){
        if(arr[i]<pq.top()){
            pq.pop();
            pq.push(arr[i]);
            heapify();  
        }
    }


return 0;
}
