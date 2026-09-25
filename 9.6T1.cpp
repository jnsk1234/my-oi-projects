#include<bits/stdc++.h>
using namespace std;
const long long mod=998244353;
long long T,N;
long long p[5000005];
long long a[5000005];
long long ans=0;
long long n,m;
long long poww(long long x,long long p)
{
    long long ans=1;
    while(p)
    {
        if(p&1) ans=ans*x%mod;
        x=x*x%mod;
        p/=2;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>T>>N;
    // cout<<poww(2,10);
    p[1]=1;
    for(int i=2;i<=N;i++)
    {
        p[i]=(p[i-1]*i)%mod;
    }
    a[N]=poww(p[N],mod-2);
    for(int i=N;i>=1;i--)
    {
        a[i-1]=a[i]*i%mod;
        // cout<<a[i]<<"\n";
    }
    // cout<<a[N];
    while(T--)
    {
        cin>>n>>m;
        ans^=p[n]%mod*a[n-m]%mod*a[m]%mod;
        // cout<<p[n]*a[n-m]*a[m]<<"\n";
    }
    cout<<ans;
    return 0;
}
//(a,p-2);