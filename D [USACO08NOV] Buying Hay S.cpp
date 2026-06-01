#include<bits/stdc++.h>
using namespace std;
long long m,n,p,t;
long long dp[100005];
long long ans=1e9;
int main()
{
    for(long long i=1;i<=100000;i++)
    {
        dp[i]=1e9;
    }
    cin>>n>>m;
    dp[0]=0;
    for(long long i=1;i<=n;i++)
    {
        cin>>p>>t;
        for(long long j=p;j<=m*2;j++)
        {
            dp[j]=min(dp[j],dp[j-p]+t);
        }
    }
    // cout<<dp[m];
    for(int i=m;i<=m*2;i++)
    {
        ans=min(ans,dp[i]);
    }
    cout<<ans;
    return 0;
}