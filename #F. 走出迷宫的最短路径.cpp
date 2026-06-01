#include<bits/stdc++.h>
using namespace std;
int n,m;
struct node {
	int x,y,dep;
};
queue<node> q;
int dx[]= {1,0,-1,0};
int dy[]= {0,1,0,-1};
int a[155][155];
int xx[155][155];
int yy[155][155];
int s1,s2,s3,s4;
bool flag=0;
struct po {
	int x,y;
};
void bfs(int x,int y,int dep) {
	xx[x][y]=-1;
	yy[x][y]=-1;
	a[x][y]=1;
	q.push({x,y,dep+1});
	while(!q.empty()) {
		node h=q.front();
		q.pop();
		for(int i=0; i<4; i++) {
			int nx=h.x+dx[i];
			int ny=h.y+dy[i];
			if(nx>=1&&ny>=1&&nx<=n&&ny<=m&&a[nx][ny]==0) {
				a[nx][ny]=1;
				q.push({nx,ny,dep+1});
				xx[nx][ny]=h.x;
				yy[nx][ny]=h.y;
				if(nx==s3&&ny==s4) {
					flag=1;
					stack<po> s;
					int cx = s3, cy = s4;
					while (cx != -1 && cy != -1) {
						s.push({cx, cy});
						int tx = xx[cx][cy];  
						int ty = yy[cx][cy];
						cx = tx;
						cy = ty;
					}
					bool hhh = true;
					while (!s.empty()) {
						po h = s.top();
						s.pop();
						if (!hhh) {
							cout << "->";
						}
						hhh = false;
						cout << "(" << h.x << "," << h.y << ")";
					}
					return;
				}
			}
		}
	}
}
int main() {
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			cin>>a[i][j];
		}
	}
	cin>>s1>>s2>>s3>>s4;
	bfs(s1,s2,1);
	if(flag==0) {
		cout<<"no way";
	}
	return 0;
}

