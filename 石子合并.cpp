#include<bits/stdc++.h>
using namespace std;
int inf=1e9;
int dp[305][305];
int n;
int m[305];
int s[305];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>m[i];
        s[i]=m[i]+s[i-1];
    }
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<s[i]<<' ';
    // }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            dp[i][j]=inf;
        }
    }
    for(int i=1;i<=n;i++)
    {
        dp[i][i]=0;
    }
    for(int l=1;l<=n;l++)
    {
        for(int i=1;i+l-1<=n;i++)
        {
            int j=i+l-1;
            for(int k=i;k<=j;k++)
            {
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+s[j]-s[i-1]);
            }
        }
    }
    cout<<dp[1][n];
    return 0;
}
// 石子合并