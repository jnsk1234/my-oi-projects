#include<bits/stdc++.h>
using namespace std;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
char a[105][105];
int k=0;
int n,m;
void dfs(int x,int y)
{
	a[x][y]='0';
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(a[nx][ny]!='0'&&nx>0&&ny>0&&nx<=n&&ny<=m)
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
				dfs(i,j);
				k++;
			}
		}
	}
	cout<<k;
    return 0;
}
