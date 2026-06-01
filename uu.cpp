#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e6+5;
long long d[MAXN];
long long s[MAXN];
long long q, n, t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n >> q;
    for(int i = 1; i <= n; i++) {
        cin >> d[i];
    }
    sort(d + 1, d + n + 1);
    for(int i = 1; i <= n; i++) {
        s[i] = s[i-1] + d[i] * i;
    }
    
    for(int i = 1; i <= q; i++) {
        cin >> t;
        int pos = upper_bound(s + 1, s + n + 1, t) - s-1;
        cout << pos << '\n';
    }
    
    return 0;
}
