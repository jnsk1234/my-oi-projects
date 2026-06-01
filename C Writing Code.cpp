#include<bits/stdc++.h>
using namespace std;
long long n,m,b,mod;
long long dp[505][505];
long long a[505];
long long ans;
int main()
{
    cin>>n>>m>>b>>mod;
    dp[0][0]=1;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(long long i=1;i<=n;i++)
    {
        for(long long j=1;j<=m;j++)
        {
            for(long long k=a[i];k<=b;k++)
            {
                dp[j][k]+=dp[j-1][k-a[i]];
                dp[j][k]%=mod;
            }
        }
    }
    for(long long i=0;i<=b;i++)
    {
        ans+=dp[m][i];
    }
    cout<<ans%mod;
    return 0;
}