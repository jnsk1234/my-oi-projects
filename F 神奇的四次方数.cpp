#include<bits/stdc++.h>
using namespace std;
long long dp[1000005];
long long n;
long long main()
{

    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        dp[i]=1e9;
    }
    for(long long i=1;i<=sqrt(sqrt(n));i++)
    { 
        for(long long j=i*i*i*i;j<=n;j++)
        {
            dp[j]=min(dp[j],dp[j-(i*i*i*i)]+1);
        }
    }
    cout<<dp[n];
    return 0; 
}