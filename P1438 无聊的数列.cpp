#include<bits/stdc++.h>
using namespace std;
long long dis1[400005];
long long dis2[400005];
long long a[100005];
long long x,y,n,m,ooo;
void xf(long long l,long long r,long long id)
{
    long long k1=dis1[id];
    long long k2=dis2[id];
    long long mid=(l+r)/2;
    dis1[id*2]+=k1;
    dis2[id*2]+=k2;
    dis1[id*2+1]+=k1;
    dis2[id*2+1]+=k2;
    dis1[id]=0;
    dis2[id]=0;
}
long long cx(long long L,long long R,long long l,long long r,long long id)
{
    long long ans=0;
    if(L<=l&&r<=R)
    {
        return a[l]+dis1[id]+dis2[id]*l;
    }
    xf(l,r,id);
    long long mid=(l+r)/2;
    if(L<=mid)
    {
        ans+=cx(L,R,l,mid,id*2);
    }
    if(mid+1<=R)
    {
        ans+=cx(L,R,mid+1,r,id*2+1);
    }
    return ans;
}
void add(long long L,long long R,long long l,long long r,long long m,long long c,long long id)
{
    long long mid=(l+r)/2;
    if(L<=l&&r<=R)
    {
        dis1[id]+=c;
        dis2[id]+=m;
        return ;
    }
    xf(l,r,id);
    if(L<=mid)
    {
        add(L,R,l,mid,m,c,id*2);
    }
    if(mid+1<=R)
    {
        add(L,R,mid+1,r,m,c,id*2+1);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(long long i=1;i<=m;i++)
    {
        cin>>ooo;
        if(ooo==1)
        {
            long long k,d;
            cin>>x>>y>>k>>d;
            long long c=k-d*x;
            add(x,y,1,n,d,c,1);
        }else{
            cin>>x;
            cout<<cx(x,x,1,n,1)<<"\n";
        }
    }
    return 0;
}