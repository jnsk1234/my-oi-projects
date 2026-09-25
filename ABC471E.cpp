#include<bits/stdc++.h>
using namespace std;
const long long mod=998244353;
long long a[200005];
long long sum1,sum2,cnt;
int n,k;
long long p[200005];//阶乘
long long ly[200005];//阶乘的你愿
long long ans;
long long qpow(long long x,long long p)
{
    long long ans=1;
    while(p)
    {
        if(p&1)
        {
            ans=(ans*x)%mod;
        }
        x=x*x%mod;
        p/=2;
    }
    return ans;
}
long long c(int n,int m)
{
    return p[n]%mod*ly[n-m]%mod*ly[m]%mod;
}
int main()
{
    // cout<<c(5,2)<<"\n";
    cin>>n>>k;
    p[0] = 1;
    for(int i=1;i<=n;i++)
    {
        p[i]=(p[i-1]*i)%mod;
        // cout<<1<<"\n";
        // cout<<p[i]<<"\n";
    }
    ly[n]=qpow(p[n],mod-2);
    for(int i=n;i>=1;i--)
    {
        ly[i-1]=(ly[i]*i)%mod;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum1=(sum1+a[i])%mod;
        sum2=(sum2+a[i]*a[i])%mod;
    }
    cnt=(sum1*sum1%mod-sum2+mod)%mod;
    ans=(c(n-1,k-1)*sum2%mod+c(n-2,k-2)*cnt%mod+mod)%mod;
    cout<<ans;
    return 0;
}

/*
C(n-1,k-1)*(ai^2)+C(n-2,k-2)*(aij);
*/
