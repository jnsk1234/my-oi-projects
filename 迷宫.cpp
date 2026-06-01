#include<bits/stdc++.h>
using namespace std;
char s;
int a[35][35];
int n;
int dx[]= {0,-1,0,1};
int dy[]= {-1,0,1,0};
int d[605][5];
//int k=1;
void dfs(int x,int y,int dep) {
	a[x][y]=1;
	d[dep][1]=x;
	d[dep][2]=y;
	if(x==n&&y==n) {
		for(int i=1; i<=dep; i++) {
			if(d[i][1]==n&&d[i][2]==n) {
				cout<<'('<<d[i][1]<<','<<d[i][2]<<')';
				break;
			}
			else{
				cout<<'('<<d[i][1]<<','<<d[i][2]<<')'<<"->";
			}
		}
		exit(0);
	}
	for(int i=0; i<4; i++) {
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(a[nx][ny]==0&&nx<=n&&ny<=n&&ny>=1&&nx>=1) {
			dfs(nx,ny,dep+1);
		}
	}
}
int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			scanf("%1d",&a[i][j]);
		}
	}
	dfs(1,1,1);
	return 0;
}
