#include<bits/stdc++.h>
using namespace std;
const long long mod=998244353;
int T,N;
int p[5000005];
int a[5000005];
long long ans=0;
long long poww(int x,int p)
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
    cin>>T>>N;
    p[1]=1;
    for(int i=2;i<=N;i++)
    {
        p[i]=(p[i-1]*i)%mod;
    }
    a[n]=(poww(n,mod-2))%mod;
    for(int i=N;i>=1;i--)
    {
        a[i-1]=(a[i]*i)%mod;
    }
    while(T--)
    {
        cin>>n>>m;
        ans^=p[n]*a[n-m]*a[m];
    }
    cout<<ans;
    return 0;
}
//(a,p-2);