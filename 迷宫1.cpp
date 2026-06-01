#include<bits/stdc++.h>
using namespace std;
char s;
int a[35][35];
int n;
int dx[]= {0,-1,0,1};
int dy[]= {-1,0,1,0};
int d[605][5];
//int k=1;
int dfs(int x,int y,int dep) {
	a[x][y]=1;
	d[dep][1]=x;
	d[dep][2]=y;
	if(x==n&&y==n) {
		cout<<dep<<":";
		for(int i=1; i<=dep; i++) {
			if(d[i][1]==n&&d[i][2]==n) {
				cout<<d[i][1]<<','<<d[i][2];
				break;
			}
			else{
				cout<<d[i][1]<<','<<d[i][2]<<"->";
			}
		}
		cout<<endl;
		return ;
	}
	for(int i=0; i<4; i++) {
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(a[nx][ny]!=1&&nx<=n&&ny<=n&&ny>=1&&nx>=1) {
			dfs(nx,ny,dep+1);
			a[nx][ny]=0;
		}
	}
}
int main() {
	cin>>n;
	dfs(1,1,1);
	return 0;
}

