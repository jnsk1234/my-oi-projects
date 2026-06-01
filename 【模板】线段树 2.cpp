#include<bits/stdc++.h>
using namespace std;
long long tr[400005];
long long a[100005];
long long dis1[400005];//+
long long dis2[400005];//*
long long n,m,mod,op,x,y,kk;
inline void xf(long long l,long long r,long long id)
{
    long long mid=(l+r)/2;
    if(dis2[id]!=1)
    {
        tr[id*2]*=dis2[id];
        tr[id*2]%=mod;
        tr[id*2+1]*=dis2[id];
        tr[id*2+1]%=mod;

        dis1[id*2+1]*=dis2[id];
        dis1[id*2+1]%=mod;
        dis1[id*2]*=dis2[id];
        dis1[id*2]%=mod;

        dis2[id*2]*=dis2[id];
        dis2[id*2]%=mod;
        dis2[id*2+1]*=dis2[id];
        dis2[id*2+1]%=mod;

        dis2[id]=1;
    }

    if(dis1[id]!=0)
    {
        tr[id*2]+=(dis1[id]*(mid-l+1));
        tr[id*2]%=mod;
        tr[id*2+1] += (dis1[id] * (r - mid));
        tr[id*2+1]%=mod;  

        dis1[id*2]+=dis1[id];
        dis1[id*2]%=mod;
        dis1[id*2+1]+=dis1[id];
        dis1[id*2+1]%=mod;

        dis1[id]=0;
    }

}
inline void mtr(long long l,long long r,long long id){
    long long mid=(l+r)/2;
    if(l==r)
    {
        tr[id]=a[l];
        return ;
    }
    mtr(l,mid,id*2);
    mtr(mid+1,r,id*2+1);
    tr[id]=tr[id*2]+tr[id*2+1];
    tr[id]%=mod;
}
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
        ans%=mod;
    }
    if(mid+1<=R)
    {
        ans+=cx(L,R,mid+1,r,id*2+1);
        ans%=mod;
    }
    return ans;
}
inline void add(long long L,long long R,long long l,long long r,long long id,long long k)
{
    long long ans=0;
    long long mid=(l+r)/2;
    if(L<=l&&r<=R)
    {
        tr[id]+=(r-l+1)*k;
        tr[id]%=mod;
        dis1[id]+=k;
        dis1[id]%=mod;
        return ;
    }
    xf(l,r,id);
    if(L<=mid)
    {
        add(L,R,l,mid,id*2,k);
    }
    if(mid+1<=R)
    {   
        add(L,R,mid+1,r,id*2+1,k);
    }
    tr[id] = (tr[id*2] + tr[id*2+1]) % mod;
}
inline void cf(long long L,long long R,long long l,long long r,long long id,long long k)
{
    long long mid=(l+r)/2;
    if(L<=l&&r<=R)
    {
        tr[id]*=k;
        tr[id]%=mod;
        dis2[id]*=k;
        dis2[id]%=mod;
        dis1[id]*=k;
        dis1[id]%=mod;
        return ;
    }
    xf(l,r,id);
    if(L<=mid)
    {
        cf(L,R,l,mid,id*2,k);
    }
    if(mid+1<=R)
    {   
        cf(L,R,mid+1,r,id*2+1,k);
    }
    tr[id] = (tr[id*2] + tr[id*2+1]) % mod;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m>>mod;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(long long i=1;i<=4*n;i++)
    {
        dis2[i]=1;
    }
    mtr(1,n,1);
    for(long long i=1;i<=m;i++)
    {
        cin>>op>>x>>y;
        if(op==1)
        {
            cin>>kk;
            cf(x,y,1,n,1,kk);
        }
        if(op==2)
        {
            cin>>kk;
            add(x,y,1,n,1,kk);
        }
        if(op==3)
        {
            cout<<cx(x,y,1,n,1)<<"\n";
        }
    }
    return 0;
}