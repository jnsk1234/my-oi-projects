#include<bits/stdc++.h>
using namespace std;
int x,y,c,n;
int ans=1e9;
int f[105][105];
void dfs(int a,int b,int dep) {
	if(dep>c || f[a][b]==1) {
		return;
	}
	f[a][b]=1;
	ans=min(ans,abs(a+b-n));
	if(a<x) {
		dfs(x,b,dep+1);
	}
	if(b<x) {
		dfs(a,y,dep+1);
	}
	if(a<y-b) {
		dfs(0,a+b,dep+1);
	} else {
		dfs(a-(y-b),y,dep+1);
	}
	if(b<x-a) {
		dfs(a+b,0,dep+1);
	} else {
		dfs(x,b-(x-a),dep+1);
	}
	if(a>0) {
		dfs(0,b,dep+1);
	}
	if(b>0) {
		dfs(a,0,dep+1);
	}
	f[a][b]=0;
}
int main() {
	cin>>x>>y>>c>>n;
	dfs(0,0,0);
	cout<<ans;
	return 0;
}

