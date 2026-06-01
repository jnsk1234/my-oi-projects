#include<bits/stdc++.h>
using namespace std;
int dp[105][105];
int a[105][105];
int n;
int dp1(int x,int y)
{
    if(x==n)
    {
        return a[x][y];
    }
    if(dp[x][y]) return dp[x][y];
    return dp[x][y]=max(dp1(x+1,y+1) , dp1(x+1,y))+a[x][y];
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cin>>a[i][j];
        }
    }
     cout<<dp1(1,1);
    return 0;
}