#include<bits/stdc++.h>
using namespace std;
int dx[]= {0,1,0,-1};
int dy[]= {1,0,-1,0};
int T;
char a[105][105];
void dfs(int cx,int cy,int n) {
	a[cx][cy]='#';
	for(int i=0; i<4; i++) {
		int nx=cx+dx[i];
		int ny=cy+dy[i];
		if(a[nx][ny]=='.'&&nx>=0&&ny>=0&&ny<n&&nx<n) {
			dfs(nx,ny,n);
		}
	}
}
int main() {
	cin>>T;
	while(T--) {
		int cx,cy,mx,my,n;
		cin>>n;
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				a[i][j]='0';
			}
		}
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				cin>>a[i][j];
			}
		}
		cin>>cx>>cy>>mx>>my;
		if(a[mx][my]=='#'||a[cx][cy]=='#') {
			cout<<"NO"<<endl;
			continue;
		}
		dfs(cx,cy,n); 
			if(a[mx][my]=='#') {
				cout<<"YES"<<endl;
			} else {
				cout<<"NO"<<endl;
			}
	}
	return 0;
}
