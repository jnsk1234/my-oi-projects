#include<bits/stdc++.h>
using namespace std;
long long dp[1000005];
int a[10]={0,1,5,11};
int n;
int main()
{

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        dp[i]=1e9;
    }
    for(long long i=1;i<=3;i++)
    { 
        for(long long j=a[i];j<=n;j++)
        {
            dp[j]=min(dp[j],dp[j-a[i]]+1);
        } 
    }
    cout<<dp[n];
    return 0; 
}