#include<bits/stdc++.h>
using namespace std;
long long dp[20005];
long long n,m;
long long w,p;
long long o;
int main()
{
    cin>>n>>m;
    dp[0]=1;
    for(long long i=1;i<=n;i++)
    {
        cin>>o;
        for(long long j=m;j>=o;j--)
        {
            dp[j]+=dp[j-o];
        }
    }
    // for(long long i=1;i<=m;i++)
    // {
    //     cout<<dp[i];
    // }
    cout<<dp[m];
    return 0;
}