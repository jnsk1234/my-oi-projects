#include<bits/stdc++.h>
using namespace std;
const int mod=100003;
int dp[100005];
int n,k;
int main()
{
    cin>>n>>k;
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(i-j>=0)
            {
                dp[i]=(dp[i]+dp[i-j])%mod;
            }
        }
    }
    cout<<dp[n];
    
    return 0;
}