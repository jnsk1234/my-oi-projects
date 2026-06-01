#include<bits/stdc++.h>
using namespace std;
vector <long long> a[100005];
long long dp[1000005];
long long n;
long long u,v,ans;
long long mx,mxx,mxxx;
void dfs(int k,int b,int fa)
{
    dp[k]=0;
    for(auto i:a[k])
    {
        if(i==fa) continue;
        dfs(i,b+1,k);
        if(ans<=dp[i]+dp[k]+1)
        {
            ans=dp[i]+dp[k]+1;
        }
        dp[k]=max(dp[i]+1,dp[k]);
    }
}
int main()
{
    cin>>n;
    for(long long i=1;i<=n-1;i++)
    {
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    dfs(1,0,-1);
    // dfs(mxx,0,-1);
    cout<<ans;
    return 0;
}