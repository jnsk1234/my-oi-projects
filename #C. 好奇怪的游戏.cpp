#include<bits/stdc++.h>
using namespace std;
struct node {
	int x,y,dep;
};
int dx[]= {2,1,-1,-2,-2,-1, 1, 2, 2,-2, 2,-2};
int dy[]= {1,2, 2, 1,-1,-2,-2,-1, 2, 2,-2,-2};
int s1,s2,s3,s4;
int a[25][25];
void bfs(int x,int y,int x1,int y1,int dep) {
	memset(a,0,sizeof(a));
	queue <node> q;
	a[x][y]=0;
	q.push({x,y,dep});
	while(!q.empty()) {
		node h=q.front();
		q.pop();
		for(int i=0; i<12; i++) {
			int nx=h.x+dx[i];
			int ny=h.y+dy[i];
			if(nx>=1&&ny>=1&&nx<=20&&ny<=20&&a[nx][ny]==0) {
				a[nx][ny]=1;
				q.push({nx,ny,h.dep+1});
				if(nx==x1&&ny==y1) {
					cout<<h.dep<<endl;
					return ;
				}
			}
		}
	}
}
int main() {
	cin>>s1>>s2>>s3>>s4;
	bfs(1,1,s1,s2,1);
	bfs(1,1,s3,s4,1);
	return 0;
}

