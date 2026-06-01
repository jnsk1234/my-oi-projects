#include <bits/stdc++.h>
using namespace std;
int dp[40005];
int n;
int main()
{
    cin >> n;
    dp[0] = 1;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = i; j <= n; j++)
        {
            dp[j] += dp[j - i];
        }
    }
    cout << dp[n];
    return 0;
}