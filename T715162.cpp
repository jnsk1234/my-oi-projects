#include <bits/stdc++.h>
using namespace std;
int n, m;
int aa[15][15][15], x[15], y[15];
int ans = 1e9;
int main()
{
    cin >> m >> n;
    for (int t = 1; t <= m; t++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> aa[t][i][j];
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> y[i];
    }
    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= n; b++)
        {
            if (a == b)
            {
                continue;
            }
            for (int c = 1; c <= n; c++)
            {
                if (b == c || a == c)
                {
                    continue;
                }
                for (int t1 = 1; t1 <= m; t1++)
                {
                    for (int t2 = 1; t2 <= m; t2++)
                    {
                        if (aa[t1][a][b] == -1)
                            continue;
                        if (aa[t2][b][c] == -1)
                            continue;
                        if (t2 > t1)
                            ans = min(ans, aa[t1][a][b] + aa[t2][b][c] + x[a] + y[c]);
                    }
                }
            }
        }
    }
    cout << ans;
    return 0;
}