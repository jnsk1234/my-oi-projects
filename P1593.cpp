#include<bits/stdc++.h>
using namespace std;
const long long mod=9901;
long long a,b;
long long ans=1;
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
long long sum(long long p,long long b){
    p%=mod;
    if(p==1) return (b+1)%mod;
    return (poww(p,b+1)-1)*poww(p-1,mod-2)%mod;
}
int main()
{
    cin>>a>>b;
    for(long long i=2;i<=a/i;i++)
    {
        if(a%i==0)
        {
            long long cnt=0;
            while(a%i==0)
            {
                a/=i;
                cnt++;
            }
            ans=ans*sum(i,cnt*b)%mod;
        }
    }
    if(a>1)
    {
        ans=ans*sum(a,b)%mod;
    }
    cout<<ans;
    return 0;
}
