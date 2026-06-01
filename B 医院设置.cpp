#include<bits/stdc++.h>
using namespace std;
long long n,w,u,v,ans=1e9;
vector<long long>a[105];
long long wi[105];
long long dp[105];
void dfs(long long x,long long fa,long long dep)
{
    for(long long i:a[x])
    {
        if(i==fa)
        {
            continue;
        }
        dfs(i,x,dep+1);
        dp[x]+=((dep*wi[i])+dp[i]);
    }
}
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>w>>u>>v;
        wi[i]=w;
        if(u!=0)
        {
            a[i].push_back(u);
            a[u].push_back(i);
        }
        if(v!=0)
        {
            a[i].push_back(v);
            a[v].push_back(i);
        }
    }
    for(long long i=1;i<=n;i++)
    {
        memset(dp,0,sizeof(dp));
        dfs(i,-1,1);
        ans=min(ans,dp[i]);
    }
    cout<<ans;
    return 0;
}