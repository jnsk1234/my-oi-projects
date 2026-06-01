#include<bits/stdc++.h>
using namespace std;
struct node{
	int x,y;
}; 
queue<node> q;
int a[105][105];
int n,m,k=1;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
void bfs(int x,int y)
{
	a[x][y]=k++; 
	q.push({x,y});
	while(!q.empty())
	{
		node h=q.front();
		q.pop();
		for(int i=0;i<4;i++)
		{
			int nx=h.x+dx[i];
			int ny=h.y+dy[i];
			if(nx<=n&&ny<=m&&nx>=1&&ny>=1&&a[nx][ny]==0)
			{
				a[nx][ny]=k++;
				q.push({nx,ny});
			}
		}
	}
}
int main()
{
	cin>>n>>m;
	bfs(1,1);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}
    return 0;
}

