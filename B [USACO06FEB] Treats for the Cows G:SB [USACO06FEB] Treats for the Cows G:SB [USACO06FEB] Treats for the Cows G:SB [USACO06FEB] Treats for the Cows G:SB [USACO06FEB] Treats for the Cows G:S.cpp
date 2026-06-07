#include<bits/stdc++.h>
using namespace std;
int n;
int a[2005];
int dp[2005][2005];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
        
    for(int len=1;len<=n;len++)
    {
        for(int i=1;i+len-1<=n;i++)
        {
            int j=len+i-1;
            int day=n-len;
            dp[i][j]=max(dp[i][j-1]+(a[j]*day),dp[i+1][j]+(a[i]*day));
        }
    }
    cout<<dp[1][n];
    return 0;
}