#include<bits/stdc++.h>
using namespace std;
long long N,C,a[50005];
int chark(int x) {
	long long sum=0,cnt=1;
	for(long long i=1; i<=N; i++) {

		if(sum+a[i]>x) {
			cnt++;
			sum=a[i];
		} else {
			sum+=a[i];
		}
	}
	return C<cnt;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>N>>C;
	long long l=0,r;
	for(long long i=1; i<=N; i++) {
		cin>>a[i];
		l=max(l,a[i]);
		r=r+a[i];
	}
	long long mid;
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
/*
7 5
1
5
6
5
1
7
4
*/
