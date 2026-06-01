#include<bits/stdc++.h>
using namespace std;
int a[20];
int n;
void dfs(int x,int d) {
	a[d]=x;
	for(int i=1; i<=d; i++) {
		cout<<a[i]<<' ';
	}
	cout<<endl;
	for(int i=x+1; i<=n; i++) {
		dfs(i,d+1);
	}
}
int main() {
	cin>>n;
	dfs(0,0);
	return 0;
}

