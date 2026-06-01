#include<bits/stdc++.h>
using namespace std;
long long a[10000005];
long long l,r,mid,x,n;
int main() {

	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	int T;
	cin>>T;
	while(T--) {
		cin>>x;
		l=1,r=n;
		while(l<=r) {
			mid=(r+l)/2;
			while(l<=r) {
				mid=(r+l)/2;
				if(a[mid]==x) {
					l=mid+1;
				} else if(a[mid]<x) {
					l=mid+1;
				} else {
					r=mid-1;
				}
			}
		}
		if(a[l-1]>=x)
		{
			cout<<l-1<<" ";
		}else{
			cout<<-1<<' ';
		}
	}

	return 0;
}
