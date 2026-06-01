#include<bits/stdc++.h>
using namespace std;
double d[2005];
int n,m;
int u,v,w;
int s,t;
int f[2005];
struct node{
    int v;
    double w;
};
vector<node> a[2005];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>u>>v>>w;
        double c=1-(w/100.0);
        a[u].push_back({v,c});
        a[v].push_back({u,c});
    }
    cin>>s>>t;
    // memset(d,-1,sizeof(d));
    for(int i=1;i<=n;i++)
    {
        d[i]=-1;
    }
    d[s]=1;
    for(int i=1;i<=n;i++)
    {
        double mx=-1e9;
        int pos=0;
        for(int j=1;j<=n;j++)
        {
            if(d[j]>mx&&f[j]==0)
            {
                pos=j;
                mx=d[j];
            }
        }
        if(pos==0)
        {
            break;
        }
        f[pos]=1;
        for(auto j:a[pos])
        {
            d[j.v]=max(d[j.v],d[pos]*j.w);
        }
    }
    // cout<<100/d[t];
    // cout<<d[t];
    printf("%.8f",100/d[t]);
    return 0;
}