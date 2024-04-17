// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<string, int> directory;
//     pair<string, int> contact;
//     for (int i = 0; i < 2; i++)
//     {
//         string s;
//         int ii;
//         cout << "Enter The Contact Details Of" << i << "th contact";
//         cin >> s >> ii;
//         contact.first = s;
//         contact.second = ii;
//         directory.insert(contact);
//     }
//     cout << directory.count("Aditi");
//     cout << directory["Aditi"];
//     map<string, int>::iterator it = directory.begin();
//     while (it != directory.end())
//     {
//         cout << "Name" << it->first;
//         cout << endl;
//         cout << "Ph" << it->second;
//         cout << endl;
//         it++;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int n = sizeof(arr) / sizeof(int);
    map<int, bool> hasha;
    for (int i = 0; i < n; i++)
    {
        if (hasha.count(arr[i]) == 0)
        {
            hasha[arr[i]] = 1;
        }
    }
    map<int, bool>::iterator it = hasha.begin();
    while (it != hasha.end())
    {
        cout << it->first << " " << it->second << " ";
        cout << endl;
        it++;
    }
    return 0;
}