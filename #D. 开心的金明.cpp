#include<bits/stdc++.h>
using namespace std;
long long m,v;
long long vi,po,p;
long long dp[30005];
int main()
{
    cin>>v>>m;
    for(long long i=1;i<=m;i++)
    {
        cin>>vi>>po;
        p=po*vi;
        for(long long j=v;j>=vi;j--)
        {
            dp[j]=max(dp[j],dp[j-vi]+p);
        }
    }
    cout<<dp[v];
    return 0;
}