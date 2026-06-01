#include<bits/stdc++.h>
using namespace std;
long long n,ans,m,p[100005],a[100005],b[100005],c[100005],d[100005];
int main()
{
    cin>>n>>m;
    long long x,y;
    cin>>x;
    for(long long i=2;i<=m;i++){
        cin>>y;
        d[min(x,y)]++;
        d[max(x,y)]--;
        x=y;
    }
    for(long long i=1;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        d[i]+=d[i-1];
        ans+=min(a[i]*d[i],c[i]+b[i]*d[i]);
    }
    // for(long long i=1;i<=m;i++)
    // {
    //     d[i]+=d[i-1];
    // }
    // for(int i=1;i<=m;i++)
    // {
    //     cout<<an[i]<<' ';
    // }

    // for(int i=1;i<=m;i++)
    // {
    //     cout<<(a[i]*an[i],c[i]+b[i]*an[i])<<' ';
    // }
    // for(long long i=1;i<=m;i++)
    // {
    //     ans+=min(a[i]*d[i],c[i]+b[i]*d[i]);
    // }
    cout<<ans;
    return 0;
}