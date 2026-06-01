#include<bits/stdc++.h>
using namespace std;
char a[35][35];
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int n;
void dfs(int x,int y)
{
	a[x][y]='&';
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(a[nx][ny]!='1'&&(a[nx][ny]=='0'||a[nx][ny]==0)&&nx<=n&&ny<=n&&nx>=0&&ny>=0)
		{
			dfs(nx,ny);
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	dfs(0,0);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]=='&')
			{
				cout<<'0'<<' ';
			}
			if(a[i][j]=='1')
			{
				cout<<'1'<<' ';
			}
			if(a[i][j]=='0')
			{
				cout<<'2'<<' ';
			}
		}
		cout<<endl;
	} 
    return 0;
}

