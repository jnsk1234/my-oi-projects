#include<bits/stdc++.h>
using namespace std;
int n;
int dp[205][205];
int inf=1e9;
int a[205][205];
int main()
{
    cin>>n;
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            cin>>dp[i][j];
        }
    }
    // cout<<dp[1][n];
    for(int l=1;l<=n;l++)
    {
        for(int i=1;i+l-1<=n;i++)
        {
            int j=i+l-1;
            for(int k=i;k<=j;k++)
            {
                if(dp[i][j]==0)
                {
                    dp[i][j]=inf;
                }
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
            }
        }
    }
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout<<dp[i][j]<<' ';
    //     }
    //     cout<<"\n";
    // }
    cout<<dp[1][n];

    
    return 0;
}