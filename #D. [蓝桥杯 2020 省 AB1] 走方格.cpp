#include<bits/stdc++.h>
using namespace std;
int dp[35][35];
int n,m;
int main()
{
    cin>>n>>m;
    dp[1][1]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i%2==0&&j%2==0)
            {
                dp[i][j]=0;
            }
            else{
                dp[i][j]=max(dp[i][j],dp[i][j-1]+dp[i-1][j]);
            }
        }
    }
    cout<<dp[n][m]<<endl;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=m;j++)
    //     {
    //         cout<<dp[i][j]<<' ';
    //     }
    //     cout<<endl;  
    // }
     return 0;
}