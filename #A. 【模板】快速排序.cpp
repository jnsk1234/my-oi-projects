#include<bits/stdc++.h>
using namespace std;
int a[100005];
int n;
void kkp(int l,int r) {
	int i=l,j=r,ji=a[l+r>>1];
	while(i<=j) {
		while(a[i]<ji) {
			i++;
		}
		while(a[j]>ji) {
			j--;
		}
		if(i<=j) {
			swap(a[i],a[j]);
			i++;
			j--;
		}
	}
	if(l<j) {
		kkp(l,j);
	}
	if(r>i) {
		kkp(i,r);
	}
}
int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	kkp(1,n);
	for(int i=1; i<=n; i++) {
		cout<<a[i]<<' ';
	}
	return 0;
}

