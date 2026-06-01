#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e6+5;
struct Problem {
    long long d;
    long long cost;
} p[MAXN];
long long s[MAXN];
long long q, n, t;

bool cmp(const Problem &a, const Problem &b) {
    return a.d * b.cost > b.d * a.cost; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n >> q;
    for(int i = 1; i <= n; i++) {
        cin >> p[i].d;
        p[i].cost = i;
    }
    

    sort(p + 1, p + n + 1, cmp);
    

    s[1] = p[1].d * 1;
    for(int i = 2; i <= n; i++) {
        s[i] = s[i-1] + p[i].d * i;
    }
    
    for(int i = 1; i <= q; i++) {
        cin >> t;
        int pos = lower_bound(s + 1, s + n + 1, t) - s;
        if(s[pos] > t) pos--;
        cout << pos << '\n';
    }
    
    return 0;
}
