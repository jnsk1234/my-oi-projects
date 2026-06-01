#include<bits/stdc++.h>
using namespace std;
long long a[15][15],t,sx,sy,fx,fy,n,m,ans;
long long dx[]={0,1,0,-1};
long long dy[]={1,0,-1,0};
void dfs(int x,int y)
{
    if(x==fx&&y==fy)
    {
        ans++;
        return;
    }
    for(long long i=0;i<4;i++)
    {
        long long nx=x+dx[i];
        long long ny=y+dy[i];
        if(nx<=n&&nx>=1&&ny<=m&&ny>=1&&a[nx][ny]==0)
        {
            a[nx][ny]=1;
            dfs(nx,ny);
            a[nx][ny]=0;
        }
    }
}
int main()
{
    cin>>n>>m>>t;
    cin>>sx>>sy>>fx>>fy;
    a[sx][sy]=1;
    for(long long i=1;i<=t;i++)
    {
        long long x,y;
        cin>>x>>y;
        a[x][y]=1;
    }
    dfs(sx,sy);
    cout<<ans;
    return 0;
}