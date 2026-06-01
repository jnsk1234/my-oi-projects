#include<bits/stdc++.h>
using namespace std;
long long n,m,c0,d0;
long long a,b,c,d;
long long dp[1005];
int main()
{
    cin>>n>>m>>c0>>d0;
    for(long long i=c0;i<=n;i++)
    {
        dp[i]=(dp[i-c0]+d0);
    }
    for(long long i=1;i<=m;i++)
    {
        cin>>a>>b>>c>>d;
        for(long long j=n;j>=1;j--)
        {
            for(long long k=0;k<=(a/b)&&k*c<=j;k++)
            {
                dp[j]=max(dp[j],dp[j-k*c]+d*k);
            }
        }
    }
    cout<<dp[n];
    return 0;
}