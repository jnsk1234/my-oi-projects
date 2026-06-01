#include<bits/stdc++.h>
using namespace std;
int n,x;
int a[205][205];
int dp[205];
int main()
{
    cin>>n;
    for(int i=1;i<n;i++)
    {
        cin>>dp[i];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            cin>>x;
            if(dp[j]==0||dp[j]>dp[i]+x)
            {
                dp[j]=dp[i]+x;
            }
            // if(dp[j]==dp[i]+a[i][j])
            // {
            //     dp[j]=dp[i];
            // }
        }
    }
    cout<<dp[n-1];
    return 0;
}