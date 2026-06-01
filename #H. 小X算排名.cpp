#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b) {
	return a>b;
}
int a[100005],b[100005],n,x;
int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>x;
		a[i]=x;
		b[i]=x;
	}
	sort(a+1,a+n+1);
	for(int i=1; i<=n; i++) {
		int ans=(upper_bound(a+1,a+n+1,b[i])-a);
		cout<<n-ans+2<<endl;
	}
	return 0;
}

