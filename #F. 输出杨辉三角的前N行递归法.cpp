#include<bits/stdc++.h>
using namespace std;
int a[15][15];
int n;
void fun(int x) {
	if(x==1) {
		return ;
	}
	fun(x-1);
//	a[x][y]=a[x-1][y]+a[x-1][y-1];
	for(int i=1; i<=n; i++) {
		a[x][i]=a[x-1][i]+a[x-1][i-1];
	}
}
int main() {
	cin>>n;
	a[1][1]=1;
	fun(n);
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}

