#include<bits/stdc++.h>
using namespace std;
int si,vi,wi,v,n;
int dp[10005];
int main()
{
    cin>>n>>v;
    for(int i=1;i<=n;i++)
    {
        cin>>vi>>wi>>si;
        for(int j=1;j<=si;j++)
        {
            for(int k=v;k>=vi;k--)
            {
                dp[k]=max(dp[k-vi]+wi,dp[k]);
            }
        }
    }
    cout<<dp[v];
    return 0;
}