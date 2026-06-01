#include<bits/stdc++.h>
using namespace std;
int n;
int a[10005];
int dp[10005];
int q=0;
int ans;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(a[j]<=a[i])
            {
                dp[i]=max(dp[i]+1,dp[j]);
            }
        }
        ans=max(ans,dp[i]);
    }
    cout<<ans;
    return 0;
}