#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[3005];
long long dp[3005][3005];
long long ans=-1;
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
            if((n-len)%2==0)
            {
                // 先 x
                dp[i][j]=max(dp[i+1][j]+a[i],dp[i][j-1]+a[j]);
            }
            else{
                // 后 y
                dp[i][j]=min(dp[i+1][j]-a[i],dp[i][j-1]-a[j]);
            }
        }
    } 
    cout<<dp[1][n];
    return 0;
}