#include<bits/stdc++.h>
using namespace std;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
char a[45][45];
int b[45][45];
int n,m;
void dfs(int x,int y,int bs) {
	b[x][y]=bs;
	for(int i=0; i<4; i++) {
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(a[nx][ny]=='.'&&b[nx][ny]>bs+1) {
			dfs(nx,ny,bs+1);
		}
	}
}
int main() {
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			cin>>a[i][j];
			b[i][j]=1e9;
		}
	}
	dfs(1,1,1);
	cout<<b[n][m];
	return 0;
}
