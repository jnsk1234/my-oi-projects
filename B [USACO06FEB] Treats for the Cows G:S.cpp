#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[2005];
long long dp[2005][2005];
long long ans;
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
        
    for(long long len=1;len<=n;len++)
    {
        for(long long i=1;i+len-1<=n;i++)
        {
            long long j=len+i-1;
            long long day=n-len+1;
            dp[i][j]=max(dp[i][j-1]+(a[j]*day),dp[i+1][j]+(a[i]*day));
        }
    }
    for(long long i=1;i<=n;i++)
    {
        for(long long j=1;j<=n;j++)
        {
            ans=max(ans,dp[i][j]);
            // cout<<dp[i][j]<<' ';
        }
        // cout<<endl;
    }
    cout<<dp[1][n];
    return 0;
}
