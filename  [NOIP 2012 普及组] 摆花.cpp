#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long dp[105];
long long a[105];
long long ans;
int main()
{
    dp[0]=1;
    cin>>n>>m;
    for(long long i=1;i<=n;i++){
        cin>>a[i];
    }
    for(long long i=1;i<=n;i++)
    {
        for(long long j=m;j>=1;j--)
        {
            for(long long k=1;k<=a[i]&&k<=j;k++)
            {
                dp[j]=(dp[j-k]+dp[j])%1000007;
            }
        }
    }
    cout<<dp[m]%1000007;
    return 0;
}