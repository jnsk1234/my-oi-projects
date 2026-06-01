#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int dp[105][105];
int r,c;
int mar,mac,ma,ans;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int cnt;
void dfs(int x,int y,int d)
{
    if(dp[x][y]>=d) return ;
    dp[x][y]=d;
    for(int i=0;i<4;i++)
    {
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx>=1&&ny>=1&&nx<=r&&ny<=c&&a[nx][ny]>a[x][y])
        {
            dfs(nx,ny,d+1);
        }
    }
}
int main()
{
    cin>>r>>c;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            dfs(i,j,1);
            ans=max(dp[i][j],ans);
        }
    }
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            ans=max(dp[i][j],ans);
        }
    }
    cout<<ans;
    return 0;
}