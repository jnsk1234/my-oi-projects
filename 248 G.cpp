#include<bits/stdc++.h>
using namespace std;
int n;
int a[270];
int dp[305][305];
int ans;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        dp[i][i]=a[i];
    }
    for(int l=2;l<=n;l++)
    {
        for(int i=1;i+l-1<=n;i++)
        {
            int j=i+l-1;
            for(int k=i;k<=j;k++)
            {
                if(dp[i][k]==dp[k+1][j]&&dp[k+1][j]!=0)
                {
                    dp[i][j]=max(dp[i][j],dp[k+1][j]+1);
                }
            }
        }
    }
    // cout<<dp[1][n];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            ans=max(dp[i][j],ans);
        }
        
    }
    cout<<ans;
    return 0;
}