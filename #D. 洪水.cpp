#include<bits/stdc++.h>
using namespace std;
char a[505][505];
int n,m,k;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
void dfs(int x,int y)
{
	a[x][y]='1';
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if((a[nx][ny]=='0'||a[nx][ny]==0)&&nx>=0&&ny>=0&&nx<=n+1&&ny<=m+1)
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
	/*
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if((i==1||j==1)&&a[i][j]=='0')
			{
				dfs(i,j);
			}
		}
	}
	*/
	dfs(0,0);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i][j]=='0')
			{
				k++;
			}
		}
	}
	/*
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			cout<<a[i][j];
			cout<<endl;
		}
	}
	*/
	
	cout<<k;
    return 0;
}

