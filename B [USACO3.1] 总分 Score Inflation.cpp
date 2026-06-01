#include<bits/stdc++.h>
using namespace std;
int m,n,p,t;
int dp[10005];
int main()
{
    cin>>m>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p>>t;
        for(int j=t;j<=m;j++)
        {
            dp[j]=max(dp[j],dp[j-t]+p);
        }
    }
    cout<<dp[m];
    
    return 0;
}