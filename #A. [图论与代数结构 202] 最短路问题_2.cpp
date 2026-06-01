#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long u,v,w;
struct node{
    long long v,w;
};
vector<node> a[300005];
priority_queue<pair<long long,long long>> q;
long long f[300005];
long long d[300005];
int main()
{
    cin>>n>>m;
    for(long long i=1;i<=m;i++)
    {
        cin>>u>>v>>w;
        a[u].push_back({v,w});
    }
    q.push({0,1});
    for(long long i=1;i<=n;i++)
    {
        d[i]=1e18;
    }
    d[1]=0;
    while(!q.empty())
    {
        auto h=q.top();
        q.pop();
        long long to=h.second;
        if(f[to]==1)
        {
            continue;
        }
        f[to]=1;
        for(auto j:a[to])
        {
            if(d[j.v]>d[to]+j.w)
            {
                d[j.v]=d[to]+j.w;
                q.push({-d[j.v],j.v});
            }
        }
    }
    for(long long i=1;i<=n;i++)
    {
        if(d[i]==1e18)
        {
            cout<<-1<<' ';
        }else{
            cout<<d[i]<< ' ';
        }
    }
    return 0;
}