#include<bits/stdc++.h>
using namespace std;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int a[35][35];
int d[35][35];
int n,m;
void dfs(int x,int y,int sum)
{
	d[x][y]=sum;
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(d[nx][ny]>d[x][y]+a[nx][ny]&&nx<=n&&ny<=m&&nx>=1&&ny>=1)
		{
			dfs(nx,ny,d[x][y]+a[nx][ny]);
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
			d[i][j]=1e9;
		}
	}	
	dfs(1,1,a[1][1]);
	cout<<d[n][m]<<endl;
    return 0;
}

