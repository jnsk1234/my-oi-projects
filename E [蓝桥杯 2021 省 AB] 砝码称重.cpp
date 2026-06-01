#include<bits/stdc++.h>
using namespace std;
long long w[105];
bool dp[105][100005];
long long n,sum,ans;
int main()
{
    dp[0][0]=1;
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>w[i];
        sum+=w[i];
    }
    for(long long i=1;i<=n;i++)
    {
        for(long long j=sum;j>=0;j--)
        {
            dp[i][j]=dp[i-1][abs(j-w[i])]||dp[i-1][j+w[i]]||dp[i-1][j];
        }
    }

        for(long long j=1;j<=sum;j++)
            if(dp[n][j])
            {
                ans++;
            }


    cout<<ans;
    return 0;
}
