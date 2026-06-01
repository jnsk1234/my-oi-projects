#include<bits/stdc++.h>
using namespace std;
int n,k,a[100005],m,ll;
bool chark(int x) {
	int cnt=0,zuo=a[1];
	for(int i=2; i<=n; i++) {
		if((a[i]-zuo)>x) {
			cnt+=(a[i]-zuo)/x;
			if((a[i]-zuo)%x==0)
			{
				cnt--;
			}
		}
		zuo=a[i];
	}
	return cnt>m;
}
int main() {
	cin>>ll>>n>>m;
	a[0]=0;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	int l=1,r=ll,mid;
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

