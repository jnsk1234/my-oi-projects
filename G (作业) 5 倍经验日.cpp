#include<bits/stdc++.h>
using namespace std;
long long a[1005],b[1005],c[1005];
long long dp[1005];
long long n,x;
int main()
{
    cin>>n>>x;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }
    for(long long i=1;i<=n;i++)
    {
        for(long long j=x;j>=0;j--)
        {
            if(j>=c[i])
                dp[j]=max(dp[j-c[i]]+b[i],dp[j]+a[i]);
            else
                dp[j]=max(dp[j],dp[j]+a[i]);
        }
    }
    cout<<dp[x]*5;
    return 0;
}