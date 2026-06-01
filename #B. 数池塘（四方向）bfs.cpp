#include<bits/stdc++.h>
using namespace std;
char a[105][105];
int n,m,ans;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
struct node{
	int x,y;
};
queue<node> q;
void bfs(int x,int y)
{
	a[x][y]='.';
	q.push({x,y});
	while(!q.empty())
	{
		node h=q.front();
		q.pop();
		for(int i=0;i<4;i++)
		{
			int nx=h.x+dx[i];
			int ny=h.y+dy[i];
			if(nx<=n&&ny<=m&&nx>=1&&ny>=1&&a[nx][ny]=='W')
			{
				a[nx][ny]='.';
				q.push({nx,ny});
			}
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
			if(a[i][j]=='W')
			{
				ans++;
				bfs(i,j);
			}
		}
	}
	cout<<ans;
    return 0;
}

