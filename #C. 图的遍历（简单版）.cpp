#include<bits/stdc++.h>
using namespace std;
int a[100005][100005];
int f[100005];
int u,v;
int n,m;
int ans[100005];
void dfs(int x,int y)
{
    f[x]=1;
    ans[y]=max(ans[y],x);
    for(int i=1;i<=n;i++)
    {
        if(a[x][i]!=0&&f[i]==0)
        {
            dfs(i,y);
        }
    }
}
int main()
{
    memset(ans,-1,sizeof(ans));
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>u>>v;
        a[u][v]=1;
    }
    for(int i=1;i<=n;i++)
    {
        memset(f,0,sizeof(f));
        dfs(i,i);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<' ';
    }
    return 0;
}