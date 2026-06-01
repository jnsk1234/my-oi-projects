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
int s1,s2;
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
				if(nx<=r&&ny<=c&&nx>0&&ny>0&&nx==s1&&ny==s2) {
					cout<<h.dep-1;
					exit(0);
				}
			}
		}
	}
}
int main() {
	int x1,x2;
	cin>>r>>c;
	for(int i=1; i<=r; i++) {
		for(int j=1; j<=c; j++) {
			cin>>a[i][j];
			if(a[i][j]=='S')
			{
				x1=i,x2=j;
			}
			if(a[i][j]=='T')
			{
				s1=i,s2=j;
				a[i][j]='.';
			}
		}
	}
	bfs(x1,x2,1);
	return 0;
}


