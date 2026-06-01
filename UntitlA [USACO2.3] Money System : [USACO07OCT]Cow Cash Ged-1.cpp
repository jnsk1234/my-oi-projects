#include<bits/stdc++.h>
using namespace std;
long long dp[10005];
long long a,b;
long long n,m;
int main()
{
    dp[0]=1;
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
    {
        cin>>a;
        for(long long j=a;j<=m;j++)
        {
            dp[j]+=dp[j-a];
        }
    }
    cout<<dp[m];
    return 0;
}