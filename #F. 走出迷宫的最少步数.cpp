#include<bits/stdc++.h>
using namespace std;
int r,c;
struct node {
	int x,y,dep;
};
queue<node> q;
int dx[]= {1,0,-1,0};
int dy[]= {0,1,0,-1};
char a[45][45];
void bfs(int x,int y,int dep) {
	a[x][y]='#';
	q.push({x,y,dep+1});
	while(!q.empty()) {
		node h=q.front();
		q.pop();
		for(int i=0; i<4; i++) {
			int nx=h.x+dx[i];
			int ny=h.y+dy[i];
			if(a[nx][ny]=='.') {
				a[nx][ny]='#';
				q.push({nx,ny,h.dep+1});
				if(nx==r&&ny==c) {
					cout<<h.dep;
					exit(0);
				}
			}
		}
	}
}
int main() {
	cin>>r>>c;
	for(int i=1; i<=r; i++) {
		for(int j=1; j<=c; j++) {
			cin>>a[i][j];
		}
	}
	bfs(1,1,1);
	return 0;
}

