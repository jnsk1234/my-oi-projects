#include<bits/stdc++.h>
using namespace std;
long long n,m,x,y,k,ooo;
long long a[100005];
long long tr[400005];
long long dis[400005];
inline void xf(long long l,long long r,long long id)
{
    long long k=dis[id];
    long long mid=(l+r)/2;
    tr[id*2]+=(mid-l+1)*k;
    tr[id*2+1]+=(r-(mid+1)+1)*k;

    dis[id*2]+=k;
    dis[id*2+1]+=k;

    dis[id]=0;
}
inline void mtr(long long l,long long r,long long id)
{
    long long mid=(l+r)/2;
    if(l==r)
    {
        tr[id]=a[l];
        return ;
    }
    mtr(l,mid,id*2);
    mtr(mid+1,r,id*2+1);
    tr[id]=tr[id*2]+tr[id*2+1];
}
// L,R 目标 l,r操作
inline long long cx(long long L,long long R,long long l,long long r,long long id)
{
    long long ans=0;
    long long mid=(l+r)/2;
    if(L<=l&&r<=R)
    {
        return tr[id];
    }
    xf(l,r,id);
    if(L<=mid)
    {
        ans+=cx(L,R,l,mid,id*2);
    }
    if(mid+1<=R)
    {
        ans+=(cx(L,R,mid+1,r,id*2+1));
    }
    return ans;
}

inline void add(long long L,long long R,long long l,long long r,long long k,long long id)
{
    long long mid=(l+r)/2;
    if(L<=l&&r<=R)
    {
        dis[id]+=k;
        tr[id]+=((r-l+1)*k);
        return;
    }
    xf(l,r,id);
    if(L<=mid)
    {
        add(L,R,l,mid,k,id*2);
    }
    if(mid+1<=R)
    {
        add(L,R,mid+1,r,k,id*2+1);
    }
    tr[id]=tr[id*2]+tr[id*2+1];
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
    mtr(1,n,1);
    for(long long i=1;i<=m;i++)
    {
        cin>>ooo;
        if(ooo==1)
        {
            long long k=0;
            cin>>x>>y>>k;
            add(x,y,1,n,k,1);
        }
        if(ooo==2)
        {
            cin>>x>>y; 
            cout<<cx(x,y,1,n,1)<<"\n";
        }
    }    
    return 0;
}