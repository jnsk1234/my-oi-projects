#include <bits/stdc++.h>
using namespace std;
int f[205][205];
int dp[205];
int a[205], n, pos, u, v, r[205], ans;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    while (true)
    {
        cin >> u >> v;
        if (u == 0 && v == 0)
        {
            break;
        }
        f[u][v] = 1;
    }
    // smemset(dp,0x3f,sizeof(dp));
    dp[n] = a[n];
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (f[i][j] && dp[i] < dp[j])
            {
                dp[i] = dp[j];
                r[i] = j;
            }
        }
        dp[i] += a[i];
    }
    for (int i = n - 1; i >= 1; i--)
    {
        if(ans<dp[i])
        {
            ans = max(dp[i], ans);
            pos = i;
        }
    }
    cout << pos;
    pos = r[pos];
    while (pos)
    {
        cout << "-" << pos;
        pos = r[pos];
    }
    cout << endl;
    cout << ans;
    return 0;
}