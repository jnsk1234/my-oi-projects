#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long u,v,w;
struct node{
    long long v,w;
};
// vector<node> a[2005];
priority_queue<pair<long long,long long>> q;
long long a[2005][2005];
long long d[2005];
long long f[2005];
long long ans[2005];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j) a[i][j]=0;
            else a[i][j]=1e9;
        }
    }
    for(long long i=1;i<=m;i++)
    {
        cin>>u>>v>>w;
        // a[u][v]=w;
        a[u][v]=min(a[u][v],w);
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
        for(int j=1;j<=n;j++)
        {
            if(!f[j]){
                if(d[j]==d[to]+a[to][j])
                {
                    long long oo=ans[j]+ans[to];
                    ans[j]=oo;
                }
                if(d[j]>d[to]+a[to][j])
                {
                    d[j]=d[to]+a[to][j];
                    q.push({-d[j],j});
                    ans[j]=ans[to];
                }
            }
        }
    }
    if(d[n]==1e9)
    {
        cout<<"No answer";
        return 0;
    }
    cout<<d[n]<<' '<<ans[n];
    return 0;
}