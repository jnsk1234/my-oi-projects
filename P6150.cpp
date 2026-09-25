#include<bits/stdc++.h>
using namespace std;
vector<int> a[2505];
int u,v;
int dp[2505];
int n;
int ans;
int p[2505];
void dfs(int x,int fa)
{
    for(int i:a[x])
    {
        if(i==fa)
        {
            continue;
        }
        dfs(i,x);
        dp[x]=(dp[x]-dp[i]+12)%12;
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i];
    }
    for(int i=1;i<=n-1;i++)
    {
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    } 
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            dp[j]=p[j];
        }
        dfs(i,-1);
        if (dp[i] == 0 || dp[i] == 1) ans++;
    }
    cout<<ans;
    return 0;
}