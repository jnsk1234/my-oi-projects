#include<bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin>>T;
	while(T--) {
		int n,m,k,x,y,d;
		bool a[1005][1005];
		bool b[1005][1005];
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		cin>>n>>m>>k;
		cin>>x>>y>>d;
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=m; j++) {
				char s;
				cin>>s;
				if(s=='x')
				{
					a[i][j]=1;
				}
				else{
					a[i][j]=0;
				}
			}
		}
		b[x][y]=1;
		int x1,y1;
		for(int i=1; i<=k; i++) {
			if(d==0) {
				x1=x,y1=y+1;
			}
			if(d==1) {
				x1=x+1,y1=y;
			}
			if(d==2) {
				x1=x,y1=y-1;
			}
			if(d==3) {
				x1=x-1,y1=y;
			}
			if(1<=x1&&x1<=n&&1<=y1&&y1<=m&&a[x1][y1]==0) {
				x=x1;
				y=y1;
				b[x][y]=1;
			}
			else{
				d=(d+1)%4;
			}
		}
		int ans=0;
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=m; j++) {
				if(b[i][j]==1)
				{
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}


	return 0;
}

