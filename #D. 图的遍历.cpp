#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> c(100005);
int n,m;
int u,v;
int ans[100005];
int f[100005];
void dfs(int x,int y)
{
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<ans[i]<<' ';
    // }
    // cout<<endl;
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<f[i]<<' ';
    // }
    // cout<<endl;
    if(f[x])
    {
        return ;
    }
    f[x]=y;
    // ans[x]=y;
    for(auto i:c[x])
    {
        if(f[i]==0)
        {
            dfs(i,y);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>u>>v;
        c[v].push_back(u);
    }
    for(int i=n;i>=1;i--)
    {
        dfs(i,i);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<f[i]<<' ';
    }
    return 0;
}