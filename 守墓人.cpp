#include<bits/stdc++.h>
using namespace std;
long long a[200005];
long long tree1[200005];
long long tree2[200005];
long long n,m,op,l,r,k;
inline long long lowbit(long long x)
{
    return (-x)&x;
}
inline long long qzh(long long l)
{
    // 我一想到我要连续不断的上1个月辅导班我就不行了
    long long ans=0,ans1=0;
    for(long long i=l;i>=1;i-=lowbit(i))
    {
        ans+=tree1[i];
        ans1+=tree2[i];
    }
    return ans1*(l+1)-ans;
}
inline void hzh(long long l,long long k)
{
    long long k1=l*k;
    for(long long i=l;i<=n;i+=lowbit(i))
    {
        tree1[i]+=k1;
        tree2[i]+=k;
    }
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
        hzh(i,a[i]-a[i-1]);
    }
    for(long long i=1;i<=m;i++)
    {
        cin>>op;
        if(op==1)
        {
            cin>>l>>r>>k;
            hzh(l,k);
            hzh(r+1,-k);
        }
        if(op==2)
        {
            cin>>k;
            hzh(1,k);
            hzh(2,-k);
        }
        if(op==3)
        {
            cin>>k;
            hzh(1,-k);
            hzh(2,k);
        }
        if(op==4)
        {
            cin>>l>>r;
            cout<<qzh(r)-qzh(l-1)<<"\n";
        }
        if(op==5)
        {
            cout<<qzh(1)<<"\n";
        }
    }
    

    return 0;
}