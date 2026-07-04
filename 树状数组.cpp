#include<bits/stdc++.h>
using namespace std;
long long n,m,x,y,k,ooo;
long long a[500005];
long long c[500005];
inline long long lowbit(long long x)
{
    return (-x)&x;
}
inline void xg(long long x,long long k)
{
    for(long long i=x;i<=n;i+=lowbit(i))
    {
        c[i]+=k;
    }
}
inline long long qzh(long long x)
{
    long long ans=0;
    for(long long i=x;i>=1;i-=lowbit(i))
    {
        ans+=c[i];
    }
    return ans;
}
inline long long cx(long long x,long long y)
{
    return qzh(y)-qzh(x-1);
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
        xg(i,a[i]);
    }
    for(long long i=1;i<=m;i++)
    {
        cin>>ooo;
        if(ooo==1)
        {
            cin>>x>>k;
            xg(x,k);
        }else{
            cin>>x>>y;
            cout<<cx(x,y)<<"\n";
        }
    }
    return 0;
}