#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a,b;
long long fa[200005];
long long t[200005];
set<long long > s;
long long ans;
long long find(long long x)
{
    if(fa[x]==x) return x;
    return fa[x]=find(fa[x]);
}
void h(long long x,long long y)
{
    long long xx=find(x);
    long long yy=find(y);
    if(xx!=yy)
    {
        fa[yy]=xx;
        t[xx]+=t[yy];
    }
}
int main()
{
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
    {
        fa[i]=i;
        t[i]=1;
    }
    for(long long i=1;i<=m;i++)
    {
        cin>>a>>b;
        h(a,b);
    }
    for(long long i=1;i<=n;i++)
    {      
        if(fa[i]==i)
            ans+=(((t[i])*(t[i]-1))/2);
    }
    ans-=m;
    cout<<ans;
    return 0;
}