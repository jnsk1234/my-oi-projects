#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long s,t;
long long u,v,w;
struct node
{
    long long v,w;
};
long long d[10005];
long long ooo=(2e31)-1;
long long f[10005];
vector<node> a[10015];
long long inf=0x3f3f3f3f;
int main()
{
    cin>>n>>m>>s;
    for(long long i=1;i<=m;i++)
    {
        cin>>u>>v>>w;
        a[u].push_back({v,w});
    }
    memset(d,0x3f3f3f3f,sizeof(d));
    d[s]=0;
    for(long long i=1;i<n;i++)
    {
        long long mn=inf,pos=0;
        for(long long j=1;j<=n;j++)
        {
            if(f[j]==0&&mn>d[j])
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
            if(d[j.v]>d[pos]+j.w)
            {
                d[j.v]=d[pos]+j.w;
            }
        }
    }
    for(long long i=1;i<=n;i++)
    {
        if(d[i]==inf)
        {
            cout<<ooo<<' ';
        }
        cout<<d[i]<<' ';
    }
    // if(d[n]==inf)
    // {
    //     cout<<-1;
    //     return 0;
    // }
    // cout<<d[n];
    return 0;
}