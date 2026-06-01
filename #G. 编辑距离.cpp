#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int dp[2005][2005];
int n,m;
int main()
{
    cin>>s1>>s2;
    n=s1.size();
    m=s2.size();
    s1=' '+s1;
    s2=' '+s2;
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=i;
    }
    for(int i=0;i<=m;i++)
    {
        dp[0][i]=i;
    }
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=m;j++)
    //     {   
    //         cout<<dp[i][j]<<' ';
    //     }
    //     cout<<endl;
    // }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {   
            if(s1[i]==s2[j])
            {
                dp[i][j]=dp[i-1][j-1];
            }else{
                dp[i][j]=dp[i-1][j-1]+1;
                dp[i][j]=min(dp[i-1][j-1]+1,dp[i][j]);
                dp[i][j]=min(dp[i][j-1]+1,dp[i][j]);
                dp[i][j]=min(dp[i-1][j]+1,dp[i][j]);
            }
        }
    }
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=m;j++)
    //     {   
    //         cout<<dp[i][j]<<' ';
    //     }
    //     cout<<endl;
    // }
    cout<<dp[n][m];
    return 0;
}