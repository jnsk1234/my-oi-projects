#include<bits/stdc++.h>
using namespace std;
int d[1005];
int a[1005];
int n,root,m;
int u,v;
int mx;
int ans;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>u>>v;
        d[v]=u;
    }
    for(int i=1;i<=n;i++)
    {
        if(d[i]==0)
        {
            cout<<i<<endl;
        }
    }
    for(int i=1;i<=n;i++)
    {
        a[d[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(mx<a[i])
        {
            mx=a[i];
            ans=i;
        }
    }
    cout<<ans<<endl;
    for(int i=1;i<=n;i++)
    {
        if(d[i]==ans)
        {
            cout<<i<<' ';
        }
    }
    return 0;
}