#include <bits/stdc++.h>
using namespace std;

int a[5][5];
bool flag = false;

bool c(int x, int y, int n)
{
    for (int j = 1; j <= 4; j++)
    {
        if (a[x][j] == n)
            return false;
    }
    for (int i = 1; i <= 4; i++)
    {
        if (a[i][y] == n)
            return false;
    }
    int s1 = ((x - 1) / 2) * 2 + 1;
    int s2 = ((y - 1) / 2) * 2 + 1;
    for (int i = s1; i <= s1 + 1; i++)
    {
        for (int j = s2; j <= s2 + 1; j++)
        {
            if (a[i][j] == n)
                return false;
        }
    }
    return true;
}

void dfs(int x, int y)
{
    if (flag)
        return;

    if (x > 4)
    {
        cout << a[1][1] << ' ' << a[1][2] << ' ' << a[1][3] << ' ' << a[1][4] << endl;
        cout << a[2][1] << ' ' << a[2][2] << ' ' << a[2][3] << ' ' << a[2][4] << endl;
        cout << a[3][1] << ' ' << a[3][2] << ' ' << a[3][3] << ' ' << a[3][4] << endl;
        cout << a[4][1] << ' ' << a[4][2] << ' ' << a[4][3] << ' ' << a[4][4] << endl;
        flag = true;
        return;
    }

    int nxx = x, nxy = y + 1;
    if (nxy > 4)
    {
        nxx = x + 1;
        nxy = 1;
    }

    if (a[x][y] != 0)
    {
        dfs(nxx, nxy);
        return;
    }
    for (int n = 1; n <= 4; n++)
    {
        if (c(x, y, n))
        {
            a[x][y] = n;
            dfs(nxx, nxy);
            a[x][y] = 0;
        }
    }
}

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cin >> a[i][j];
        }
    }
    dfs(1, 1);
    return 0;
}