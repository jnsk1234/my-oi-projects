#include<bits/stdc++.h>
using namespace std;
int n,v;
int dp[100005];
int vi,ni;
int main()
{
    cin>>v>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>vi>>ni;
        for(int j=vi;j<=v;j++)
        {
            dp[j]=max(dp[j],dp[j-vi]+ni);
        }
    }
    cout<<dp[v];
    return 0;
}