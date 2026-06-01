#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[105][105];
int qx[]={1,0,-1,0};
int qy[]={0,1,0,-1};
int ans;
void dfs(int x,int y)
{
    a[x][y]='0';
    for(int i=0;i<4;i++)
    {
        int nx=x+qx[i];
        int ny=y+qy[i];
        if(a[nx][ny]!='0'&&nx<=n&&ny<=m&&ny>=1&&nx>=1)
        {
            dfs(nx,ny);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]!='0')
            {
                ans++;
                dfs(i,j);
            }
        }
    }
    cout<<ans;
    return 0;
}