#include<bits/stdc++.h>
using namespace std;
long long f[100005];
long long d[100005];
vector<pair<long long,long long>> a[100005];
priority_queue<pair<long long,long long>> q;
long long n,m,u,v,w,s;
long long inf=1e18;
int main()
{
    cin>>n>>m>>s;
    for(long long i=1;i<=m;i++)
    {
        cin>>u>>v>>w;
        a[u].push_back({v,w});
    }
    for(long long i=2;i<=n;i++)
    {
        d[i]=inf;
    }
    q.push({0,s});
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
            d[i.first]=min(d[i.first],d[t.second]+i.second);
            q.push({-d[i.first],i.first});
        }
    }
    for(long long i=1;i<=n;i++)
    {
        if(d[i]==1e9)
        {
            cout<<2147483647<<" ";
        }else{
            cout<<d[i]<<' ';
        }
    }
    return 0;
}