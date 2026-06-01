#include<bits/stdc++.h>
using namespace std;
int n;
int dp[1000005];
int main()
{
    cin>>n;
    dp[1]=0;
    for(int i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            dp[i]=min(dp[i-1]+1,dp[i/2]+1);
        }else{
            dp[i]=dp[i-1]+1;
        }
        //cout<<dp[i]<< ' '<<i<<endl;
    }
    cout<<dp[n];
    
    return 0;
}