#include<bits/stdc++.h>
using namespace std;
int n,m,s,u,v,x,y;
vector<int> a[500005];
int fa[500005];
int dis[500005];
int st[500005][20];
inline void dfs(long long x,long long faa)
{
    for(long long i:a[x])
    {
        if(i==faa)
        {
            continue;
        }
        fa[i]=x;
        dis[i]=dis[fa[i]]+1;
        dfs(i,x);
    }
}
inline void LCA(int x,int y)
{
    if(dis[x]>dis[y]) swap(x,y);
    int k=log2(n);
    for(int i=k;i>=0;i--)
    {
        if(dis[st[y][i]]>=dis[x])
        {
            y=st[y][i];
        }
    }
    if(x==y)
    {
        cout<<x<<"\n";
        return ;
    }
    for(int i=k;i>=0;i--)
    {
        if(st[y][i]!=st[x][i])
        {
            y=st[y][i];
            x=st[x][i];
        }
    }
    cout<<st[x][0]<<"\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m>>s;
    for(int i=1;i<=n-1;i++)
    {
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    dis[s]=1;
    dfs(s,0);
    for(int i=1;i<=n;i++)
    {
        st[i][0]=fa[i];
    }
    for(int i=1;i<=log2(n);i++)
    {
        for(int j=1;j<=n;j++)
        {
            st[j][i]=st[st[j][i-1]][i-1];
        }
    }
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        LCA(x,y);
    }    
    return 0;
}