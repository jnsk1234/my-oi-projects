#include<bits/stdc++.h>
using namespace std;
int n;
long long dp[40005];
int main()
{
    cin>>n;
    dp[0]=1;
    for(int i=1;i<=3;i++)
    { 
        for(int j=i;j<=n;j++)
        {
            dp[j]=max(dp[j-i]+dp[j],dp[j]);
        }
    }
    cout<<dp[n];
    return 0;
}