#include<bits/stdc++.h>
using namespace std;
int dp[10005];
int a[10005];
int n;
int ans=0;
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
        int q=0;
        for(int j=1;j<=i;j++)
        {
            if(a[i]>=a[j])
            {
                q=max(q,dp[j]+1);
            }
        }
        dp[i]=q;
        ans=max(ans,dp[i]);
    }
    cout<<ans;
    return 0;
}