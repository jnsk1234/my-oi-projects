#include<bits/stdc++.h>
using namespace std;
vector<long long> a[100005];
long long dp[100005][5];
long long p[100005];
long long x,y,k,c,b,n,ans;
long long mod=1e9+7;
void dfs(long long x,long long y)
{
    if(p[x]!=0)
    {
        dp[x][1]=0;
        dp[x][2]=0;
        dp[x][3]=0;
        dp[x][p[x]]=1;

    }
    else{
        dp[x][1]=1;
        dp[x][2]=1;
        dp[x][3]=1;
    }
    for(auto i:a[x])
    {
        if(i==y)
        {continue;}
        dfs(i,x);
        
        dp[x][1]=(dp[x][1]*((dp[i][2]+dp[i][3])%mod))%mod;
        dp[x][2]=(dp[x][2]*((dp[i][1]+dp[i][3])%mod))%mod;
        dp[x][3]=(dp[x][3]*((dp[i][2]+dp[i][1])%mod))%mod;
    }
    

}
int main()
{
    cin>>n>>k;
    for(long long i=1;i<=n-1;i++)
    {
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for(long long i=1;i<=k;i++)
    {
        cin>>b>>c;
        p[b]=c;
    }
    dfs(1,-1);
    cout<<(dp[1][1]+dp[1][2]+dp[1][3])%mod;
    return 0;
}                          