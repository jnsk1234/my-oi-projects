#include<bits/stdc++.h>
using namespace std;
vector<long long> a[1000005];
long long dep[1000005];
long long sz[1000005];
long long dp[1000005];
long long n,u,v,mx=-1e18;
inline void dfs(long long x,long long y)
{
    sz[x] = 1;
    for(long long i:a[x])
    {
        if(i==y)
        {
            continue;
        }
        dep[i]=dep[x]+1;
        dfs(i,x);
        sz[x]+=sz[i];
    }
}
inline void dfs1(long long x,long long y)
{
    for(long long i:a[x])
    {
        if(y==i)
        {
            continue;
        }
        dp[i]=(dp[x]-sz[i]+n-sz[i]);
        dfs1(i,x);
    }
}
int main()
{
      static char buf[1 << 20];
        cin.rdbuf()->pubsetbuf(buf, sizeof(buf));
        ios::sync_with_stdio(false);
        cin.tie(0);
    cin>>n;
    for(long long i=1;i<=n-1;i++)
    {
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    dfs(1,-1);
    for(long long i=1;i<=n;i++)
    {
        dp[1]+=dep[i];
    }
    dfs1(1,-1);
     for(long long i=1;i<=n;i++)
    {
        mx=max(dp[i],mx);
    }
     for(long long i=1;i<=n;i++)
    {
        if(mx==dp[i])
        {
            cout<<i;
            return 0;
        }
    }
    return 0;
}