#include<bits/stdc++.h>
using namespace std;
long long n,m,u,v,w,ans;
long long d1[1000005];
long long d2[1000005];
long long f1[1000005];
long long f2[1000005];
struct node{
    long long v,w;
};
vector<node> a[1000005];
vector<node> b[1000005];
priority_queue<pair<long long,long long>> q1;
priority_queue<pair<long long,long long>> q2;
int main()
{
    cin>>n>>m;
    for(long long i=1;i<=m;i++)
    {
        cin>>u>>v>>w;
        a[u].push_back({v,w});
        b[v].push_back({u,w});
    }
    for(long long i=1;i<=n;i++)
    {
        d1[i]=1e18;
    }
    d1[1]=0;
    q1.push({0,1});
    while(!q1.empty())
    {
        auto h=q1.top();
        q1.pop();
        long long to=h.second;
        if(f1[to]==1)
        {
            continue;
        }
        f1[to]=1;
        for(auto j:a[to])
        {
            if(d1[j.v]>d1[to]+j.w)
            {
                d1[j.v]=d1[to]+j.w;
                q1.push({-d1[j.v],j.v});
            }
        }
    }
    for(long long i=1;i<=n;i++)
    {
        d2[i]=1e18;
    }
    d2[1]=0;
    q2.push({0,1});
    while(!q2.empty())
    {
        auto h=q2.top();
        q2.pop();
        long long to=h.second;
        if(f2[to]==1)
        {
            continue;
        }
        f2[to]=1;
        for(auto j:b[to])
        {
            if(d2[j.v]>d2[to]+j.w)
            {
                d2[j.v]=d2[to]+j.w;
                q2.push({-d2[j.v],j.v});
            }
        }
    }
    for(long long i=1;i<=n;i++) ans+=d1[i];
    for(long long i=1;i<=n;i++) ans+=d2[i];
    cout<<ans;
    return 0;
}