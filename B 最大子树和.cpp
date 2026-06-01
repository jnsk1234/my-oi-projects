#include<bits/stdc++.h>
using namespace std;
vector <long long> a[100005];
long long dp[1000005];
long long s[1000005];
long long n,u,v,ans=-1e18;
void dfs(long long k,long long fa)
{
    for(long long i:a[k])
    {
        if(i==fa)
        {
            continue;
        }
        dfs(i,k);
        dp[k]+=max(0ll,dp[i]);
    }
}
int main() 
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>dp[i];
    }
    for(long long i=1;i<=n-1;i++)
    {
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    dfs(1,-1);
    for(long long i=1;i<=n;i++)
    {
        ans=max(ans,dp[i]);
    }
    cout<<ans;
    return 0;
}