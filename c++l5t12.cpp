#include<bits/stdc++.h>
using namespace std;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
char a[1005][1005];
int k=1;
int n,m;
void dfs(int x,int y,char c)
{
	a[x][y]='/';
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx >= 1 && nx <= n && ny >= 1 && ny <= m&&a[nx][ny]==c)
		{
			dfs(nx,ny,a[nx][ny]);
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
			if(a[i][j]!='/') 
			{
				dfs(i,j,a[i][j]);
				k++;
			}
		}
	}
	cout<<k-1;

    return 0;
}

