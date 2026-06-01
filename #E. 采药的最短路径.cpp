#include<bits/stdc++.h>
using namespace std;
struct node {
	int x,y,dep;
};
char a[25][25];
int dx[]= {1,0,-1,0};
int dy[]= {0,1,0,-1};
queue <node> q;
int n,m,lb,sb;
void bfs(int x,int y,int dep) {
	//d[x][y]=dep++;
	a[x][y]='#';
	q.push({x,y,dep+1});
	while(!q.empty()) {
		node h=q.front();
		q.pop();
		for(int i=0; i<4; i++) {
			int nx=h.x+dx[i];
			int ny=h.y+dy[i];
			if(nx<=n&&ny<=m&&nx>0&&ny>0&&a[nx][ny]!='#') {
				a[nx][ny]='#';
				q.push({nx,ny,h.dep+1});q
				if(nx==lb&&ny==sb) {
					cout<<h.dep;
					exit(0);
				}
			}
		}
	}

}
int main() {
	int x1,y1;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			cin>>a[i][j];
			if(a[i][j]=='@') {
				x1=i,y1=j;
			}
			if(a[i][j]=='*') {
				lb=i,sb=j;
			}
		}
	}
	bfs(x1,y1,0);
	cout<<-1;
	return 0;
}

