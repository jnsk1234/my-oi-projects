#include<bits/stdc++.h>
using namespace std;
int n,k,a[100005],x,q,r;
double ans;
bool chark(int x) {
	int sum=0;
	for(int i=1; i<=n; i++) {
		sum+=a[i]/x;
	}
	return sum>=k;
}
int main() {
	cin>>n>>k;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		r=max(r,a[i]);
	}
	int l=1,mid=(l+r)/2;
	while(l<=r) {
		mid=(l+r)/2;
		if(chark(mid)) {
			l=mid+1;
		} else {
			r=mid-1;
		}
	}
	cout<<l-1;
	return 0;
}

