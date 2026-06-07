#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[1005];
long long mod=19650827;
long long dp[1005][1005][3];
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    
    }

    for(long long i=1;i<=n;i++)
    {
        dp[i][i][0]=1;
    }
    for(long long len=2;len<=n;len++)
    {
        for(long long i=1;i+len-1<=n;i++)
        {
            long long j=len+i-1;
            // if(a[i][j][0]!=0)
            // if(dp[i][j][0])
            if(a[i]<a[i+1])
            {
                dp[i][j][0]+=dp[i+1][j][0];
                dp[i][j][0]%=mod;
            }if(a[i]<a[j])
            {
                dp[i][j][0]+=dp[i+1][j][1];
                dp[i][j][0]%=mod;
            }if(a[j]>a[i])
            {
                dp[i][j][1]+=dp[i][j-1][0];
                dp[i][j][1]%=mod;
            }if(a[j]>a[j-1])
            {
                dp[i][j][1]+=dp[i][j-1][1];
                dp[i][j][1]%=mod;
            }

        }
    }
    cout<<(dp[1][n][0]+dp[1][n][1])%mod;
    return 0;
}