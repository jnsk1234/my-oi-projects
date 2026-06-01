#include<bits/stdc++.h>
using namespace std;
vector<long long> a[100005];
long long s[100005];
long long dp[100005][2];
long long u,v,n;
void dfs(long long x,long long y)
{
    dp[x][1]=s[x];
    for(long long i:a[x])
    {
        if(i==y)
        {
            continue;
        }
        dfs(i,x);
        dp[x][0]+=dp[i][1];
        dp[x][1]+=min(dp[i][0],dp[i][1]);
    }
}
int main()
{
    // memset(dp,sizeof(dp),0x3f);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    for(long long i=1;i<=n-1;i++)
    {
        cin>>u>>v;
        a[v].push_back(u);
        a[u].push_back(v);
    }
    dfs(1,-1);
    cout<<min(dp[1][1],dp[1][0]);
    return 0;
}