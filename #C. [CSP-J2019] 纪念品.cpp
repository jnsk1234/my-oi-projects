#include<bits/stdc++.h>
using namespace std;
int t,n,m;
int ni,vi;
int p[105][105];
int dp[10005];
int main()
{
    cin>>t>>n>>m;
    for(int i=1;i<=t;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>p[i][j];
        }
    }
    for(int i=1;i<=t-1;i++)
    {
        memset(dp,0,sizeof(dp));
        for(int j=1;j<=n;j++)
        {
            if(p[i][j]>=p[i+1][j]) continue;
            else{
                ni=p[i+1][j]-p[i][j];
                vi=p[i][j];
                for(int o=vi;o<=m;o++)
                {
                    dp[o]=max(dp[o],dp[o-vi]+ni);
                }
            }
        }
        m+=dp[m];
    }
    cout<<m;
    return 0;
}