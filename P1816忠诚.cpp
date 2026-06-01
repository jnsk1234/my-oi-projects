#include<bits/stdc++.h>
using namespace std;
long long a[100005];
long long tr[400005];
long long m,n;
long long xx,yy;
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
    tr[id]=min(tr[id*2],tr[id*2+1]);
}
inline long long cx(long long ll,long long rr,long long l,long long r,long long id)
{
    long long mid=(l+r)/2;
    long long ans=1e18;
    if(ll<=l&&rr>=r)
    {
        return tr[id];
    }
    if(mid>=ll)
    {
        ans=min(ans,cx(ll,rr,l,mid,id*2));
    }
    if(mid+1<=rr){
        ans=min(ans,cx(ll,rr,mid+1,r,id*2+1));
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>m>>n;
    for(long long i=1;i<=m;i++)
    {
        cin>>a[i];
    }
    mtr(1,m,1);
    for(long long i=1;i<=n;i++)
    {
        cin>>xx>>yy;
        cout<<cx(xx,yy,1,m,1)<<' ';
    }
    return 0;
}