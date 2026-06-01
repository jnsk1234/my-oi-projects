#include<bits/stdc++.h>
using namespace std;
long long f[100005];
long long d[100005];
long long d1[100005];
vector<pair<long long,long long>> a[100005];
priority_queue<pair<long long,long long>> q;
long long n,m,u,v,w,s;
long long inf=1e9;
int main()
{
    cin>>n>>m;
    for(long long i=1;i<=m;i++)
    {
        cin>>u>>v>>w;
        a[u].push_back({v,w});
        a[v].push_back({u,w});
    }
    for(long long i=2;i<=n;i++)
    {
        d[i]=inf;
        d1[i]=inf;
    }
    d[1]=0;
    d1[1]=inf;
    q.push({0,1});
    while(!q.empty())
    {
        auto t=q.top();
        q.pop();
        if(-t.first > d1[t.second])
        {
            continue;
        }
        f[t.second]++;
        for(auto i:a[t.second])
        {
            if(d[i.first]>-t.first+i.second)
            {
                d1[i.first]=d[i.first];
                d[i.first]=-t.first+i.second;
                q.push({-d[i.first],i.first});
            }
            else if(d[i.first]<-t.first+i.second&&d1[i.first]>-t.first+i.second)
            {
                d1[i.first]=-t.first+i.second;
                q.push({-d1[i.first],i.first});
            }
        }
    }
    // for(long long i=1;i<=n;i++)
    // {
    //     cout<<d1[i]<<' ';
    // }
    cout<<d1[n];
    return 0;
}