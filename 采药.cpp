#include<bits/stdc++.h>
using namespace std;
char a[30][30];
int d[30][30];
int m,n;
char s;
int cfx,cfy,mbx,mby;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
void dfs(int x,int y,int bs)
{
	d[x][y]=bs;
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i];
		int ny=y+dy[i];
		if((a[nx][ny]=='.'||a[nx][ny]=='*')&&d[nx][ny]>bs+1)
		{
			dfs(nx,ny,bs+1);
		}
	}

}
int main()
{
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>s;
			if(s=='@')
			{
				cfx=i,cfy=j;
			}
			if(s=='*')
			{
				mbx=i,mby=j;
			}
			a[i][j]=s;
			d[i][j]=1e9;
		 } 
	}
	dfs(cfx,cfy,1);
	if(d[mbx][mby]==1e9)
	{
		cout<<-1;
		return 0;
	}
	cout<<d[mbx][mby]-1;
	return 0;
}

