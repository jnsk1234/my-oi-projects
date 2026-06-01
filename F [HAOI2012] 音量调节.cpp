#include<bits/stdc++.h>
using namespace std;
int c,n,bl,ml,ans=-1;
int dp[1005][1005];
int main()
{
    cin>>n>>bl>>ml;
    dp[0][bl]=1;
    for(int i=1;i<=n;i++)
    {
        cin>>c;
        for(int j=0;j<=ml;j++)
        {
            if(dp[i-1][j]==1)
            {
                if(j+c<=ml)
                {
                    dp[i][j+c]=1;
                }
                if(j-c>=0)
                {
                    dp[i][j-c]=1;
                }
            }
        }
    }
    for(int i=ml;i>=0;i--)
    {
        if(dp[n][i]==1)
        {
            // cout<<dp[n][i]<<' ';
            ans=i;
            break;
        }
    }
    cout<<ans;
    return 0;
}