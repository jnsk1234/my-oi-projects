#include<bits/stdc++.h>
using namespace std;
vector<long long>a[50005];
long long x,y,n,ans1,ans2=1e9;
long long dp1[50005];
long long dp2[50005];
long long dp[50005];
set<long long>s;

void dfs1(long long x,long long fa)
{
    dp1[x]=1;
    for(long long i:a[x])
    {
        if(i==fa)
        {
            continue;
        }
        dfs1(i,x);
        dp1[x]+=dp1[i];
        dp2[x]=max(dp2[x],dp1[i]);
    }
    dp2[x]=max(dp2[x],(n-dp1[x]));
    ans2=min(ans2,dp2[x]);
}
void dfs2(long long x,long long fa,long long dep)
{
    for(long long i:a[x])
    {
        if(i==fa)
        {
            continue;
        }
        dfs2(i,x,dep+1);
        dp[x]+=(dep+dp[i]);
    }
}
int main()
{

    cin>>n;
    for(long long i=1;i<=n-1;i++)
    {
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    dfs1(1,-1);
    for(long long i=1;i<=n;i++)
    {
        if(dp2[i]==ans2)
        {
            ans1=i;
            break;
        }
    }
    dfs2(ans1,-1,1);
    
    cout<<ans1<<' '<<dp[ans1];
    return 0;
}