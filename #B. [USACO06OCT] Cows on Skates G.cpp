#include<bits/stdc++.h>
using namespace std;
long long n,m,ans;
long long dx[]={0,1,0,-1};
long long dy[]={1,0,-1,0};
char a[120][80];
struct A{
    int x,y;
}j[100005];
void dfs(int x,int y,int bs)
{
    a[x][y]='*';
    if(x==n&&y==m)
    {
        cout<<1<<' '<<1<<endl; 
        for(int i=1;i<bs;i++)
        {
            cout<<j[i].x<<' '<<j[i].y<<endl;
        }
        exit(0);
    }
    for(long long i=0;i<4;i++)
    {
        long long nx=x+dx[i];
        long long ny=y+dy[i];
        if(nx<=n&&nx>=1&&ny<=m&&ny>=1&&a[nx][ny]=='.')
        {
            //a[nx][ny]='*';
            j[bs].x=nx;
            j[bs].y=ny;
            dfs(nx,ny,bs+1);
            //a[nx][ny]='.';
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
    a[1][1]='*';
    dfs(1,1,1);
    return 0;
}