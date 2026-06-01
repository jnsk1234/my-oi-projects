#include<bits/stdc++.h>
using namespace std;
int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
int a[55][55];
int b[55][55];
int n;
void dfs(int x,int y ,int dep)
{
    b[x][y]=dep;
    for(int i=0;i<4;i++)
    {
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx<=n&&ny<=n&&ny>=1&&nx>=1&&a[nx][ny]==0&&dep+1<b[nx][ny])
        {
            dfs(nx,ny,dep+1);
        }
    }
}
int main()
{
    memset(b, 0x3f, sizeof(b));
   cin>>n;
   for(int i=1;i<=n;i++)
   {
    for(int j=1;j<=n;j++)
    {
        cin>>a[i][j];
    }
   }
   dfs(1,1,1);
   cout<<b[n][n];
}