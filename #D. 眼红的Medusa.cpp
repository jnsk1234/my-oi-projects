#include <bits/stdc++.h>
using namespace std;
int a[10000010],b[10000010],m,n,x;
int main() {
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(int i=1; i<=m; i++) {
		cin>>b[i];
	}
	sort(b+1,b+m+1);
	for(int i=1; i<=n; i++) {
		int l=1,r=m,mid;
		while(l<=r) {
			mid=(l+r)/2;
			if(a[i]<b[mid]) {
				r=mid-1;
			} else if(a[i]>b[mid]) {
				l=mid+1;
			} else {
				cout<<a[i]<<" ";
				break;
			}
		}
	}
	return 0;
}
