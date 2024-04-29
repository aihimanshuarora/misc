#include <bits/stdc++.h>
using namespace std;
int main()
{
    int board[10][10] = {{0}};
    // for (int i = 0; i < 10; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         cout << board[i][j];
    //     }
    // }
    vector<pair<int, int>> changes;
    pair<int, int> ladder;
    ladder.first = 12;
    ladder.second = 34;

    pair<int, int> snake;
    snake.first = 15;
    snake.second = 10;
    changes.push_back(ladder);
    changes.push_back(snake);
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            // cout<<"ok";/
            if (i * 10 + j == changes[0].first || i * 10 + j == changes[1].first)
            {
                i = changes[0].second / 10;
                j = changes[0].second % 10;
                j--;
            }
        }
        count++;
    }
    cout << count;
    return 0;
}
