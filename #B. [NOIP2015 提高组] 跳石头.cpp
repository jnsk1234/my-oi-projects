#include<bits/stdc++.h>
using namespace std;
long long n,k,a[100005],x,q,m,ll;
bool chark(long long x) {
	long long cnt=0,zuo=0;
	for(long long i=1; i<=n; i++) {
		if((a[i]-zuo)<x) {
			cnt++;
		}else{
			zuo=a[i];
		}
	}
	return cnt<=m;
}
int main() {
	cin>>ll>>n>>m;
	a[0]=0;
	for(long long i=1; i<=n; i++) {
		cin>>a[i];
	}
	a[n+1]=ll;
	long long l=1,r=ll,mid=(l+r)/2;
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

