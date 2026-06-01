#include <bits/stdc++.h>
using namespace std;
long long f[100005];
long long d[100005];
long long d1[100005];
vector<pair<long long, long long>> a[100005];
priority_queue<pair<long long, long long>> q;
long long n, m, u, v, w, s, k;
long long inf = 1e18;
long long x;
int main()
{
    cin >> n >> m >> k;
    for (long long i = 0; i < n; i++)
    {
        d[i] = inf;
        d1[i] = inf;
    }
    for (long long i = 1; i <= m; i++)
    {
        cin >> u >> v >> w;
        a[u].push_back({v, w});
        a[v].push_back({u, w});
    }
    for (long long i = 1; i <= k; i++)
    {
        cin >> x;
        q.push({0, x});
        d[x] = 0;
        d1[x] = 0;
    }
    while (!q.empty())
    {
        auto t = q.top();
        q.pop();
        if (f[t.second])
        {
            continue;
        }
        f[t.second]=1 ;
        for (auto i : a[t.second])
        {
            if (d[i.first] > -t.first + i.second)
            {
                d1[i.first] = d[i.first];
                d[i.first] = -t.first + i.second;
                q.push({-d1[i.first], i.first});
            }
            else if ( d1[i.first] > -t.first + i.second)
            {
                d1[i.first] = -t.first + i.second;
                q.push({-d1[i.first], i.first});
            }
        }
    }
    cout << d1[0];
    return 0;
}