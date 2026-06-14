#include<bits/stdc++.h>
using namespace std;
long long dp[1005][1005];
long long a[1005];
long long n;
long long ans=-1;
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i+n]=a[i];
    }

    for(long long len=1;len<=n*2;len++)
    {
        for(long long i=1;i+len-1<=n*2;i++)
        {
            long long j=i+len-1;
            for(long long k=i;k<j;k++)
            {
                dp[i][j]=max(dp[i][j],dp[i][k]+dp[k+1][j]+a[i]*a[k+1]*a[j+1]);
            }
        }
    }
    for(long long i=1;i<=n;i++)
    {
        ans=max(ans,dp[i][i+n-1]);
    }
    cout<<ans;
    return 0;
}