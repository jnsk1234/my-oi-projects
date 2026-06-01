#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[25];
int f[25];
void dfs(int x,int d) {
	a[d]=x;
	if(d==m) {
		for(int i=1; i<=d; i++) {
			cout<<a[i]<<' ';
		}
		cout<<endl;
		//f[x]=0;
		return ;
	}
	for(int i=x+1; i<=n; i++) {
		dfs(i,d+1);
	}
}
int main() {
	cin>>n>>m;
	dfs(0,0);
	return 0;
}

