#include <bits/stdc++.h>
using namespace std;
long long a[25][25],b[25][25];
int dx[8]= {1,2,2,1,-1,-2,-2,-1}; //Æ«ÒÆÁ¿Êý×é?
int dy[8]= {2,1,-1,-2,-2,-1,1,2};
int n,m,x,y;
int main() {
	cin>>n>>m>>x>>y;
	b[x][y]=1;
	for(int i=0; i<8; i++) {
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>=0 && nx<=n &&ny>=0 &&ny<=m) {
			b[nx][ny]=1;
		}
	}
	for(int i=0; i<=m; i++) {
		if(b[0][i]==1) {
			break;
		}
		a[0][i]=1;
	}
	for(int i=0; i<=n; i++) {
		if(b[i][0]==1) {
			break;
		}
		a[i][0]=1;
	}
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			if(b[i][j]==1) {
				a[i][j]=0;
			} else {
				a[i][j]=a[i-1][j]+a[i][j-1];
			}
		}
	}
	cout<<a[n][m];
	return 0;
}
