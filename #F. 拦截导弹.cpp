#include<bits/stdc++.h>
using namespace std;
int a[1000+5],dp[1005];
int n,ans=-1,q=-1;
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
        q=0;
        for(int j=1;j<=i;j++)
        {
            if(a[i]>=a[j])
            {
                q=max(dp[j]+1,q);
            }
        }
        dp[i]=q;
        ans=max(ans,dp[i]);
    }
    cout<<ans;
    return 0;
}