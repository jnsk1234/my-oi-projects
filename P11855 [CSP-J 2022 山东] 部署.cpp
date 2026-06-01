#include <bits/stdc++.h>
using namespace std;
vector<long long> a[1000005];
long long b1[1000005];
long long b2[1000005];
long long s[1000005], n, u, v, m, op, x, y, q;
void dfs(long long x, int fa)
{
    s[fa] += b2[x];
    for (long long i : a[x])
    {
        if (i != fa)
        {
            b1[i] += b1[x];
            s[i] += b1[x] + b2[x];
            dfs(i, x);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> s[i];
    }
    for (long long i = 1; i <= n - 1; i++)
    {
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    cin >> m;
    for (long long i = 1; i <= m; i++)
    {
        cin >> op >> x >> y;
        if (op == 1)
        {
            b1[x] += y;
            s[x] += y;
        }
        if (op == 2)
        {
            b2[x] += y;
            s[x] += y;
        }
    }
    dfs(1, 0);
    cin >> q;
    for (long long i = 1; i <= q; i++)
    {
        cin >> x;
        cout << s[x] << "\n";
    }
    return 0;
}