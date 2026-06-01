#include<bits/stdc++.h>
using namespace std;
long long x,y,n,q,op,xx;
long long tr[4000005];
long long dis1[4000005];
long long dis2[4000005];
long long a[1000005];
long long INF=1e18;
inline void xf(long long l,long long r,long long id)
{
    long long k1=dis1[id];
    long long k2=dis2[id];
    long long mis=(l+r)/2;

    if(dis1[id]!=INF)
    {
        tr[id*2]=dis1[id];
        dis1[id*2]=dis1[id];
        dis2[id*2]=0;

        dis1[id*2+1]=dis1[id];
        tr[id*2+1]=dis1[id];
        dis2[id*2+1]=0;

        dis1[id]=INF;
    }
    
    if(dis2[id]!=0)
    {
        tr[id*2]+=dis2[id];
        if(dis1[id*2]!=INF)
        {
            dis1[id*2]+=dis2[id];
        }else{
            dis2[id*2]+=dis2[id];
        }

        tr[id*2+1]+=dis2[id];
        if(dis1[id*2+1]!=INF)
        {
            dis1[id*2+1]+=dis2[id];
        }else{
            dis2[id*2+1]+=dis2[id];
        }
        dis2[id]=0;
    }
}
inline void mtr(long long l,long long r,long long id)
{
    dis1[id] = INF; 
    dis2[id] = 0; 
    long long mid=(l+r)/2;
    if(l==r)
    {
        tr[id]=a[l];
        return;
    }
    mtr(l,mid,id*2);
    mtr(mid+1,r,id*2+1);
    tr[id]=max(tr[id*2],tr[id*2+1]);
}


inline long long cx(long long L,long long R,long long l,long long r,long long id)
{
    long long ans=-INF;
    long long mid=(l+r)/2;
    if(L<=l&&r<=R)
    {
        return tr[id];
    }
    xf(l,r,id);
    if(L<=mid)
    {
        ans=max(ans,cx(L,R,l,mid,id*2));
    }
    if(mid+1<=R)
    {
        ans=max(ans,cx(L,R,mid+1,r,id*2+1));
    }
    return ans;
}

inline void xgset(long long L,long long R,long long l,long long r,long long id,long long k)
{
    long long mid=(l+r)/2;
    if(L<=l&&r<=R)
    {
        dis1[id]=k;
        dis2[id]=0;
        tr[id]=k;
        return;
    }
    xf(l,r,id);
    if(L<=mid)
    {
        xgset(L,R,l,mid,id*2,k);
    }
    if(mid+1<=R)
    {
        xgset(L,R,mid+1,r,id*2+1,k);
    }
    tr[id]=max(tr[id*2],tr[id*2+1]);
}

inline void xgadd(long long L,long long R,long long l,long long r,long long id,long long k)
{
    long long mid=(l+r)/2;
    if(L<=l&&r<=R)
    {
        tr[id] += k;
        if(dis1[id] != INF)
        {
            dis1[id] += k;
        }
        else{
            dis2[id] += k;
        }
        return;
    }
    xf(l,r,id);
    if(L<=mid)
    {
        xgadd(L,R,l,mid,id*2,k);
    }
    if(mid+1<=R)
    {
        xgadd(L,R,mid+1,r,id*2+1,k);
    }
    tr[id]=max(tr[id*2],tr[id*2+1]);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>q;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    mtr(1, n, 1);
    for(long long i=1;i<=q;i++)
    {
        cin>>op;
        if(op==1)
        {
            cin>>x>>y>>xx;
            xgset(x,y,1,n,1,xx);
        }
        if(op==2)
        {
            cin>>x>>y>>xx;
            xgadd(x,y,1,n,1,xx);
        }
        if(op==3)
        {
            cin>>x>>y;
            cout<<cx(x,y,1,n,1)<<"\n";
        }

    }
    
    return 0;
}