#include<bits/stdc++.h>
using namespace std;
int n;
int dp[1000005];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        dp[i]=dp[i-1]+1;
        if(i-5>=0)
        {
            dp[i]=min(dp[i],dp[i-5]+1);
        }
        if(i-11>=0)
        {
            dp[i]=min(dp[i],dp[i-11]+1);
        }
        //cout<<dp[i]<< ' '<<i<<endl;
    }
    cout<<dp[n];
    
    return 0;
}