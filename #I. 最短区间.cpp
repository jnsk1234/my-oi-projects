#include<bits/stdc++.h>
using namespace std;
long long s,n,a[500020],c[500020];
long long chark(long long x) {
	long long cnt=0;
	for(long long i=x;i<=n;i++)
	{
		if(c[i]-c[i-x]>=s)
		{
			return 0;
		}
	}
	return 1;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>s>>n;
	for(long long i=1; i<=n; i++) {
		cin>>a[i];
		c[i]=a[i]+c[i-1];
	}
	if(c[n]<s)
	{
		cout<<0;
		return 0;
	}
	long long l=1,r=n,mid;
	while(l<=r) {
		mid=(l+r)/2;
		if(chark(mid)) {
			l=mid+1;
		} else {
			r=mid-1;
		}
	}
	cout<<l;
	return 0;
}
