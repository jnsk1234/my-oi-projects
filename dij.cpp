#include<bits/stdc++.h>
using namespace std;
struct node{
    int v,w;
};
vector<node> a[1005];
priority_queue<pair<int,int>> q;
int d[1005],f[1005];
int u,v,n,m,w;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>u>>v>>w;
        a[u].push_back({v,w});
    }
    for(int i=1;i<=n;i++)
    {
        d[i]=1e9;
    }
    d[1]=0;
    q.push({0,1});
    // f[1]=1;
    while(!q.empty())
    {
        auto t=q.top();
        q.pop();
        if(f[t.second]==1)
        {
            continue;
        }
        f[t.second]=1;
        for(auto i:a[t.second])
        {
            d[i.v]=min(d[i.v],d[t.second]+i.w);
            q.push({-d[i.v],i.v});
        }
    }
    cout<<d[n];
    return 0;
}