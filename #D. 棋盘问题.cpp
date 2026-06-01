#include<bits/stdc++.h>
using namespace std;
char p[10][10];
int ans;
int n,k;
int l[100];
void dfs(int x,int dep) {
	if(dep==k) {
		ans++;
		return ;
	}
	for(int i=x; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			if(p[i][j]=='#'&&l[j]==0) {
				l[j]=1;
				dfs(i+1,dep+1);
				l[j]=0;
			}
		}
	}
}
int main() {
	while(1==1) {
		cin>>n>>k;
		if(n==-1&&k==-1) {
			break;
		} else {
			memset(p,0,sizeof(p));
			memset(l,0,sizeof(l));
			for(int i=1; i<=n; i++) {
				for(int j=1; j<=n; j++) {
					cin>>p[i][j];
				}
			}
			ans=0;
			dfs(1,0);
			cout<<ans<<endl;
		}
	}
	return 0;
}

