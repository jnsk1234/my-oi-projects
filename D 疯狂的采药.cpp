#include<bits/stdc++.h>
using namespace std;
long long dp[10000005];
long long m,t,a,b;
int main()
{
    cin>>t>>m;
    for(long long i=1;i<=m;i++)
    {
        cin>>a>>b;
        for(long long j=a;j<=t;j++)
        {
            dp[j]=max(dp[j],dp[j-a]+b);
        }
    }
    cout<<dp[t];
    
    return 0; 
}