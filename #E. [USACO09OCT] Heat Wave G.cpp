#include<bits/stdc++.h>
using namespace std;
struct node{
    int v,w;
};
vector<node> a[10005];
int d[10005];
int f[10005];
int n,m,s,t,u,v,w;
int inf=0x3f3f3f3f;
int main()
{
    cin>>n>>m>>s>>t;
    for(int i=1;i<=m;i++)
    {
        cin>>u>>v>>w;
        a[u].push_back({v,w});
        a[v].push_back({u,w});
    }
    memset(d,0x3f3f3f3f,sizeof(d));
    d[s]=0;
    for(int i=1;i<=n;i++)
    {
        int mn=1e9;
        int pos=0;
        for(int j=1;j<=n;j++)
        {
            if(d[j]<mn&&f[j]==0)
            {
                mn=d[j];
                pos=j;
            }
        }
        if(pos==0)
        {
            break;
        }
        f[pos]=1;
        for(auto j:a[pos])
        {
            d[j.v]=min(d[j.v],d[pos]+j.w);
        }
    }
    
    return 0;
}