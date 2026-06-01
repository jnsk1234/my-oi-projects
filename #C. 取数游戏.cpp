#include<bits/stdc++.h>
using namespace std;
int t,n,m;
int a[10][10];
int vis[10][10];
int ans;
int dx[]={0,1,0,-1,1,1,-1,-1};
int dy[]={1,0,-1,0,1,-1,1,-1};
int mx;
void dfs(int x,int y)
{
    if(y==m+1)
    {
        dfs(x+1,1);
        return ;
    }
    if(x==n+1)
    {
        mx=max(mx,ans);
        return ;
    }
    if(vis[x][y]==0)
    {
        ans+=a[x][y];
        for(int i=0;i<8;i++)
        {
            int nx=x+dx[i];
            int ny=y+dy[i];
            //vis[nx][ny]++; 
            if(nx>=1&ny>=1&&nx<=n&&ny<=m)
            {
                vis[nx][ny]++;        
            }
        }
        dfs(x,y+1);
        for(int i=0;i<8;i++)
        {
            int nx=x+dx[i];
            int ny=y+dy[i];
            vis[nx][ny]--;   
            // if(nx>=1&ny>=1&&nx<=n&&ny<=m)
            // {
            //     vis[nx][ny]=0;        
            // }
        }
        ans-=a[x][y];
    }
    dfs(x,y+1);
}
int main()
{
    cin>>t;
    while(t--)
    {
        memset(a,0,sizeof(a));
        memset(vis,0,sizeof(vis));
        ans=0;
        mx=0;
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>a[i][j];
            }
        }
        dfs(1,1);
        cout<<mx<<endl;
    }
    return 0;
}