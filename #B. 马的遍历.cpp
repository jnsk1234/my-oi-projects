#include<bits/stdc++.h>
using namespace std;
struct node {
	int x,y,dep;
};
queue <node> q;
int dx[]= {2,1,-1,-2,-2,-1, 1, 2};
int dy[]= {1,2, 2, 1,-1,-2,-2,-1};
int n,m,x,y;
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
	cin>>n>>m>>x>>y;
	memset(d,-1,sizeof(d));
	bfs(x,y,0);
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			
				cout<<d[i][j]<<' ';
		
		}
		cout<<endl;
	}
	return 0;
}

