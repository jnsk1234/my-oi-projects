#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long u,v,w;
struct node{
    long long v,w;
};
vector<node> a[1000005];
priority_queue<pair<long long,long long>> q;
long long d[1000005];
long long f[1000005];
long long ans[1000005];
int main()
{
    cin>>n>>m;
    for(long long i=1;i<=m;i++)
    {
        cin>>u>>v;
        a[u].push_back({v,1});
        a[v].push_back({u,1});
    }
    for(long long i=1;i<=n;i++)
    {
        d[i]=1e9;
    }
    ans[1]=1;
    q.push({0,1});
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
            if(d[j.v]==d[to]+j.w)
            {
                long long oo=ans[j.v]+ans[to];
                oo%=100003;
                ans[j.v]=oo;
            }
            if(d[j.v]>d[to]+j.w)
            {
                d[j.v]=d[to]+j.w;
                q.push({-d[j.v],j.v});
                ans[j.v]=ans[to]%100003;
            }
            // if(d[j.v]==d[to]+j.w)
            // {
            //     ans[j.v]+=ans[to];
            // }
        }
    }
    for(long long i=1;i<=n;i++)
    {
        if(ans[i]==1e18)
        {
            cout<<0<<"\n";
        }
        else
            cout<<ans[i]%100003<<"\n";
    }
    return 0;
}