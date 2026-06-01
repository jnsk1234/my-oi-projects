#include<bits/stdc++.h>
using namespace std;
struct node{
    long long v,w;
};
priority_queue<pair<int,int>> q;
vector<node> a[2005];
long long d[2005];
long long f[2006];
long long n,m,u,v,w;
int main()
{
    cin>>n>>m;
    for(long long i=1;i<=m;i++)
    {
        cin>>u>>v>>w;
        a[u].push_back({v,w});
        a[v].push_back({u,w});
    }
    for(long long i=1;i<=n;i++)
    {
        d[i]=1e9;
    }
    d[1]=0;
    q.push({0,1});
    while(!q.empty())
    {
        auto h=q.top();
        q.pop();
        int to=h.second;
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
    // for(long long i=1;i<n;i++)
    // {
    //     long long mn=1e9;
    //     long long pos=0;
    //     for(long long j=1;j<=n;j++)
    //     {
    //         if(f[j]==0&&d[j]<mn);
    //         {
    //             mn=d[j];
    //             pos=j;
    //         }
    //     }
    //     if(pos==0)
    //         {
    //             break;
    //         }
    //         f[pos]=1;
    //         for(auto j:a[pos])
    //         {
    //             if(d[j.v]>d[pos]+j.w)
    //             {
    //                 d[j.v]=d[pos]+j.w;
    //                 q.push({d[j.v],j.v});
    //             }
    //         }
    // }
    if(d[n]==1e9)
    {
        cout<<-1;
    }else{
        cout<<d[n];
    }
    return 0;
}