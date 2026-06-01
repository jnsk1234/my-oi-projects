#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<vector<int>> g(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> g[i][j];
        }
    }
    
    int fullmask = (1 << n) - 1;
    vector<vector<int>> dp(1 << n, vector<int>(n, 0));
    dp[1][0] = 1;  // 固定起点为0
    
    for (int mask = 0; mask < (1 << n); mask++) {
        for (int last = 0; last < n; last++) {
            if (!dp[mask][last]) continue;
            
            // 如果还没排满所有人，继续安排下一个
            if (mask != fullmask) {
                for (int nxt = 0; nxt < n; nxt++) {
                    if ((mask >> nxt) & 1) continue;  // 已经排过了
                    if (g[last][nxt] == 1) {
                        dp[mask | (1 << nxt)][nxt] = 
                            (dp[mask | (1 << nxt)][nxt] + dp[mask][last]) % MOD;
                    }
                }
            }
        }
    }
    
    int ans = 0;
    // 检查所有排满的情况，看最后一个人能否回到起点0
    for (int last = 0; last < n; last++) {
        if (g[last][0] == 1) {
            ans = (ans + dp[fullmask][last]) % MOD;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}