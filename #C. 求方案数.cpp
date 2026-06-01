#include<bits/stdc++.h>
using namespace std;
long long w,p,n,v;
long long dp[1005];
long long sum[1005];
long long ans;
long long cnt;
int main()
{
    cin>>n>>v;
    for(long long i=0;i<=v;i++)
    {
        sum[i]=1;
    }
    for(long long i=1;i<=n;i++)
    {
        cin>>w>>p;
        for(long long j=v;j>=w;j--)
        {
            long long cnt=0;
            long long mx=max(dp[j],dp[j-w]+p);
            if(mx==dp[j]) cnt=sum[j]%10000000007;
            if(mx==dp[j-w]+p) cnt+=sum[j-w]%10000000007;
            dp[j]=mx;
            sum[j]=cnt%10000000007;
        }
    }
    cout<<sum[v]%10000000007;
    return 0;
}