#include<bits/stdc++.h>
using namespace std;
struct node {
	int x,y,dep;
};
queue <node> q;
int dx[]= {2,1,-1,-2,-2,-1, 1, 2};
int dy[]= {1,2, 2, 1,-1,-2,-2,-1};
int n,m,x,y;
int k;
int a[405][405];
int d[405][405];
void bfs(int x,int y,int dep) {
	a[x][y]=1;
	d[x][y]=dep;
	q.push({x,y,dep});
	while(!q.empty()) {
		node h=q.front();
		q.pop();
		for(int i=0; i<8; i++) {
			int nx=h.x+dx[i];
			int ny=h.y+dy[i];
			if(nx<=n&&ny<=m&&nx>=1&&ny>=1&&a[nx][ny]==0) {
				a[nx][ny]=1;
				d[nx][ny]=h.dep+1;
				q.push({nx,ny,h.dep+1});
			}
		}
	}
}
int main() {
	cin>>n>>m>>k;
	memset(d,-1,sizeof(d));
	int cx,cy,mx,my;
	cin>>cx>>cy>>mx>>my;
	bfs(cx,cy,0);
	for(int i=1;i<=k;i++)
	{
		int p1,p2;
		cin>>p1>>p2;
		a[p1][p2]=1;
	}
	cout<<d[mx][my]<<' ';
	return 0;
}


