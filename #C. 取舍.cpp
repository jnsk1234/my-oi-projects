#include<bits/stdc++.h>
using namespace std;
int n;
int a[105];
int dp[105];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    dp[1]=a[1];
    dp[2]=max(a[1],a[2]);
    for(int i=3;i<=n;i++)
    {
       dp[i]=max(dp[i-1],dp[i-2]+a[i]);
    }
    cout<<dp[n];
    return 0;
}