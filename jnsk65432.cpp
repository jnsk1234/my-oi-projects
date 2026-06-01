#include<bits/stdc++.h>
using namespace std;
int n,c;
int a[1000005];
bool check(int x) {
	int now = 1, num = 1;
	for (int i = 2; i <= n; i++) {
		if (a[i]-a[now]>=x) {
			now=i;
			num++;
		}
	}
	return num>=c;
}
int main() {
	cin>>n>>c;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	int l=-1,r=n;
	sort(a+1,a+n+1);
	while(l+1!=r) {
		int mid=(r+l)/2;
		if(check(mid)) {
			l=mid;
		} else {
			r=mid;
		}
	}
	cout<<l;
	return 0;
}

