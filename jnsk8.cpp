#include<bits/stdc++.h>
using namespace std;
int a[10005],n,sc;
int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(int i=1; i<=n-1; i++) {
		for(int j=1; j<=n-i; j++) {
			if(a[j]>a[j+1]) {
				sc++;
				swap(a[j],a[j+1]);
			}
		}
	}
	cout<<sc;
	return 0;
}

