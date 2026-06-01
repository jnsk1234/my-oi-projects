#include<bits/stdc++.h>
using namespace std;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int n,m;
struct node{
	int x,y;
};
queue <node> q;
char a[105][105];
void bfs(int x,int y)
{
	a[x][y]='&';
	q.push({x,y});
	while(!q.empty())
	{
		node h=q.front();
		q.pop();
		for(int i=0;i<4;i++)
		{
			int nx=h.x+dx[i];
			int ny=h.y+dy[i];
			if(a[nx][ny]=='.')
			{
				a[nx][ny]='&';
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
	bfs(1,1);
	if(a[n][m]=='&')
	{
		cout<<"Yes";
		return 0;
	}
	cout<<"No";
    return 0;
}

