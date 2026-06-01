#include<bits/stdc++.h>
using namespace std;
struct node {
	int x,y,dep;
};
int a[305][305];
int d[305][305];
int dx[]= {1,0,-1,0};
int dy[]= {0,1,0,-1};
queue <node> q;
int n,m;
void bfs(int x,int y,int dep) {
	d[x][y]=1;
	q.push({x,y,dep});
	while(!q.empty()) {
		node h=q.front();
		q.pop();
		for(int i=0; i<4; i++) {
			int nx=h.x+dx[i];
			int ny=h.y+dy[i];
			if(nx>=0&&ny>=0&&nx<305&&ny<305&&h.dep+1<a[nx][ny]&&d[nx][ny]==0) {
				d[nx][ny]=1;
				q.push({nx,ny,h.dep+1});
				if(a[nx][ny]==0x3f3f3f3f) {
					cout<<h.dep+1;
					exit(0);
				}
			}
		}
	}

}
int main() {
	memset(a,0x3f3f3f3f,sizeof(a));
	cin>>m;
	for(int i=1; i<=m; i++) {
		int x,y,t;
		cin>>x>>y>>t;
		a[x][y]=min(a[x][y],t);
		for(int i=0; i<4; i++) {
			int nx=x+dx[i];
			int ny=y+dy[i];
			if(nx>=0&&ny>=0) {
				a[nx][ny]=min(a[nx][ny],t);
			}
		}
	}
	bfs(0,0,0);
	cout<<-1;
	return 0;
}

