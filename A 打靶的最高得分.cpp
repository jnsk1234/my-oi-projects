#include<bits/stdc++.h>
using namespace std;
long long n;
long long dp[1005][1005];
int main()
{
    cin>>n;
    vector<long long> a(n+5);
    a[0]=1;
    a[n+1]=1;
    for(long long i=1;i<=n;++i)
    {
        cin>>a[i];
    }
    for(long long len=3;len<=n+2;++len)
    {
        for(long long i=0;i+len-1<=n+1;++i)
        {
            long long j=i+len-1;
            for(long long k=i+1;k<j;++k)
            {
                dp[i][j]=max(dp[i][j],dp[i][k]+dp[k][j]+(a[k]*a[i]*a[j]));
            }
        }
    }
    cout<<dp[0][n+1];
    return 0;
}
// A 打靶的最高得分