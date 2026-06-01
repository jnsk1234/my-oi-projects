#include<bits/stdc++.h>
using namespace std;
int n,m;
int dp[10005];
int a;
int main()
{
    cin>>n>>m;
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        for(int j=m;j>=a;j--)
        {
            dp[j]+=dp[j-a];
        }
    }
    cout<<dp[m];
    
    return 0;
}