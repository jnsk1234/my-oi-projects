#include<bits/stdc++.h>
using namespace std;
struct node{
	int x,y;
};
queue<node> q;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int ans;
int n,m,p1,p2;
int a[1005][1005];
bool b[1005][1005];
void bfs(int x,int y)
{
	b[x][y]=1;
	ans++;
	q.push({x,y});
	while(!q.empty())
	{
		node h=q.front();
		q.pop();
		for(int i=0;i<4;i++)
		{
			int nx=h.x+dx[i];
			int ny=h.y+dy[i];
			if(nx<=n&&ny<=m&&nx>0&&ny>0&&a[nx][ny]<=a[x][y]&&b[nx][ny]==0)
			{
				b[nx][ny]=1;
				a[nx][ny]=a[x][y];
				q.push({nx,ny});
				ans++;
			}
		}
	}
}
int main()
{
	cin>>n>>m>>p1>>p2;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
		 } 
	}
	bfs(p1,p2);
	cout<<ans;

    return 0;
}

