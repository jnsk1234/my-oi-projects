#include<bits/stdc++.h>
using namespace std;
long long dp[10005];
long long a;
long long n;
int main()
{
    dp[0]=1;
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a;
        for(long long j=i;j<=n;j++)
        {
            dp[j]=max(dp[j-i]+a,dp[j]);
        }
    }
    cout<<dp[n]-1;
    return 0;
}