#include<bits/stdc++.h>
using namespace std;
int n,a[100000+5],dp[100000+5];
int ans=0;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    dp[1]=a[1];
    
    for(int i=2;i<=n;i++)
    {
        dp[i]=max(dp[i-1]+a[i],a[i]);
        ans=max(dp[i],ans);
    }
    cout<<ans;
    return 0;
}