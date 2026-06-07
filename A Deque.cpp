#include<bits/stdc++.h>
using namespace std;
int n;
int a[3005];
int dp[3005][3005];
int ans=-1;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int len=1;len<=n;len++)
    {
        for(int i=1;i<=n+len-1;i++)
        {
            int j=len+i-1;
            if(len%2==0)
            {
                // 先 x
                dp[i][j]=max(dp[i][j]+a[i],dp[i][j]+a[j]);
            }
            else{
                // 后 y
                dp[i][j]=min(dp[i][j]-a[i],dp[i][j]-a[j]);
            }
        }
    } 
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            ans=max(dp[i][j],ans);
        }
    }
    return 0;
}