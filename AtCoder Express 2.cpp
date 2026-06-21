#include<bits/stdc++.h>
using namespace std;
int n,m,q;
int l,r;
int main()
{
    cin>>n>>m>>q;
    vector<int> a(n+5);
    vector<vector<int>> dp(n + 5, vector<int>(n+5, 0));
    vector<vector<int>> cnt(n + 5, vector<int>(n+5, 0));
    for(int i=1;i<=m;i++)
    {
        cin>>l>>r;
        cnt[l][r]++;
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n;j++)
        {
            dp[i][j]=dp[i+1][j]+dp[i][j-1]+cnt[i][j]-dp[i+1][j-1];
        }
    }
    for(int i=1;i<=q;i++)
    {
        cin>>l>>r;
        cout<<dp[l][r]<<"\n";
    }
    return 0;
}