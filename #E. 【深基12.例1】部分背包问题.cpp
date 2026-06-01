#include<bits/stdc++.h>
using namespace std;
long long dp[1005];
long long n,t,w,po,p;
int main()
{
    cin>>n>>t;
    for(int i=1;i<=n;i++)
    {
        cin>>w>>po;
        p=po/w;
        for(int j=1;j<=w;j++)
        {
            for(int k=t;k>=1;k--)
            {
                dp[k]=max(dp[k],dp[k-1]+p);
            }
        }
    }
    cout<<dp[t];
    return 0;
}