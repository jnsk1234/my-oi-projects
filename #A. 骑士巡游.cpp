#include<bits/stdc++.h>
using namespace std;
struct node {
	int x,y,dep;
};
queue <node> q;
int n,m,x,y,s,t;
int dx[]= {2,1,-1,-2,-2,-1, 1, 2};
int dy[]= {1,2, 2, 1,-1,-2,-2,-1};
int a[55][55];
void bfs(int x,int y,int dep) {
	a[x][y]=1;
	q.push({x,y,0});
	while(!q.empty()) {
		node h=q.front();
		q.pop();
		for(int i=0; i<8; i++) {
			int nx=h.x+dx[i];
			int ny=h.y+dy[i];
			if(nx<=n&&ny<=m&&nx>=1&&ny>=1&&a[nx][ny]==0) {
				a[nx][ny]=1;
				q.push({nx,ny,h.dep+1});
				if(nx==s&&ny==t) {
					cout<<h.dep+1;
		 			exit(0);
				}
			}
		}
	}
}
int main() {
	cin>>n>>m>>x>>y>>s>>t;
	bfs(x,y,1);
	return 0;
}

