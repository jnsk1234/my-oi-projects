#include<bits/stdc++.h>
using namespace std;
int dp[45005];
int q,n,s;
int main()
{
    cin>>q>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        for(int j=q;j>=s;j++)
        {
            dp[j]=max(dp[j-s]+s,dp[j]);
        }
    }
    cout<<dp[q];
    
    return 0;
}