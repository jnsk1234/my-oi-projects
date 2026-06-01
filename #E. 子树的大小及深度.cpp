#include<bits/stdc++.h>
using namespace std;
int fa[105];
vector<int> a[105];
int o[105];
int n;
int u,v,ans;
int gs;
int cs;
void dfs(int x,int d)
{
    gs++;
    cs=d;
    ans=max(ans,d);
    if(a[x].size()==0)
    {
        return ;
    }
    else{
        for(int i:a[x])
        {
            o[i]=o[x]+1;
            dfs(i,d+1);
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        cin>>u>>v; 
        if(fa[v]==0)
        {
            fa[v]=u;
        }
        else{
            fa[u]=v;
        }
    }
    for(int i=1;i<=n;i++)
    {
        a[fa[i]].push_back(i);
    }
    dfs(1,1);
    for(int i=1;i<=n;i++)
    {
        gs=0;
        cs=0;
        dfs(i,1);
        cout<<gs<<' '<<o[i]+1<<endl;
    }
    return 0;
}