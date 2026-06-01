#include<bits/stdc++.h>
using namespace std;

char a[55][55];
int n, m;
int ans = 1e9;

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n - 2; i++) {
        for(int j = i + 1; j <= n - 1; j++) {
            int cnt = 0;
            for(int o = 1; o <= i; o++) {
                for(int k = 1; k <= m; k++) {
                    if(a[o][k] != 'W') {
                        cnt++;
                    }
                }
            }
            for(int o = i + 1; o <= j; o++) {
                for(int k = 1; k <= m; k++) {
                    if(a[o][k] != 'B') {
                        cnt++;
                    }
                }
            }
            
            for(int o = j + 1; o <= n; o++) {
                for(int k = 1; k <= m; k++) {
                    if(a[o][k] != 'R') {
                        cnt++;
                    }
                }
            }
            
            ans = min(ans, cnt);
        }
    }
    
    cout << ans;
    return 0;
}