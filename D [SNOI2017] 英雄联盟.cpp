#include<bits/stdc++.h>
using namespace std;
long long n,k[1005],c[1005];
long long dp[1000005],m;
int main()
{
    dp[0]=1;
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
    {
        cin>>k[i];
    }
    for(long long i=1;i<=n;i++)
    {
        cin>>c[i];
    }
    for(long long i=1;i<=n;i++)
    {
        for(long long p=1000000;p>=0;p--)
            {
                for(long long j=1;j<=k[i];j++)
                {
                    if(j*c[i]<=p)
                   {     dp[p]=max(dp[p-j*c[i]]*j,dp[p]); }
                }
    }
}
    for(long long i=1;i<=1000000;i++)
    {
        if(dp[i]>=m)
        {
            cout<<i;
            return 0;
        }
    }
    return 0;
}
