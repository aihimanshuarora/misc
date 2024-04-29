// #include <iostream>
// using namespace std;
// // hollow inverted half pyramid;
// void p1()
// {
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4 - i; j++)
//         {
//             if (j == 0 || j == 4 - i - 1 || i == 0)
//                 // cout << "*";
//                 cout << j;
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
// }
// void p2()
// {
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             // cout << j;
//             cout << char('a' + j);
//         }
//         for (int j = i - 1; j >= 1; j--)
//         {
//             // cout << j;
//             cout << char('a' + j);
//         }
//         cout << endl;
//     }
// }
// void p3()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5 - i; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 0; j < 2 * i + 1; j++)
//             cout << j;
//         //  for (int j = 0; j <  i; j++)
//         // {
//         //    cout << " ";
//         // }
//         for (int j = 0; j < (5 - i); j++)
//             cout << "*";
//         cout << endl;
//     }
// }
// // hollow diuanodn()
// void diamond()
// {
//     for (int i = 0; i < 10; i++)
//     {
//         if (i < 5)
//         {
//             for (int j = 0; j < 5 - i; j++)
//             {
//                 cout << " ";
//             }
//             for (int j = 0; j < 2 * i + 1; j++)
//             {
//                 if (j == 0 || j == 2 * i)
//                 {
//                     cout << "*";
//                 }
//                 else
//                     cout << " ";
//             }
//             cout << endl;
//         }
//         else
//         {
//             for (int j = 0; j < i - 4; j++)
//             {
//                 cout << " ";
//             }
//             for (int j = 0; j < 20 - 2 * i - 1; j++)
//             {
//                 if (j == 0 || j == 20 - 2 * i - 2)
//                 {
//                     cout << "*";
//                 }
//                 else
//                     cout << " ";
//             }
//             cout << endl;
//         }
//     }
// }
// void ap1()
// {
//     for (int i = 0; i < 10; i++)
//     {
//         if (i < 5)
//         {
//             for (int j = 0; j < i; j++)
//             {
//                 cout << i + 2;
//             }
//             cout << endl;
//         }
//         else
//         {
//             for (int j = 0; j < 10 - i; j++)
//             {
//                 cout << 2 + (10 - i);
//             }
//             cout << endl;
//         }
//     }
// }
// void ape1()
// {
//     for (int i = 0; i < 10; i++)
//     {
//         if (i < 5)
//         {
//             for (int j = 0; j < 2 * i + 1; j++)
//             {
//                 if (j % 2 == 0)
//                 {
//                     cout << i;
//                 }
//                 else
//                     cout << "*";
//             }
//             cout << endl;
//         }
//         else
//         {
//             for (int j = 0; j < 20 - 2 * i; j++)
//             {
//                 if (j % 2 == 0)
//                 {
//                     cout << 5 - (i - 4);
//                 }
//                 else
//                     cout << "*";
//             }
//             cout << endl;
//         }
//     }
// }
// void apes1()
// {
//     int num = 1;
//     for (int i = 0; i < 10; i++)
//     {
//         if (i < 5)
//         {
//             for (int j = 0; j < 2 * i + 1; j++)
//             {
//                 if (j % 2 == 0)
//                 {
//                     cout << num++;
//                 }
//                 else
//                     cout << "*";
//             }
//             cout << endl;
//         }
//         else
//         {

//             for (int j = 0; j < 10 - i; j++)
//             {
//                 if (j % 2 == 0)
//                 {
//                     cout<<num++;

//                 }
//                 else
//                     cout << "*";
//             }
//             num=10-4-j;
//             cout << endl;
//         }
//     }
// }
// int main()
// {
//     apes1();

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{

    int val = 1, dec = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            for (int j = 0; j <= 2 * i + 1; j++)
            {
                if (j % 2 == 0)
                {
                    cout << val++;
                }
                else
                    cout << "*";
            }
            cout << endl;
        }
        else
        {
            dec = 10 - (i);
            for (int j = 0; j < 20 - 2 * i - 1; j++)
            {
                if (j % 2 == 0)
                {
                    cout << val - dec;
                    dec--;
                }
                else
                {
                    cout << "*";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
