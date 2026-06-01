#include <bits/stdc++.h>
using namespace std;
long long dp[10005];
long long a[10005], sum[10005];
long long n, m;

int main()
{
    cin >> m;
    while (m--)
    {
        // memset(a, 0, sizeof(a));
        // memset(dp, 0, sizeof(dp));
        cin >> n;
        for (long long i = 1; i <= n; i++)
        {
            cin >> a[i];
            dp[i] = 1;
            sum[i] = 1;
        }
        for (long long i = 2; i <= n; i++)
        {
            for (long long j = i-1; j >= 1; j--)
            {
                if (a[i] >= a[j])
                {
                    if (dp[i] < dp[j] + 1)
                    {
                        dp[i] = dp[j] + 1;
                        sum[i] = sum[j];
                    }
                    else if(dp[i]==dp[j]+1)
                    {
                        if (dp[i] == dp[j] + 1)
                        {
                            sum[i]++;
                        }
                    }
                }
            }
        }
        long long ans = 0, mx = 0;
        for (long long i = 1; i <= n; i++)
        {
            if (dp[i] > mx)
            {
                mx = dp[i];
                ans = sum[i];
            }
            else if(dp[i]==mx)
            {
                ans += sum[i];
            }
        }
        cout << mx << ' ' << ans << endl;
    }
    return 0;
}