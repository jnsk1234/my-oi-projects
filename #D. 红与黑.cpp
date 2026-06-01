#include<bits/stdc++.h>
using namespace std;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int k=1;
char a[25][25];
int n,m;
char x;
void dfs(int x,int y)
{
	k++;
	a[x][y]='&';
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(a[nx][ny]=='.'&&a[nx][ny]!='#')
		{
			dfs(nx,ny);
		}
	}
}
int main()
{
	cin>>n>>m;
	int q=0,e=0;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>x;
			a[i][j]=x;
			if(x=='@')
			{
				q=i,e=j;
			}
		}
	}
	dfs(q,e);
	cout<<k-1;
    return 0;
}

