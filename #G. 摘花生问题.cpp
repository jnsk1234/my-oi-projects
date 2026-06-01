#include<bits/stdc++.h>
using namespace std;
long long a[105][105];
int m,n;
int main() {
	cin>>m>>n;
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=n; j++) {
			cin>>a[i][j];
		}
	}
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=n; j++) {
			a[i][j]+=max(a[i-1][j],a[i][j-1]);
		}
		
	}
	cout<<a[m][n];
	return 0;
}
