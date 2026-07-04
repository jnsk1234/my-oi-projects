#include<bits/stdc++.h>
using namespace std;
long long tree[500005];
long long a[500005];
long long l,r,n,m,ooo,kk;
inline long long lowbit(long long x)
{
    return (-x)&x;
}
inline void qjxg1(long long x,long long k)
{
    for(long long i=x;i<=n;i+=lowbit(i))
    {
        tree[i]+=k;
    }
}
inline void qjxg2(long long x,long long y,long long k)
{
    qjxg1(x,k);
    qjxg1(y+1,-k);
}
inline long long cx(long long x)
{
    long long ans=0;
    for(long long i=x;i>=1;i-=lowbit(i))
    {
        ans+=tree[i];
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        qjxg1(i,a[i]-a[i-1]);
    }
    for(long long i=1;i<=m;i++)
    {
        cin>>ooo;
        if(ooo==1)
        {
            cin>>l>>r>>kk;
            qjxg2(l,r,kk);
        }
        if(ooo==2)
        {
            cin>>l;
            cout<<cx(l)<<"\n";
        }
    }
    
    return 0;
}