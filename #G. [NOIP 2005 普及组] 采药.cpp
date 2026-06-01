#include<bits/stdc++.h>
using namespace std;
int dp[1005],t,m;
int w,p;
int main()
{
    cin>>t>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>w>>p;
        for(int j=t;j>=w;j--)
        {
            dp[j]=max(dp[j-w]+p,dp[j]);
        }
    }
    cout<<dp[t];
    
    return 0;
}