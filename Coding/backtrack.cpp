#include <bits/stdc++.h>
using namespace std;
bool ok(int maze[3][3], int s, int e, int visited[3][3], int n)
{
    if (s < 0 || s > n || e < 0 || e > n)
    {
        return false;
    }
    if (maze[s][e] == 0)
    {
        return false;
    }
    if (visited[s][e] == 1)
        return 0;
    if (s == e && s == 2)
    {
        visited[s][e] = true;
        return true;
    }
    visited[s][e] = true;
    // check right
    if (ok(maze, s, e + 1, visited, n))
        return true;
    if (ok(maze, s, e - 1, visited, n))
        return true;
    if (ok(maze, s + 1, e, visited, n))
        return true;
    if (ok(maze, s - 1, e, visited, n))
        return true;
    visited[s][e] = false;
    return false;
}
int main()
{

    int maze[3][3] = {
        {1, 1, 0},
        {0, 1, 0},
        {0, 1, 1}};
    int visited[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    cout << ok(maze, 0, 0, visited, 3) << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << visited[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}